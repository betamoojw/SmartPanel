#include <Arduino.h>
#include <esp32_smartdisplay.h>
#include <ui.h>
#ifdef ARDUINO_ARCH_ESP32
#include <WiFiManager.h>
#endif

#define DEV_NAME "SmartPanel"

// callback previous to OTA-Update
void wifimgr_pre_ota() {
}

WiFiManager wifiManager;
WiFiManagerParameter custom_field; // global param ( for non blocking w params )
char custom_field_str[200];


void setup()
{
#ifdef ARDUINO_USB_CDC_ON_BOOT
    delay(5000);
#endif

    Serial.begin(115200);
    Serial.setDebugOutput(true);

    wifiManager.setHostname(DEV_NAME);
    wifiManager.setClass("invert"); // Dark Mode
    wifiManager.setBreakAfterConfig(false);
    wifiManager.setTitle(DEV_NAME);
    wifiManager.setConfigPortalBlocking(false); //Not waiting for Connection/Configuration

    //Configure Menu 
    std::vector<const char *> menu = {"wifi","info","param","update","sep","restart", "erase"};
    wifiManager.setMenu(menu);

    // wifiManager.autoConnect(DEV_NAME);
    wifiManager.setTimeout(60000*8);
    if (!wifiManager.autoConnect(DEV_NAME)) {
        Serial.println("Failed to connect and hit timeout");
        delay(8000);
        // ESP.reset();
    }

    wifiManager.startWebPortal(); //Enable Webpage after initial Configuration
    wifiManager.setPreOtaUpdateCallback(wifimgr_pre_ota);

    smartdisplay_init();

    smartdisplay_lcd_set_backlight(0.8); // 0 is off, 0.5 is half and 1 is full brightness.

    __attribute__((unused)) auto disp = lv_disp_get_default();
    // lv_disp_set_rotation(disp, LV_DISP_ROT_90);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_180);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_270);

    ui_init();
    uint16_t area = 15;
    uint8_t line = 7;
    uint8_t device = 254;

    //Setup Page for detailed Information
    sprintf(custom_field_str,"<br/><label for='customfieldid'>Device is programmed with ETS</label><br>Physical-Address: %d.%d.%d", area, line, device);
    new (&custom_field) WiFiManagerParameter(custom_field_str); // custom html input
    wifiManager.addParameter(&custom_field);
}

void loop()
{
    lv_timer_handler();
    wifiManager.process();
    delay(5);
}