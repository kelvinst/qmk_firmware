#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  EPRM,
  DYNAMIC_MACRO_RANGE,
};
#include "dynamic_macro.h"

#define OSM_CTL OSM(MOD_LCTL)
#define OSM_SFT OSM(MOD_LSFT)
#define OSM_GUI OSM(MOD_LGUI)
#define OSM_ALT OSM(MOD_LALT)
#define LAY_CLR TOGGLE_LAYER_COLOR
#define KK_A SFT_T(KC_A)
#define KK_S CTL_T(KC_S)
#define KK_D ALT_T(KC_D)
#define KK_F GUI_T(KC_F)    
#define KK_J GUI_T(KC_J)
#define KK_K ALT_T(KC_K)
#define KK_L CTL_T(KC_L)
#define KK_SCLN SFT_T(KC_SCLN)
#define MC_REC1 DYN_REC_START1
#define MC_PLY1 DYN_MACRO_PLAY1
#define MC_REC2 DYN_REC_START2
#define MC_PLY2 DYN_MACRO_PLAY2
#define MC_STOP DYN_REC_STOP
#define KC_PI LALT(KC_P)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
      KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , OSL(2)  ,           OSL(2)   , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS ,
      KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , OSL(4)  ,           OSL(4)  , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_EQL  , 
      OSM_CTL , KK_A    , KK_S    , KK_D    , KK_F    , KC_G    ,                               KC_H    , KK_J    , KK_K    , KK_L    , KK_SCLN , KC_ENT  , 
      OSM_SFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , OSL(6)  ,           OSL(6)  , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_BSLS ,
      KC_LEAD , KC_GRV  , KC_QUOT , KC_LEFT , KC_RGHT ,                                                   KC_DOWN , KC_UP   , KC_LBRC , KC_RBRC , KC_LEAD , 
                                                        KC_INS  , KC_HOME ,           KC_PGUP , KC_DEL  , 
                                                                  KC_END  ,           KC_PGDN , 
                                              OSM_GUI , OSM_ALT , OSL(1)  ,           OSL(1)  , KC_BSPC , KC_SPC
     ) , 

  [1] = LAYOUT_ergodox_pretty(
      KC_MINS , KC_0    , KC_9    , KC_8    , KC_7    , KC_6    , _______ ,           _______ , KC_5    , KC_4    , KC_3    , KC_2    , KC_1    , KC_ESC  ,
      KC_EQL  , KC_P    , KC_O    , KC_I    , KC_U    , KC_Y    , _______ ,           _______ , KC_T    , KC_R    , KC_E    , KC_W    , KC_Q    , KC_TAB  ,
      KC_ENT  , KK_SCLN , KK_L    , KK_K    , KK_J    , KC_H    ,                               KC_G    , KK_F    , KK_D    , KK_S    , KK_A    , OSM_CTL ,
      KC_BSLS , KC_SLSH , KC_DOT  , KC_COMM , KC_M    , KC_N    , _______ ,           _______ , KC_B    , KC_V    , KC_C    , KC_X    , KC_Z    , OSM_SFT ,
      KC_LEAD , KC_LBRC , KC_RBRC , KC_UP   , KC_DOWN,                                                    KC_LEFT , KC_RGHT , KC_QUOT , KC_GRV  , KC_LEAD ,
                                                        KC_DEL  , KC_PGUP ,           KC_HOME , KC_INS  , 
                                                                  KC_PGDN ,           KC_END  ,
                                              KC_SPC  , KC_BSPC , _______ ,           _______ , OSM_ALT , OSM_GUI
     ) , 

  [2] = LAYOUT_ergodox_pretty(
      KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , _______ ,           _______ , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS ,
      KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , _______ ,           _______ , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_EQL  ,
      KC_LCTL , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,                               KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_BSLS ,
      KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , _______ ,           _______ , KC_N    , KC_M    , KC_UP   , KC_COMM , KC_DOT  , KC_SLSH ,
      KC_LBRC , KC_GRV  , KC_QUOT , KC_LALT , KC_LGUI ,                                                   KC_LEFT , KC_DOWN , KC_RGHT , KC_RCTL , KC_RBRC ,
                                                        KC_INS  , KC_HOME ,           KC_PGUP , KC_DEL  ,
                                                                  KC_END  ,           KC_PGDN ,
                                              KC_SPC  , KC_ENT  , OSL(3)  ,           OSL(3)  , KC_BSPC , KC_SPC
    ) , 

  [3] = LAYOUT_ergodox_pretty(
      KC_MINS , KC_0    , KC_9    , KC_8    , KC_7    , KC_6    , _______ ,           _______ , KC_5    , KC_4    , KC_3    , KC_2    , KC_1    , KC_ESC  ,
      KC_EQL  , KC_P    , KC_O    , KC_I    , KC_U    , KC_Y    , _______ ,           _______ , KC_T    , KC_R    , KC_E    , KC_W    , KC_Q    , KC_TAB  ,
      KC_BSLS , KC_SCLN , KC_L    , KC_K    , KC_J    , KC_H    ,                               KC_G    , KC_F    , KC_A    , KC_S    , KC_D    , KC_LCTL ,
      KC_SLSH , KC_DOT  , KC_COMM , KC_UP   , KC_M    , KC_N    , _______ ,           _______ , KC_B    , KC_V    , KC_C    , KC_X    , KC_Z    , KC_RSFT ,
      KC_RBRC , KC_RCTL , KC_LEFT , KC_DOWN , KC_RGHT ,                                                   KC_LGUI , KC_LALT , KC_QUOT , KC_GRV  , KC_LBRC ,
                                                        KC_DEL  , KC_PGUP ,           KC_HOME , KC_INS  ,
                                                                  KC_PGDN ,           KC_END  ,
                                              KC_SPC  , KC_BSPC , _______ ,           _______ , KC_ENT , KC_SPC
    ) , 

  [4] = LAYOUT_ergodox_pretty(
      _______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , _______ ,           _______ , KC_VOLD , KC_MPRV , KC_MPLY , KC_MNXT , KC_VOLU , _______ ,
      _______ , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , _______ ,           _______ , MC_REC1 , MC_PLY1 , KC_MS_U , KC_MUTE , _______ , _______ ,
      _______ , KC_F11  , KC_F12  , KC_F13  , KC_F14  , KC_F15  ,                               MC_STOP , KC_MS_L , KC_MS_D , KC_MS_R , _______ , _______ ,
      _______ , KC_F16  , KC_F17  , KC_F18  , KC_F19  , KC_F20  , _______ ,           _______ , MC_REC2 , MC_PLY2 , KC_WH_U , _______ , _______ , _______ ,
      _______ , KC_F21  , KC_F22  , KC_F23  , KC_F24  ,                                                   KC_WH_L , KC_WH_D , KC_WH_R , RESET   , _______ ,
                                                        _______ , _______ ,           KC_BTN5 , KC_BTN4 ,
                                                                  KC_ACL0 ,           KC_BTN3 ,
                                              KC_ACL2 , KC_ACL1 , OSL(5)  ,           OSL(5)  , KC_BTN2 , KC_BTN1
    ) , 

  [5] = LAYOUT_ergodox_pretty(
      KC_MUTE , KC_VOLD , KC_MPRV , KC_MPLY , KC_MNXT , KC_VOLU , _______ ,           _______ , KC_F1   , KC_F2   , KC_F3   , KC_F2   , KC_F5   , _______ , 
      _______ , _______ , KC_MUTE , KC_MS_U , MC_PLY1 , MC_REC1 , _______ ,           _______ , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , _______ , 
      _______ , _______ , KC_MS_L , KC_MS_D , KC_MS_R , MC_STOP ,                               KC_F11  , KC_F12  , KC_F13  , KC_F14  , KC_F15  , _______ , 
      _______ , _______ , _______ , KC_WH_U , MC_PLY2 , MC_REC2 , _______ ,           _______ , KC_F16  , KC_F17  , KC_F18  , KC_F19  , KC_F20  , _______ , 
      _______ , RESET   , KC_WH_L , KC_WH_D , KC_WH_R,                                                    KC_F21  , KC_F22  , KC_F23  , KC_F24  , _______ , 
                                                        KC_BTN4 , KC_BTN5 ,           _______ , _______ , 
                                                                  KC_BTN3 ,           KC_ACL0 , 
                                              KC_BTN1 , KC_BTN2 , _______ ,           _______ , KC_ACL1 , KC_ACL2
    ) , 

  [6] = LAYOUT_ergodox_pretty(
      _______ , KC_AMPR , KC_PIPE , KC_EXLM , KC_EQL  , _______ , _______ ,           _______ , KC_PI   , KC_P7   , KC_P8   , KC_P9   , KC_PSLS , _______ ,
      _______ , KC_HASH , KC_PERC , KC_LCBR , KC_RCBR , _______ , _______ ,           _______ , KC_CIRC , KC_P4   , KC_P5   , KC_P6   , KC_PAST , _______ ,
      _______ , KC_DLR  , KC_AT   , KC_LPRN , KC_RPRN , _______ ,                               KC_EXLM , KC_P1   , KC_P2   , KC_P3   , KC_PMNS , _______ ,
      _______ , KC_TILD , KC_CIRC , KC_LBRC , KC_RBRC , _______ , _______ ,           _______ , KC_PEQL , KC_P0   , KC_COMM , KC_PDOT , KC_PPLS , _______ ,
      _______ , KC_LABK , KC_PIPE , KC_MINS , KC_RABK ,                                                   _______ , _______ , _______ , _______ , _______ ,
                                                        _______ , _______ ,           _______ , _______ ,
                                                                  _______ ,           _______ ,
                                              _______ , _______ , OSL(7)  ,           OSL(7)  , _______ , _______
    ),

  [7] = LAYOUT_ergodox_pretty(
      _______ , KC_PSLS , KC_P7   , KC_P8   , KC_P9   , KC_PI   , _______ ,           _______ , _______ , KC_AMPR , KC_PIPE , KC_EXLM , KC_EQL  , _______ ,
      _______ , KC_PAST , KC_P4   , KC_P5   , KC_P6   , KC_CIRC , _______ ,           _______ , _______ , KC_HASH , KC_PERC , KC_LCBR , KC_RCBR , _______ ,
      _______ , KC_PMNS , KC_P1   , KC_P2   , KC_P3   , KC_EXLM ,                               _______ , KC_DLR  , KC_AT   , KC_LPRN , KC_RPRN , _______ ,
      _______ , KC_PPLS , KC_P0   , KC_COMM , KC_PDOT , KC_PEQL , _______ ,           _______ , _______ , KC_TILD , KC_CIRC , KC_LBRC , KC_RBRC , _______ ,
      _______ , _______ , _______ , _______ , _______ ,                                                   KC_LABK , KC_PIPE , KC_PMNS , KC_RABK , _______ ,
                                                        _______ , _______ ,           _______ , _______ ,
                                                                  _______ ,           _______ ,
                                              _______ , _______ , _______ ,           _______ , _______ , _______
    ) , 

};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
  [0] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
                     {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},

    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
                     {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255}
  },

  [1] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
    {146, 255, 255}, {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
                     {149, 250, 255}, {162, 182, 255}, {182, 172, 255}, {200, 255, 255},
    
    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
    {138, 255, 255}, {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255},
                     {135, 255, 255}, {130, 255, 241}, {123, 255, 245}, {114, 255, 255}
  },

  [2] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {249, 228, 255}, {154, 255, 255}, {154, 255, 255},
                     {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0,   0,   255},

    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {249, 228, 255}, {154, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
                     {0,   0,   255}, {0,   0,   255}, {154, 255, 255}, {154, 255, 255}
  },

  [3] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {249, 228, 255}, {154, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {249, 228, 255}, {249, 228, 255}, {249, 228, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
                     {0,   0,   255}, {0,   0,   255}, {154, 255, 255}, {154, 255, 255},

    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {154, 255, 255}, {249, 228, 255}, {154, 255, 255}, {154, 255, 255},
                     {249, 228, 255}, {249, 228, 255}, {249, 228, 255}, {0,   0,   255}
  },

  [4] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233},
    {0,   0,   255}, {0,   0,   255}, {14,  255, 255}, {141, 255, 233}, {0,   0,   0},
    {0,   0,   255}, {14,  255, 255}, {14,  255, 255}, {14,  255, 255}, {0,   0,   0},  
    {0,   0,   255}, {0,   0,   255}, {30,  96,  255}, {0,   0,   0},   {0,   0,   0},  
                     {30,  96,  255}, {30,  96,  255}, {30,  96,  255}, {249, 228, 255},
   
    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {21,  86,  252}, {21,  124, 246}, {21,  162, 250}, {21,  204, 254}, {21,  255, 255},
    {16,  79,  254}, {16,  119, 252}, {16,  165, 250}, {16,  207, 246}, {16,  255, 255},
    {13,  73,  250}, {13,  115, 250}, {13,  165, 252}, {13,  204, 250}, {13,  252, 250},
    {8,   79,  254}, {8,   121, 252}, {8,   167, 252}, {8,   204, 254}, {8,   255, 250},
                     {0,   135, 252}, {0,   173, 254}, {0,   210, 254}, {0,   255, 255}
  },

  [5] = {
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {21,  255, 255}, {21,  204, 254}, {21,  162, 250}, {21,  124, 246}, {21,  86,  252},
    {16,  255, 255}, {16,  207, 246}, {16,  165, 250}, {16,  119, 252}, {16,  79,  254},
    {13,  252, 250}, {13,  204, 250}, {13,  165, 252}, {13,  115, 250}, {13,  73,  250},
    {8,   255, 250}, {8,   204, 254}, {8,   167, 252}, {8,   121, 252}, {8,   79,  254},
                     {0,   210, 254}, {0,   173, 254}, {0,   135, 252}, {0,   98,  252},
    
    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233},
    {0,   0,   255}, {0,   0,   255}, {14,  255, 255}, {141, 255, 233}, {0,   0,   0},
    {0,   0,   255}, {14,  255, 255}, {14,  255, 255}, {14,  255, 255}, {0,   0,   0},  
    {0,   0,   255}, {0,   0,   255}, {30,  96,  255}, {0,   0,   0},   {0,   0,   0},  
                     {30,  96,  255}, {30,  96,  255}, {30,  96,  255}, {249, 228, 255},
  },

  [6] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {154, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
                     {0,   0,   0},   {0,   0,   0},   {0,   0,   0},   {0,   0,   0},
   
    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {0,   0,   0},   {205, 255, 255}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255},
    {0,   0,   0},   {205, 200, 250}, {205, 200, 250}, {205, 200, 250}, {205, 200, 250},
    {0,   0,   0},   {205, 147, 250}, {205, 147, 250}, {205, 147, 250}, {205, 147, 250},
    {0,   0,   0},   {205, 101, 250}, {205, 101, 250}, {205, 101, 250}, {205, 101, 250},
                     {204, 49,  242}, {204, 49,  242}, {204, 49,  242}, {204, 49,  242}
  },

  [7] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {0,   0,   0},   {205, 255, 255}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255},
    {0,   0,   0},   {205, 200, 250}, {205, 200, 250}, {205, 200, 250}, {205, 200, 250},
    {0,   0,   0},   {205, 147, 250}, {205, 147, 250}, {205, 147, 250}, {205, 147, 250},
    {0,   0,   0},   {205, 101, 250}, {205, 101, 250}, {205, 101, 250}, {205, 101, 250},
                     {204, 49,  242}, {204, 49,  242}, {204, 49,  242}, {204, 49,  242},

    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {249, 228, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {249, 228, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {154, 255, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
                     {0,   0,   0},   {0,   0,   0},   {0,   0,   0},   {0,   0,   0},
  },
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  uint8_t layer = biton32(layer_state);
  if (layer >= 0 && layer <= 7) {
    set_layer_color(layer);
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_record_dynamic_macro(keycode, record)) {
    return false;
  }
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

void ledb(uint8_t led, bool on, uint8_t brightness) {
  switch (led) {
    case 1: OCR1A = brightness; break;
    case 2: OCR1B = brightness; break;
    case 3: OCR1C = brightness; break;
    default: break;
  }

  uint8_t led_mask = 1 << (4 + led);
  if (on) {
    DDRB |= led_mask;
    PORTB |= led_mask;
  } else {
    DDRB &= ~led_mask;
    PORTB &= ~led_mask;
  }
} 

void led(uint8_t led, bool on) {
  ledb(led, on, LED_BRIGHTNESS_HI);
}

void switch_layer_leds(uint32_t state) {
  uint8_t layer = biton32(state);
  led(1, false);
  led(2, false);
  switch (layer) {
    case 1: 
      ledb(1, true, 0);
      ledb(2, true, 0);
      break;
    case 2: 
      ledb(1, true, LED_BRIGHTNESS_LO);
      ledb(2, true, LED_BRIGHTNESS_LO);
      break;
    case 3: 
      led(1, true);
      led(2, true);
      break;
    case 4: 
      ledb(1, true, LED_BRIGHTNESS_LO);
      break;
    case 5: 
      led(1, true);
      break;
    case 6: 
      ledb(2, true, LED_BRIGHTNESS_LO);
      break;
    case 7: 
      led(2, true);
      break;
    default: 
      break;
  }
};

uint32_t layer_state_set_user(uint32_t state) {
  switch_layer_leds(state);

  return state;
};

uint8_t count_bits(uint8_t n) {
  unsigned int count = 0; 
  while (n) { 
    count += n & 1; 
    n >>= 1; 
  } 
  return count; 
}

void switch_mod_led(uint8_t mods) {
  uint8_t step = LED_BRIGHTNESS_HI / 8;

  ledb(3, !!mods, count_bits(mods) * step * 2);
};

LEADER_EXTERNS();

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
  switch_mod_led(keyboard_report->mods | get_oneshot_mods());

  LEADER_DICTIONARY() {
    leading = false;

    SEQ_ONE_KEY(KC_F) {
      SEND_STRING("QMK is awesome.");
    }
    
    leader_end();
  }
};
