// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SmartPanel

#ifndef _SMARTPANEL_UI_H
#define _SMARTPANEL_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

// #include "lv_i18n.h"
#include "ui_helpers.h"
#include "ui_events.h"

void contentSwitching_Animation(lv_obj_t * TargetObject, int delay);

// SCREEN: ui_main
void ui_main_screen_init(void);
extern lv_obj_t * ui_main;
extern lv_obj_t * ui_Header;
extern lv_obj_t * ui_SysInfo;
extern lv_obj_t * ui_wifiDisconnect;
extern lv_obj_t * ui_wifiConnect;
extern lv_obj_t * ui_notification;
void ui_event_setting(lv_event_t * e);
extern lv_obj_t * ui_setting;
extern lv_obj_t * ui_Zones;
void ui_event_layoutBtn(lv_event_t * e);
extern lv_obj_t * ui_layoutBtn;
extern lv_obj_t * ui_zoneDropList;
extern lv_obj_t * ui_ContentLight;
extern lv_obj_t * ui_lightSwitch0;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Switch3;
extern lv_obj_t * ui_lightSwitch1;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Switch4;
extern lv_obj_t * ui_lightSwitch2;
extern lv_obj_t * ui_Image8;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Switch7;
extern lv_obj_t * ui_lightSwitch3;
extern lv_obj_t * ui_Image9;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_Switch8;
extern lv_obj_t * ui_lightDimming2;
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Switch5;
extern lv_obj_t * ui_Slider3;
extern lv_obj_t * ui_lightDimming3;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui_Label6;
void ui_event_Switch6(lv_event_t * e);
extern lv_obj_t * ui_Switch6;
extern lv_obj_t * ui_Slider4;
extern lv_obj_t * ui_lightDimming4;
extern lv_obj_t * ui_Image15;
extern lv_obj_t * ui_Label13;
void ui_event_Switch9(lv_event_t * e);
extern lv_obj_t * ui_Switch9;
extern lv_obj_t * ui_Slider9;
extern lv_obj_t * ui_ContentScene;
extern lv_obj_t * ui_sceneGroup;
extern lv_obj_t * ui_sceneHome;
extern lv_obj_t * ui_sceneDinner;
extern lv_obj_t * ui_sceneParty;
extern lv_obj_t * ui_sceneNight;
extern lv_obj_t * ui_sceneReading;
extern lv_obj_t * ui_sceneLeave;
extern lv_obj_t * ui_sceneMorning;
extern lv_obj_t * ui_sceneMovie;
extern lv_obj_t * ui_sceneSleep;
extern lv_obj_t * ui_groupCurtain;
extern lv_obj_t * ui_curtainCtrl1;
extern lv_obj_t * ui_Image11;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_btnCurtainOpen1;
extern lv_obj_t * ui_btnCurtainStop1;
extern lv_obj_t * ui_btnCurtainClose1;
extern lv_obj_t * ui_Slider6;
extern lv_obj_t * ui_curtainCtrl;
extern lv_obj_t * ui_Image12;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_btnCurtainOpen;
extern lv_obj_t * ui_btnCurtainStop;
extern lv_obj_t * ui_btnCurtainClose;
extern lv_obj_t * ui_Slider5;
extern lv_obj_t * ui_curtainCtrl2;
extern lv_obj_t * ui_Image13;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_btnCurtainOpen2;
extern lv_obj_t * ui_btnCurtainStop2;
extern lv_obj_t * ui_btnCurtainClose2;
extern lv_obj_t * ui_Slider7;
extern lv_obj_t * ui_curtainCtrl3;
extern lv_obj_t * ui_Image14;
extern lv_obj_t * ui_Label12;
extern lv_obj_t * ui_btnCurtainOpen3;
extern lv_obj_t * ui_btnCurtainStop3;
extern lv_obj_t * ui_btnCurtainClose3;
extern lv_obj_t * ui_Slider8;
extern lv_obj_t * ui_ContentHVAC;
extern lv_obj_t * ui_HVAC;
void ui_event_Arc1(lv_event_t * e);
extern lv_obj_t * ui_Arc1;
extern lv_obj_t * ui_functionName;
extern lv_obj_t * ui_Temp;
extern lv_obj_t * ui_btnMinus;
extern lv_obj_t * ui_btnPlus;
extern lv_obj_t * ui_onoff;
extern lv_obj_t * ui_modeIcon;
extern lv_obj_t * ui_modeSelect;
extern lv_obj_t * ui_fanspeedIcon;
extern lv_obj_t * ui_fanspeedSelect;
extern lv_obj_t * ui_GroupBlank;
extern lv_obj_t * ui_MTechSlogan;
extern lv_obj_t * ui_Nav1;
extern lv_obj_t * ui_menuLight1;
void ui_event_Btn6(lv_event_t * e);
extern lv_obj_t * ui_Btn6;
extern lv_obj_t * ui_menuSelected6;
extern lv_obj_t * ui_menuScene1;
void ui_event_Btn7(lv_event_t * e);
extern lv_obj_t * ui_Btn7;
extern lv_obj_t * ui_menuSelected7;
extern lv_obj_t * ui_menuCurtain1;
void ui_event_Btn8(lv_event_t * e);
extern lv_obj_t * ui_Btn8;
extern lv_obj_t * ui_menuSelected8;
extern lv_obj_t * ui_menuHVAC1;
void ui_event_Btn9(lv_event_t * e);
extern lv_obj_t * ui_Btn9;
extern lv_obj_t * ui_menuSelected9;
extern lv_obj_t * ui_menuMusic1;
void ui_event_Btn10(lv_event_t * e);
extern lv_obj_t * ui_Btn10;
extern lv_obj_t * ui_menuSelected10;
extern lv_obj_t * ui_menuSecure;
void ui_event_Btn11(lv_event_t * e);
extern lv_obj_t * ui_Btn11;
extern lv_obj_t * ui_menuSelected11;
extern lv_obj_t * ui_menuEnv;
void ui_event_Btn13(lv_event_t * e);
extern lv_obj_t * ui_Btn13;
extern lv_obj_t * ui_menuSelected13;
extern lv_obj_t * ui_menuEnergy;
void ui_event_Btn14(lv_event_t * e);
extern lv_obj_t * ui_Btn14;
extern lv_obj_t * ui_menuSelected14;
extern lv_obj_t * ui_menubg1;
// CUSTOM VARIABLES
extern lv_obj_t * uic_Header;
extern lv_obj_t * uic_SysInfo;
extern lv_obj_t * uic_wifiDisconnect;
extern lv_obj_t * uic_wifiConnect;
extern lv_obj_t * uic_notification;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_Zones;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_zoneDropList;
extern lv_obj_t * uic_Content;
extern lv_obj_t * uic_lightSwitch0;
extern lv_obj_t * uic_lightSwitch1;
extern lv_obj_t * uic_lightSwitch0;
extern lv_obj_t * uic_lightSwitch1;
extern lv_obj_t * uic_lightDimming1;
extern lv_obj_t * uic_lightDimming1;
extern lv_obj_t * uic_lightDimming1;
extern lv_obj_t * uic_Content;
extern lv_obj_t * uic_lightDimming0;
extern lv_obj_t * uic_sceneHome;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_lightDimming1;
extern lv_obj_t * uic_lightDimming1;
extern lv_obj_t * uic_curtainCtrl2;
extern lv_obj_t * uic_curtainCtrl2;
extern lv_obj_t * uic_Content;
extern lv_obj_t * uic_functionName;
extern lv_obj_t * uic_Temp;
extern lv_obj_t * uic_modeSelect;
extern lv_obj_t * uic_fanspeedSelect;
extern lv_obj_t * uic_MTechSlogan;
extern lv_obj_t * uic_Nav1;
extern lv_obj_t * uic_menuLight;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuScene;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuCurtain;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuMedia;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuMedia;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuSecure;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuSecure;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuEnergy;
extern lv_obj_t * uic_Btn;

// SCREEN: ui_config
void ui_config_screen_init(void);
void ui_event_config(lv_event_t * e);
extern lv_obj_t * ui_config;
extern lv_obj_t * ui_Header1;
extern lv_obj_t * ui_SysInfo1;
extern lv_obj_t * ui_wifiDisconnect1;
extern lv_obj_t * ui_wifiConnect1;
extern lv_obj_t * ui_notification1;
void ui_event_setting1(lv_event_t * e);
extern lv_obj_t * ui_setting1;
extern lv_obj_t * ui_Zones1;
void ui_event_layoutBtn1(lv_event_t * e);
extern lv_obj_t * ui_layoutBtn1;
extern lv_obj_t * ui_zoneDropList1;
extern lv_obj_t * ui_menubg2;
extern lv_obj_t * ui_Nav2;
extern lv_obj_t * ui_menuLight2;
void ui_event_Btn1(lv_event_t * e);
extern lv_obj_t * ui_Btn1;
extern lv_obj_t * ui_menuSelected1;
extern lv_obj_t * ui_menuScene2;
void ui_event_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Btn2;
extern lv_obj_t * ui_menuSelected2;
extern lv_obj_t * ui_menuCurtain2;
void ui_event_Btn3(lv_event_t * e);
extern lv_obj_t * ui_Btn3;
extern lv_obj_t * ui_menuSelected3;
extern lv_obj_t * ui_menuHVAC2;
void ui_event_Btn4(lv_event_t * e);
extern lv_obj_t * ui_Btn4;
extern lv_obj_t * ui_menuSelected4;
extern lv_obj_t * ui_menuMusic2;
void ui_event_Btn5(lv_event_t * e);
extern lv_obj_t * ui_Btn5;
extern lv_obj_t * ui_menuSelected5;
extern lv_obj_t * ui_menuSecure2;
extern lv_obj_t * ui_Btn12;
extern lv_obj_t * ui_menuSelected12;
// CUSTOM VARIABLES
extern lv_obj_t * uic_SysInfo;
extern lv_obj_t * uic_wifiDisconnect;
extern lv_obj_t * uic_notification;
extern lv_obj_t * uic_notification;
extern lv_obj_t * uic_setting;
extern lv_obj_t * uic_zoneDropList;
extern lv_obj_t * uic_Nav1;
extern lv_obj_t * uic_menuLight;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuScene;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuCurtain;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuMedia;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuMedia;
extern lv_obj_t * uic_Btn;
extern lv_obj_t * uic_menuMedia;
extern lv_obj_t * uic_Btn;

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_222132382);    // assets/icons8-no-wifi-48.png
LV_IMG_DECLARE(ui_img_364238874);    // assets/icons8-wifi-48.png
LV_IMG_DECLARE(ui_img_686816875);    // assets/icons8-info-48.png
LV_IMG_DECLARE(ui_img_887305853);    // assets/icons8-setting-48.png
LV_IMG_DECLARE(ui_img_540379319);    // assets/icons8-layout-48.png
LV_IMG_DECLARE(ui_img_1387712441);    // assets/icons8-light-24.png
LV_IMG_DECLARE(ui_img_1927447659);    // assets/icons8-scene-home-48.png
LV_IMG_DECLARE(ui_img_540303068);    // assets/icons8-scene-dinner-48.png
LV_IMG_DECLARE(ui_img_1681734448);    // assets/icons8-scene-party-48.png
LV_IMG_DECLARE(ui_img_496361014);    // assets/icons8-scene-night-48.png
LV_IMG_DECLARE(ui_img_255321356);    // assets/icons8-scene-reading-48.png
LV_IMG_DECLARE(ui_img_1787871197);    // assets/icons8-scene-leave-48.png
LV_IMG_DECLARE(ui_img_161571896);    // assets/icons8-scene-morning-48.png
LV_IMG_DECLARE(ui_img_2056880108);    // assets/icons8-scene-movie-48.png
LV_IMG_DECLARE(ui_img_890010057);    // assets/icons8-scene-sleep-48.png
LV_IMG_DECLARE(ui_img_2064658507);    // assets/icons8-curtain-24.png
LV_IMG_DECLARE(ui_img_1282234856);    // assets/icons8-curtain-open-24.png
LV_IMG_DECLARE(ui_img_917433972);    // assets/icons8-curtain-stop-24.png
LV_IMG_DECLARE(ui_img_1176167512);    // assets/icons8-curtain-close-24.png
LV_IMG_DECLARE(ui_img_1729470306);    // assets/icons8-minus-36.png
LV_IMG_DECLARE(ui_img_414704204);    // assets/icons8-plus-36.png
LV_IMG_DECLARE(ui_img_1735427615);    // assets/icons8-mode-36.png
LV_IMG_DECLARE(ui_img_2040129323);    // assets/icons8-fan-36.png
LV_IMG_DECLARE(ui_img_591590446);    // assets/icons8-light-control-32.png
LV_IMG_DECLARE(ui_img_menu_selected_png);    // assets/menu_selected.png
LV_IMG_DECLARE(ui_img_2067470297);    // assets/icons8-scene-select-32.png
LV_IMG_DECLARE(ui_img_2032833556);    // assets/icons8-curtain-control-32.png
LV_IMG_DECLARE(ui_img_1220919042);    // assets/icons8-hvac-control-32.png
LV_IMG_DECLARE(ui_img_1742922419);    // assets/icons8-music-control-32.png
LV_IMG_DECLARE(ui_img_84168725);    // assets/icons8-secure-control-32.png
LV_IMG_DECLARE(ui_img_402352260);    // assets/icons8-environment-info-32.png
LV_IMG_DECLARE(ui_img_1188028765);    // assets/icons8-energy-monitoring-32.png
LV_IMG_DECLARE(ui_img_menu_bg_png);    // assets/menu_bg.png

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
