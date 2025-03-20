// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Coffee wending

#ifndef _COFFEE_WENDING_UI_H
#define _COFFEE_WENDING_UI_H

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

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Main
void ui_Main_screen_init(void);
extern lv_obj_t * ui_Main;
extern lv_obj_t * ui_Image8;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Container1;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Image11;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label4;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
extern lv_obj_t * ui_Image13;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label7;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
extern lv_obj_t * ui_Image14;
extern lv_obj_t * ui_Image9;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_Label10;
void ui_event_Button4(lv_event_t * e);
extern lv_obj_t * ui_Button4;
extern lv_obj_t * ui_Image15;
extern lv_obj_t * ui_Image10;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_Label11;
void ui_event_Button5(lv_event_t * e);
extern lv_obj_t * ui_Button5;
extern lv_obj_t * ui_Image12;
extern lv_obj_t * ui_Image21;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Label12;
void ui_event_Button6(lv_event_t * e);
extern lv_obj_t * ui_Button6;
extern lv_obj_t * ui_Image19;
extern lv_obj_t * ui_Image18;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_Label14;
// CUSTOM VARIABLES

// SCREEN: ui_Payment
void ui_Payment_screen_init(void);
void ui_event_Payment(lv_event_t * e);
extern lv_obj_t * ui_Payment;
extern lv_obj_t * ui_QRCodeCanvas;
void ui_event_Image3(lv_event_t * e);
extern lv_obj_t * ui_Image3;
void ui_event_Image4(lv_event_t * e);
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_Label_Item;
extern lv_obj_t * ui_Label_Price;
extern lv_obj_t * ui_Image5;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Image16;
// CUSTOM VARIABLES
extern lv_obj_t * uic_QRCodeCanvas;

// SCREEN: ui_Preparation
void ui_Preparation_screen_init(void);
void ui_event_Preparation(lv_event_t * e);
extern lv_obj_t * ui_Preparation;
extern lv_obj_t * ui_img_coffee;
extern lv_obj_t * ui_Image_mask;
extern lv_obj_t * ui_Img_glass;
extern lv_obj_t * ui_Label_Status;
void ui_event_Image6(lv_event_t * e);
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_Image17;
extern lv_obj_t * ui_img_coffee1;
extern lv_obj_t * ui_Image_mask1;
extern lv_obj_t * ui_Img_glass1;
extern lv_obj_t * ui_img_coffee2;
extern lv_obj_t * ui_Image_mask2;
// CUSTOM VARIABLES

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_images_logo_png);    // assets/images/logo.png
LV_IMG_DECLARE(ui_img_images_img_devider_png);    // assets/images/img devider.png
LV_IMG_DECLARE(ui_img_images_img_price_png);    // assets/images/img price.png
LV_IMG_DECLARE(ui_img_images_img_espresso_png);    // assets/images/img Espresso.png
LV_IMG_DECLARE(ui_img_images_img_latte_png);    // assets/images/img Latte.png
LV_IMG_DECLARE(ui_img_images_img_irish_coffee_png);    // assets/images/img Irish Coffee.png
LV_IMG_DECLARE(ui_img_images_macchiato_png);    // assets/images/Macchiato.png
LV_IMG_DECLARE(ui_img_images_cream_png);    // assets/images/cream.png
LV_IMG_DECLARE(ui_img_images_button_back_png);    // assets/images/button_back.png
LV_IMG_DECLARE(ui_img_images_icon_card_png);    // assets/images/icon_card.png
LV_IMG_DECLARE(ui_img_images_coffee_png);    // assets/images/coffee.png
LV_IMG_DECLARE(ui_img_images_mask_png);    // assets/images/mask.png
LV_IMG_DECLARE(ui_img_images_empty_glass_png);    // assets/images/empty_glass.png
LV_IMG_DECLARE(ui_img_images_coffee_1_png);    // assets/images/coffee 1.png
LV_IMG_DECLARE(ui_img_images_mask1_png);    // assets/images/mask1.png
LV_IMG_DECLARE(ui_img_images_empty_glass_1_png);    // assets/images/empty_glass_1.png
LV_IMG_DECLARE(ui_img_images_coffee_2_png);    // assets/images/coffee 2.png

// FONTS
LV_FONT_DECLARE(ui_font_in20);
LV_FONT_DECLARE(ui_font_in25);
LV_FONT_DECLARE(ui_font_in30);

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
