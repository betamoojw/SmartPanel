// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Coffee wending

#include "../ui.h"

void ui_Preparation_screen_init(void)
{
ui_Preparation = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Preparation, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Preparation, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Preparation, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_img_coffee = lv_img_create(ui_Preparation);
lv_img_set_src(ui_img_coffee, &ui_img_images_coffee_png);
lv_obj_set_width( ui_img_coffee, LV_SIZE_CONTENT);  /// 189
lv_obj_set_height( ui_img_coffee, LV_SIZE_CONTENT);   /// 107
lv_obj_set_x( ui_img_coffee, 0 );
lv_obj_set_y( ui_img_coffee, 135 );
lv_obj_set_align( ui_img_coffee, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_img_coffee, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_coffee, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image_mask = lv_img_create(ui_Preparation);
lv_img_set_src(ui_Image_mask, &ui_img_images_mask_png);
lv_obj_set_width( ui_Image_mask, LV_SIZE_CONTENT);  /// 274
lv_obj_set_height( ui_Image_mask, LV_SIZE_CONTENT);   /// 181
lv_obj_set_x( ui_Image_mask, 0 );
lv_obj_set_y( ui_Image_mask, 110 );
lv_obj_set_align( ui_Image_mask, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image_mask, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image_mask, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Img_glass = lv_img_create(ui_Preparation);
lv_img_set_src(ui_Img_glass, &ui_img_images_empty_glass_png);
lv_obj_set_width( ui_Img_glass, LV_SIZE_CONTENT);  /// 184
lv_obj_set_height( ui_Img_glass, LV_SIZE_CONTENT);   /// 237
lv_obj_set_align( ui_Img_glass, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Img_glass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Img_glass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label_Status = lv_label_create(ui_Preparation);
lv_obj_set_width( ui_Label_Status, 437);
lv_obj_set_height( ui_Label_Status, 57);
lv_obj_set_x( ui_Label_Status, 0 );
lv_obj_set_y( ui_Label_Status, 167 );
lv_obj_set_align( ui_Label_Status, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label_Status,"Status\n");
lv_obj_set_style_text_align(ui_Label_Status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label_Status, &ui_font_in30, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image6 = lv_img_create(ui_Preparation);
lv_img_set_src(ui_Image6, &ui_img_images_logo_png);
lv_obj_set_width( ui_Image6, LV_SIZE_CONTENT);  /// 48
lv_obj_set_height( ui_Image6, LV_SIZE_CONTENT);   /// 48
lv_obj_set_x( ui_Image6, 34 );
lv_obj_set_y( ui_Image6, 7 );
lv_obj_add_flag( ui_Image6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image17 = lv_img_create(ui_Preparation);
lv_img_set_src(ui_Image17, &ui_img_images_img_devider_png);
lv_obj_set_width( ui_Image17, LV_SIZE_CONTENT);  /// 457
lv_obj_set_height( ui_Image17, LV_SIZE_CONTENT);   /// 26
lv_obj_set_x( ui_Image17, -4 );
lv_obj_set_y( ui_Image17, 38 );
lv_obj_set_align( ui_Image17, LV_ALIGN_TOP_MID );
lv_obj_add_flag( ui_Image17, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image17, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_Image6, ui_event_Image6, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Preparation, ui_event_Preparation, LV_EVENT_ALL, NULL);

}
