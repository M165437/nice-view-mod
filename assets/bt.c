#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BT
#define LV_ATTRIBUTE_IMG_BT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BT uint8_t bt_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xfb, 0xf0, 
  0xf9, 0xf0, 
  0xf8, 0xf0, 
  0xda, 0x70, 
  0xcb, 0x30, 
  0xe2, 0x70, 
  0xf0, 0xf0, 
  0xf9, 0xf0, 
  0xf0, 0xf0, 
  0xe2, 0x70, 
  0xcb, 0x30, 
  0xda, 0x70, 
  0xf8, 0xf0, 
  0xf9, 0xf0, 
  0xfb, 0xf0, 
};

const lv_img_dsc_t bt = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 12,
  .header.h = 15,
  .data_size = 38,
  .data = bt_map,
};
