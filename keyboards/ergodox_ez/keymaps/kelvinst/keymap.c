#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define NO_TH ALGR(KC_T)
#define NO_ETH ALGR(KC_D)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  EPRM,
  HSV_200_255_255,
  HSV_0_255_255,
  HSV_86_255_255,
  HSV_172_255_255,
  DYNAMIC_MACRO_RANGE,
};
#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      KC_ESCAPE,       KC_1,            KC_2,            KC_3,            KC_4,             KC_5,          TO(6),
      LGUI_T(KC_TAB),  KC_Q,            KC_W,            KC_E,            KC_R,             KC_T,          OSL(2), 
      OSM(MOD_LCTL),   KC_A,            KC_S,            KC_D,            KC_F,             KC_G,
      OSM(MOD_LSFT),   KC_Z,            KC_X,            KC_C,            KC_V,             KC_B,          OSL(4),
      OSL(1),          KC_GRAVE,        KC_QUOTE,        KC_LEFT,         KC_RIGHT,
                                                                                            KC_SPACE,      KC_BSPACE,
                                                                                                           OSM(MOD_LSFT),
                                                                          OSM(MOD_LGUI),    OSM(MOD_LALT), OSM(MOD_LCTL),

      /* * * * * * * * * * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      TO(2),           KC_6,            KC_7,            KC_8,            KC_9,             KC_0,          KC_MINUS,
      OSL(2),          KC_Y,            KC_U,            KC_I,            KC_O,             KC_P,          KC_EQUAL,
                       KC_H,            KC_J,            KC_K,            KC_L,             KC_SCOLON,     LCTL_T(KC_ENTER),
      OSL(4),          KC_N,            KC_M,            KC_COMMA,        KC_DOT,           KC_SLASH,      KC_BSLASH,
                                        KC_DOWN,         KC_UP,           KC_LBRACKET,      KC_RBRACKET,   OSL(1),
      OSM(MOD_RALT),   OSM(MOD_RGUI),
      OSM(MOD_RSFT), 
      OSM(MOD_RCTL),   KC_BSPACE,       KC_SPACE
    ), 

  [1] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      KC_MINUS,         KC_0,            KC_9,            KC_8,             KC_7,            KC_6,      TO(0),
      KC_EQUAL,         KC_P,            KC_O,            KC_I,             KC_U,            KC_Y,      KC_NO,
      LCTL_T(KC_ENTER), KC_SCOLON,       KC_L,            KC_K,             KC_J,            KC_H,
      KC_BSLASH,        KC_SLASH,        KC_DOT,          KC_COMMA,         KC_M,            KC_N,      KC_NO,
      KC_TRANSPARENT,   KC_LBRACKET,     KC_RBRACKET,     KC_UP,            KC_DOWN,
                                                                                             KC_DELETE, KC_INSERT,
                                                                                                        KC_PGUP,
                                                                            KC_SPACE,        KC_BSPACE, KC_PGDOWN,

      /* * * * * * * * * * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      TO(0),            KC_5,            KC_4,            KC_3,             KC_2,            KC_1,      KC_ESCAPE,
      KC_NO,            KC_T,            KC_R,            KC_E,             KC_W,            KC_Q,      LGUI_T(KC_TAB),
                        KC_G,            KC_F,            KC_D,             KC_S,            KC_A,      OSM(MOD_LCTL),
      KC_NO,            KC_B,            KC_V,            KC_C,             KC_X,            KC_Z,      OSM(MOD_LSFT),
                                         KC_LEFT,         KC_RIGHT,         KC_QUOTE,        KC_GRAVE,  KC_TRANSPARENT,
      KC_ASOFF,         KC_ASON,
      KC_HOME,
      KC_END,           OSM(MOD_LALT),   OSM(MOD_LGUI)
    ), 

  [2] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      KC_TRANSPARENT,  KC_F1,              KC_F2,               KC_F3,               KC_F4,               KC_F5,           TO(0),
      KC_TRANSPARENT,  KC_F6,              KC_F7,               KC_F8,               KC_F9,               KC_F10,          KC_TRANSPARENT,
      KC_TRANSPARENT,  KC_F11,             KC_F12,              KC_F13,              KC_F14,              KC_F15,
      KC_TRANSPARENT,  KC_F16,             KC_F17,              KC_F18,              KC_F19,              KC_F20,          KC_NO,
      OSL(3),          KC_F21,             KC_F22,              KC_F23,              KC_F24,
                                                                                                          HSV_200_255_255, HSV_0_255_255,
                                                                                                          RGB_HUI,
                                                                                     RGB_MOD,             RGB_SLD,         RGB_HUD,

      /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      TO(4),           KC_AUDIO_VOL_DOWN,  KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE,
      KC_TRANSPARENT,  KC_MS_ACCEL0,       KC_MS_BTN1,          KC_MS_UP,            KC_MS_BTN2,          DYN_REC_START1,  DYN_MACRO_PLAY1,
                       KC_MS_ACCEL1,       KC_MS_LEFT,          KC_MS_DOWN,          KC_MS_RIGHT,         DYN_REC_START2,  DYN_MACRO_PLAY2,
      KC_NO,           KC_MS_ACCEL2,       KC_MS_BTN3,          KC_MS_WH_UP,         KC_MS_BTN4,          KC_MS_BTN5,      DYN_REC_STOP,
                                           KC_MS_WH_LEFT,       KC_MS_WH_DOWN,       KC_MS_WH_RIGHT,      RESET,           OSL(3),
      HSV_86_255_255,  HSV_172_255_255,
      RGB_VAI,
      RGB_VAD,         TOGGLE_LAYER_COLOR, RGB_TOG
    ), 

  [3] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      KC_AUDIO_MUTE,   KC_AUDIO_VOL_DOWN,  KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_AUDIO_VOL_UP,    TO(2),
      DYN_MACRO_PLAY1, DYN_REC_START1,     KC_MS_BTN1,          KC_MS_UP,            KC_MS_BTN2,          KC_MS_ACCEL0,       KC_NO,
      DYN_MACRO_PLAY2, DYN_REC_START2,     KC_MS_LEFT,          KC_MS_DOWN,          KC_MS_RIGHT,         KC_MS_ACCEL1,
      DYN_REC_STOP,    KC_MS_BTN5,         KC_MS_BTN4,          KC_MS_WH_UP,         KC_MS_BTN3,          KC_MS_ACCEL2,       KC_NO,
      KC_TRANSPARENT,  RESET,              KC_MS_WH_LEFT,       KC_MS_WH_DOWN,       KC_MS_WH_RIGHT,
                                                                                                          HSV_172_255_255,    HSV_86_255_255,
                                                                                                                              RGB_VAI,
                                                                                     RGB_TOG,             TOGGLE_LAYER_COLOR, RGB_VAD,

      /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
      TO(2),           KC_F1,              KC_F2,               KC_F3,               KC_F2,               KC_F5,              KC_ESCAPE,
      KC_NO,           KC_F6,              KC_F7,               KC_F8,               KC_F9,               KC_F10,             LGUI_T(KC_TAB),
                       KC_F11,             KC_F12,              KC_F13,              KC_F14,              KC_F15,             OSM(MOD_LCTL),
      KC_NO,           KC_F16,             KC_F17,              KC_F18,              KC_F19,              KC_F20,             OSM(MOD_LSFT),
                                           KC_F21,              KC_F22,              KC_F23,              KC_F24,             KC_TRANSPARENT,
      HSV_0_255_255,   HSV_200_255_255,
      RGB_VAI,
      RGB_HUD,         RGB_SLD,            RGB_MOD
    ), 

  [4] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * * * * * * */
      KC_TRANSPARENT, KC_AMPR,         KC_PIPE,    KC_EXLM,     KC_EQUAL,      KC_NO,          TO(2),
      KC_TRANSPARENT, KC_HASH,         KC_PERC,    KC_LCBR,     KC_RCBR,       KC_NO,          KC_NO,
      KC_TRANSPARENT, KC_DLR,          KC_AT,      KC_LPRN,     KC_RPRN,       KC_NO,
      KC_TRANSPARENT, KC_TILD,         KC_CIRC,    KC_LBRACKET, KC_RBRACKET,   KC_NO,          KC_TRANSPARENT,
      OSL(5),         KC_LABK,         KC_PIPE,    KC_MINUS,    KC_RABK,
                                                                               LCTL(KC_LEFT),  LCTL(KC_RIGHT),
                                                                                               KC_F9,
                                                                KC_F11,        KC_F12,         KC_F13,

      /* * * * * * * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * * * * * * */
      TO(6),          KC_C,            KC_7,       KC_8,        KC_9,          KC_SLASH,       KC_EXLM,
      KC_NO,          LGUI(KC_BSPACE), KC_4,       KC_5,        KC_6,          KC_KP_ASTERISK, KC_CIRC,
                      KC_BSPACE,       KC_1,       KC_2,        KC_3,          KC_KP_MINUS,    LCTL_T(KC_ENTER),
      KC_TRANSPARENT, KC_DELETE,       KC_KP_0,    KC_KP_DOT,   KC_EQUAL,      KC_KP_PLUS,     OSM(MOD_LSFT),
                                       LALT(KC_P), KC_COMMA,    KC_LPRN,       KC_RPRN,        OSL(5),
      LCTL(KC_DOWN),  LCTL(KC_UP),
      KC_ASUP,
      KC_ASDN,        KC_ASRP,         KC_ASTG
    ),

  [5] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * * * * * */
      KC_EXLM,          KC_SLASH,       KC_7,     KC_8,       KC_9,        KC_C,            TO(4),
      KC_CIRC,          KC_KP_ASTERISK, KC_4,     KC_5,       KC_6,        LGUI(KC_BSPACE), KC_NO,
      LCTL_T(KC_ENTER), KC_MINUS,       KC_1,     KC_2,       KC_3,        KC_BSPACE,
      OSM(MOD_LSFT),    KC_KP_PLUS,     KC_EQUAL, KC_0,       KC_DOT,      KC_DELETE,       KC_NO,
      KC_TRANSPARENT,   KC_LPRN,        KC_RPRN,  LALT(KC_P), KC_COMMA,
                                                                           LCTL(KC_UP),     LCTL(KC_DOWN),
                                                                                            KC_ASUP,
                                                              KC_ASTG,     KC_ASRP,         KC_ASDN,

      /* * * * * * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * * * * * */
      TO(4),            KC_NO,          KC_AMPR,  KC_PIPE,    KC_EXLM,     KC_EQUAL,        KC_ESCAPE,
      KC_NO,            KC_NO,          KC_HASH,  KC_PERC,    KC_LCBR,     KC_RCBR,         LGUI_T(KC_TAB),
                        KC_NO,          KC_DLR,   KC_AT,      KC_LPRN,     KC_RPRN,         OSM(MOD_LCTL),
      KC_NO,            KC_NO,          KC_TILD,  KC_CIRC,    KC_LBRACKET, KC_RBRACKET,     OSM(MOD_LSFT),
                                        KC_LABK,  KC_PIPE,    KC_KP_MINUS, KC_RABK,         KC_TRANSPARENT,
      LCTL(KC_LEFT),    LCTL(KC_RIGHT),
      KC_F9,
      KC_F13,           KC_F12,         KC_F11
    ), 

  [6] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * */
      KC_ESCAPE,   KC_1,        KC_2,     KC_3,    KC_4,        KC_5,        TO(4),
      KC_TAB,      KC_Q,        KC_W,     KC_E,    KC_R,        KC_T,        KC_NO,
      KC_LCTRL,    KC_A,        KC_S,     KC_D,    KC_F,        KC_G,
      KC_LSHIFT,   KC_Z,        KC_X,     KC_C,    KC_V,        KC_B,        KC_NO,
      OSL(7),      KC_GRAVE,    KC_QUOTE, KC_LALT, KC_LGUI,
                                                                KC_LBRACKET, KC_RBRACKET,
                                                                             KC_HOME,
                                                   KC_SPACE,    KC_ENTER,    KC_END,

      /* * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * */
      TO(0),       KC_6,        KC_7,     KC_8,    KC_9,        KC_0,        KC_MINUS,
      KC_NO,       KC_Y,        KC_U,     KC_I,    KC_O,        KC_P,        KC_EQUAL,
                   KC_H,        KC_J,     KC_K,    KC_L,        KC_SCOLON,   KC_BSLASH,
      KC_NO,       KC_N,        KC_M,     KC_UP,   KC_COMMA,    KC_DOT,      KC_SLASH,
                                KC_LEFT,  KC_DOWN, KC_RIGHT,    KC_RCTRL,    OSL(7),
      KC_INSERT,   KC_DELETE,
      KC_PGUP,
      KC_PGDOWN,   KC_BSPACE,   KC_SPACE
    ), 

  [7] = LAYOUT_ergodox(
      /* * * * * * * * * * * * * * * * * Left hand * * * * * * * * * * * * * * * * * * * * */
      KC_MINUS,       KC_0,        KC_9,      KC_8,    KC_7,      KC_6,      TO(6),
      KC_EQUAL,       KC_P,        KC_O,      KC_I,    KC_U,      KC_Y,      KC_NO,
      KC_BSLASH,      KC_SCOLON,   KC_L,      KC_K,    KC_J,      KC_H,
      KC_SLASH,       KC_DOT,      KC_COMMA,  KC_UP,   KC_M,      KC_N,      KC_NO,
      KC_TRANSPARENT, KC_RCTRL,    KC_LEFT,   KC_DOWN, KC_RIGHT,
                                                                  KC_DELETE, KC_INSERT,
                                                                             KC_PGUP,
                                                       KC_SPACE,  KC_BSPACE, KC_PGDOWN,

      /* * * * * * * * * * * * * * * * * Right hand * * * * * * * * * * * * * * * * * * * * */
      TO(6),          KC_5,        KC_4,      KC_3,    KC_2,      KC_1,      KC_ESCAPE,
      KC_NO,          KC_T,        KC_R,      KC_E,    KC_W,      KC_Q,      KC_TAB,
                      KC_G,        KC_F,      KC_A,    KC_S,      KC_D,      KC_LCTRL,
      KC_NO,          KC_B,        KC_V,      KC_C,    KC_X,      KC_Z,      KC_RSHIFT,
                                   KC_LGUI,   KC_LALT, KC_QUOTE,  KC_GRAVE,  KC_TRANSPARENT,
      KC_LBRACKET,    KC_RBRACKET,
      KC_HOME,
      KC_END,         KC_ENTER,    KC_SPACE
    ), 

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
    {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233},
    {30,  96,  255}, {33,  255, 255}, {14,  255, 255}, {33,  255, 255}, {0,   0,   255},
    {30,  96,  255}, {14,  255, 255}, {14,  255, 255}, {14,  255, 255}, {0,   0,   255},
    {30,  96,  255}, {33,  255, 255}, {30,  96,  255}, {33,  255, 255}, {33,  255, 255},
                     {30,  96,  255}, {30,  96,  255}, {30,  96,  255}, {249, 228, 255},
   
    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {21,  86,  252}, {21,  124, 246}, {21,  162, 250}, {21,  204, 254}, {21,  255, 255},
    {16,  79,  254}, {16,  119, 252}, {16,  165, 250}, {16,  207, 246}, {16,  255, 255},
    {13,  73,  250}, {13,  115, 250}, {13,  165, 252}, {13,  204, 250}, {13,  252, 250},
    {8,   79,  254}, {8,   121, 252}, {8,   167, 252}, {8,   204, 254}, {8,   255, 250},
                     {0,   135, 252}, {0,   173, 254}, {0,   210, 254}, {0,   255, 255}
  },

  [3] = {
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {21,  255, 255}, {21,  204, 254}, {21,  162, 250}, {21,  124, 246}, {21,  86,  252},
    {16,  255, 255}, {16,  207, 246}, {16,  165, 250}, {16,  119, 252}, {16,  79,  254},
    {13,  252, 250}, {13,  204, 250}, {13,  165, 252}, {13,  115, 250}, {13,  73,  250},
    {8,   255, 250}, {8,   204, 254}, {8,   167, 252}, {8,   121, 252}, {8,   79,  254},
                     {0,   210, 254}, {0,   173, 254}, {0,   135, 252}, {0,   98,  252},
    
    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233}, {141, 255, 233},
    {30,  96,  255}, {33,  255, 255}, {14,  255, 255}, {33,  255, 255}, {0,   0,   255},
    {30,  96,  255}, {14,  255, 255}, {14,  255, 255}, {14,  255, 255}, {0,   0,   255},
    {30,  96,  255}, {33,  255, 255}, {30,  96,  255}, {33,  255, 255}, {33,  255, 255},
                     {30,  96,  255}, {30,  96,  255}, {30,  96,  255}, {249, 228, 255}
  },

  [4] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {249, 228, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {249, 176, 252}, {105, 193, 248}, {105, 193, 248}, {105, 193, 248}, {154, 189, 248},
    {248, 123, 254}, {105, 139, 250}, {105, 139, 250}, {105, 139, 250}, {154, 138, 250},
    {248, 87,  250}, {105, 83,  250}, {105, 83,  250}, {154, 85,  250}, {154, 85,  250},
                     {105, 83,  250}, {105, 83,  250}, {154, 85,  250}, {154, 85,  250},
   
    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {0,   0,   0},   {205, 255, 255}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255},
    {0,   0,   0},   {205, 200, 250}, {205, 200, 250}, {205, 200, 250}, {205, 200, 250},
    {0,   0,   0},   {205, 147, 250}, {205, 147, 250}, {205, 147, 250}, {205, 147, 250},
    {0,   0,   0},   {205, 101, 250}, {205, 101, 250}, {205, 101, 250}, {205, 101, 250},
                     {204, 49,  242}, {204, 49,  242}, {204, 49,  242}, {204, 49,  242}
  },

  [5] = { 
    /* * * * * * * * * * * * * * * * * Right hand --> * * * * * * * * * * * * * * * * */
    {0,   0,   0},   {205, 255, 255}, {205, 255, 255}, {205, 255, 255}, {205, 255, 255},
    {0,   0,   0},   {205, 200, 250}, {205, 200, 250}, {205, 200, 250}, {205, 200, 250},
    {0,   0,   0},   {205, 147, 250}, {205, 147, 250}, {205, 147, 250}, {205, 147, 250},
    {0,   0,   0},   {205, 101, 250}, {205, 101, 250}, {205, 101, 250}, {205, 101, 250},
                     {204, 49,  242}, {204, 49,  242}, {204, 49,  242}, {204, 49,  242},

    /* * * * * * * * * * * * * * * * * <--- Left hand * * * * * * * * * * * * * * * * */
    {249, 228, 255}, {105, 255, 255}, {105, 255, 255}, {105, 255, 255}, {154, 255, 255},
    {249, 176, 252}, {105, 193, 248}, {105, 193, 248}, {105, 193, 248}, {154, 189, 248},
    {248, 123, 254}, {105, 139, 250}, {105, 139, 250}, {105, 139, 250}, {154, 138, 250},
    {248, 87,  250}, {105, 83,  250}, {105, 83,  250}, {154, 85,  250}, {154, 85,  250},
                     {105, 83,  250}, {105, 83,  250}, {154, 85,  250}, {154, 85,  250}
  },

  [6] = { 
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

  [7] = { 
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
    case HSV_200_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(200,255,255);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,255);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
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
      break;
    case 3: 
      led(1, true);
      break;
    case 4: 
      ledb(2, true, LED_BRIGHTNESS_LO);
      break;
    case 5: 
      led(2, true);
      break;
    case 6: 
      ledb(1, true, LED_BRIGHTNESS_LO);
      ledb(2, true, LED_BRIGHTNESS_LO);
      break;
    case 7: 
      led(1, true);
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

  ledb(3, !!mods, count_bits(mods) * step);
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
  switch_mod_led(keyboard_report->mods | get_oneshot_mods());
};
