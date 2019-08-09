#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"

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
  HSV_0_255_255,
  HSV_2_255_240,
  HSV_5_255_224,
  HSV_9_255_208,
  HSV_14_255_192,
  HSV_19_255_176,
  HSV_25_255_160,
  HSV_33_255_144,
  HSV_42_255_128,
  HSV_52_255_143,
  HSV_60_255_159,
  HSV_66_255_175,
  HSV_71_255_191,
  HSV_76_255_207,
  HSV_79_255_223,
  HSV_83_255_239,
  HSV_86_255_255,
  HSV_88_255_240,
  HSV_91_255_224,
  HSV_95_255_208,
  HSV_100_255_192,
  HSV_105_255_176,
  HSV_111_255_160,
  HSV_119_255_144,
  HSV_238_255_175,
  HSV_243_255_191,
  HSV_248_255_207,
  HSV_251_255_223,
  HSV_255_255_239,
  HSV_197_255_160,
  HSV_205_255_144,
  HSV_214_255_128,
  HSV_224_255_143,
  HSV_232_255_159,
  HSV_174_255_240,
  HSV_177_255_224,
  HSV_181_255_208,
  HSV_186_255_192,
  HSV_191_255_176,
  HSV_157_255_191,
  HSV_162_255_207,
  HSV_165_255_223,
  HSV_169_255_239,
  HSV_172_255_255,
  HSV_128_255_128,
  HSV_138_255_143,
  HSV_146_255_159,
  HSV_152_255_175,
  DYNAMIC_MACRO_RANGE,
};
#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(KC_GRAVE,KC_EXLM,KC_AT,KC_HASH,KC_DLR,KC_PERC,KC_LCBR,KC_QUOTE,LT(1,KC_Q),LT(2,KC_W),LT(3,KC_E),LT(4,KC_R),KC_T,KC_LPRN,KC_DQUO,LSFT_T(KC_A),LCTL_T(KC_S),LALT_T(KC_D),LGUI_T(KC_F),KC_G,KC_TILD,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_LBRACKET,KC_ASTG,KC_LABK,KC_PIPE,KC_MINUS,KC_RABK,TO(6),KC_HOME,KC_END,KC_TAB,KC_BSPACE,KC_DELETE,KC_RCBR,KC_CIRC,KC_AMPR,KC_ASTR,KC_MINUS,KC_PLUS,KC_EQUAL,KC_RPRN,KC_Y,LT(5,KC_U),KC_I,KC_O,KC_P,KC_UNDS,KC_H,LGUI_T(KC_J),LALT_T(KC_K),LCTL_T(KC_L),LSFT_T(KC_SCOLON),KC_COLN,KC_LBRACKET,KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_BSLASH,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_QUES,KC_PGUP,TO(1),KC_PGDOWN,KC_ESCAPE,KC_ENTER,KC_SPACE),

  [1] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LSHIFT,KC_LCTRL,KC_LALT,KC_LGUI,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(0),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_F13,KC_F14,KC_F15,KC_F16,KC_F17,KC_TRANSPARENT,KC_TRANSPARENT,KC_F12,KC_F3,KC_F4,KC_F5,KC_F18,KC_TRANSPARENT,KC_F11,KC_F2,KC_F1,KC_F6,KC_F19,KC_TRANSPARENT,KC_TRANSPARENT,KC_F10,KC_F9,KC_F8,KC_F7,KC_F20,KC_TRANSPARENT,KC_F24,KC_F23,KC_F22,KC_F21,KC_TRANSPARENT,KC_TRANSPARENT,TO(2),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [2] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LSHIFT,KC_LCTRL,KC_LALT,KC_LGUI,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(1),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_ACCEL0,KC_MS_ACCEL1,KC_MS_ACCEL2,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_LEFT,KC_MS_WH_DOWN,KC_MS_WH_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN5,TO(3),KC_MS_BTN4,KC_MS_BTN3,KC_MS_BTN2,KC_MS_BTN1),

  [3] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LSHIFT,KC_LCTRL,KC_LALT,KC_LGUI,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(2),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_PAUSE,KC_MEDIA_STOP,KC_MEDIA_EJECT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MEDIA_REWIND,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_MEDIA_FAST_FORWARD,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(4),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [4] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LSHIFT,KC_LCTRL,KC_LALT,KC_LGUI,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(3),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_C,KC_7,KC_8,KC_9,KC_SLASH,KC_TRANSPARENT,KC_TRANSPARENT,LGUI(KC_BSPACE),KC_4,KC_5,KC_6,KC_KP_ASTERISK,KC_TRANSPARENT,KC_BSPACE,KC_1,KC_2,KC_3,KC_KP_MINUS,KC_TRANSPARENT,KC_TRANSPARENT,KC_PERC,KC_EQUAL,KC_0,KC_DOT,KC_KP_PLUS,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(5),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [5] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,DYN_REC_START1,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,DYN_MACRO_PLAY2,DYN_REC_STOP,DYN_MACRO_PLAY1,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,DYN_REC_START2,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(4),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LGUI,KC_LALT,KC_LCTRL,KC_LSHIFT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(6),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [6] = LAYOUT_ergodox(KC_TRANSPARENT,HSV_0_255_255,HSV_2_255_240,HSV_5_255_224,HSV_9_255_208,HSV_14_255_192,KC_TRANSPARENT,KC_TRANSPARENT,HSV_19_255_176,HSV_25_255_160,HSV_33_255_144,HSV_42_255_128,HSV_52_255_143,KC_TRANSPARENT,KC_TRANSPARENT,HSV_60_255_159,HSV_66_255_175,HSV_71_255_191,HSV_76_255_207,HSV_79_255_223,KC_TRANSPARENT,HSV_83_255_239,HSV_86_255_255,HSV_88_255_240,HSV_91_255_224,HSV_95_255_208,KC_TRANSPARENT,KC_TRANSPARENT,HSV_100_255_192,HSV_105_255_176,HSV_111_255_160,HSV_119_255_144,TO(5),KC_TRANSPARENT,RGB_HUI,RGB_MOD,RGB_SLD,RGB_HUD,KC_TRANSPARENT,HSV_238_255_175,HSV_243_255_191,HSV_248_255_207,HSV_251_255_223,HSV_255_255_239,KC_TRANSPARENT,KC_TRANSPARENT,HSV_197_255_160,HSV_205_255_144,HSV_214_255_128,HSV_224_255_143,HSV_232_255_159,KC_TRANSPARENT,HSV_174_255_240,HSV_177_255_224,HSV_181_255_208,HSV_186_255_192,HSV_191_255_176,KC_TRANSPARENT,KC_TRANSPARENT,HSV_157_255_191,HSV_162_255_207,HSV_165_255_223,HSV_169_255_239,HSV_172_255_255,KC_TRANSPARENT,HSV_128_255_128,HSV_138_255_143,HSV_146_255_159,HSV_152_255_175,KC_TRANSPARENT,KC_TRANSPARENT,TO(0),RGB_VAI,RGB_VAD,TOGGLE_LAYER_COLOR,RGB_TOG),

};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {227,255,150}, {216,255,129}, {203,255,148}, {193,255,169}, {186,255,191}, {236,255,171}, {227,255,150}, {216,255,129}, {203,255,148}, {193,255,169}, {243,255,192}, {236,255,171}, {227,255,150}, {216,255,129}, {203,255,148}, {236,255,171}, {0,0,0}, {216,255,129}, {203,255,148}, {193,255,169}, {216,255,129}, {203,255,148}, {193,255,169}, {186,255,191}, {227,255,150}, {216,255,129}, {203,255,148}, {193,255,169}, {186,255,191}, {236,255,171}, {227,255,150}, {216,255,129}, {203,255,148}, {193,255,169}, {243,255,192}, {236,255,171}, {227,255,150}, {216,255,129}, {203,255,148}, {236,255,171}, {227,255,150}, {216,255,129}, {203,255,148}, {193,255,169}, {216,255,129}, {203,255,148}, {193,255,169}, {186,255,191} },

    [1] = { {91,148,222}, {75,158,221}, {62,205,218}, {53,255,214}, {47,255,199}, {103,175,224}, {161,255,255}, {151,255,255}, {148,255,255}, {40,255,194}, {112,215,225}, {172,255,255}, {172,253,219}, {144,255,255}, {33,255,208}, {119,255,225}, {125,255,212}, {132,255,217}, {139,255,236}, {28,255,222}, {0,255,255}, {8,255,249}, {17,255,243}, {22,255,232}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {103,175,224}, {53,255,214}, {28,255,222}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {8,255,249}, {17,255,243}, {22,255,232}, {0,0,0}, {0,0,0}, {0,0,0}, {75,158,221}, {0,0,0}, {0,0,0}, {0,0,0}, {91,148,222}, {91,148,222}, {91,148,222}, {0,0,0}, {0,0,0}, {0,0,0}, {103,175,224}, {0,0,0}, {0,0,0}, {112,215,225}, {112,215,225}, {112,215,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,148,222}, {0,0,0}, {91,148,222}, {0,0,0}, {0,0,0}, {112,215,225}, {103,175,224}, {91,148,222}, {75,158,221}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {28,255,222}, {17,255,243}, {28,255,222}, {0,0,0}, {103,175,224}, {91,148,222}, {75,158,221}, {91,148,222}, {103,175,224}, {0,0,0}, {151,255,255}, {172,255,255}, {151,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,158,221}, {0,0,0}, {0,0,0}, {0,0,0}, {33,255,208}, {75,158,221}, {125,255,212}, {151,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {8,255,249}, {75,158,221}, {91,148,222}, {103,175,224}, {161,255,255}, {17,255,243}, {75,158,221}, {75,158,221}, {103,175,224}, {151,255,255}, {22,255,232}, {75,158,221}, {91,148,222}, {103,175,224}, {148,255,255}, {28,255,222}, {33,255,208}, {91,148,222}, {139,255,236}, {144,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {53,255,214}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {53,255,214}, {62,205,218}, {75,158,221}, {91,148,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {132,255,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {132,255,217}, {119,255,225}, {103,175,224}, {75,158,221}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,158,221}, {0,0,0}, {0,0,0}, {0,0,0}, {103,175,224}, {40,255,194}, {132,255,217}, {0,0,0}, {0,0,0}, {0,0,0}, {119,255,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {238,255,175}, {243,255,191}, {248,255,207}, {251,255,223}, {255,255,239}, {197,255,160}, {205,255,144}, {214,255,128}, {224,255,143}, {232,255,159}, {174,255,240}, {177,255,224}, {181,255,208}, {186,255,192}, {191,255,176}, {157,255,191}, {162,255,207}, {165,255,223}, {169,255,239}, {172,255,255}, {128,255,128}, {138,255,143}, {146,255,159}, {152,255,175}, {14,255,192}, {9,255,208}, {5,255,224}, {2,255,240}, {0,255,255}, {52,255,143}, {42,255,128}, {33,255,144}, {25,255,160}, {19,255,176}, {79,255,223}, {76,255,207}, {71,255,191}, {66,255,175}, {60,255,159}, {95,255,208}, {91,255,224}, {88,255,240}, {86,255,255}, {83,255,239}, {119,255,144}, {111,255,160}, {105,255,176}, {100,255,192} },

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
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
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
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_2_255_240:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(2,255,240);
      }
      return false;
    case HSV_5_255_224:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(5,255,224);
      }
      return false;
    case HSV_9_255_208:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(9,255,208);
      }
      return false;
    case HSV_14_255_192:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(14,255,192);
      }
      return false;
    case HSV_19_255_176:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(19,255,176);
      }
      return false;
    case HSV_25_255_160:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(25,255,160);
      }
      return false;
    case HSV_33_255_144:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(33,255,144);
      }
      return false;
    case HSV_42_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(42,255,128);
      }
      return false;
    case HSV_52_255_143:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(52,255,143);
      }
      return false;
    case HSV_60_255_159:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(60,255,159);
      }
      return false;
    case HSV_66_255_175:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(66,255,175);
      }
      return false;
    case HSV_71_255_191:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(71,255,191);
      }
      return false;
    case HSV_76_255_207:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(76,255,207);
      }
      return false;
    case HSV_79_255_223:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(79,255,223);
      }
      return false;
    case HSV_83_255_239:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(83,255,239);
      }
      return false;
    case HSV_86_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,255);
      }
      return false;
    case HSV_88_255_240:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(88,255,240);
      }
      return false;
    case HSV_91_255_224:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(91,255,224);
      }
      return false;
    case HSV_95_255_208:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(95,255,208);
      }
      return false;
    case HSV_100_255_192:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(100,255,192);
      }
      return false;
    case HSV_105_255_176:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(105,255,176);
      }
      return false;
    case HSV_111_255_160:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(111,255,160);
      }
      return false;
    case HSV_119_255_144:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(119,255,144);
      }
      return false;
    case HSV_238_255_175:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(238,255,175);
      }
      return false;
    case HSV_243_255_191:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(243,255,191);
      }
      return false;
    case HSV_248_255_207:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(248,255,207);
      }
      return false;
    case HSV_251_255_223:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(251,255,223);
      }
      return false;
    case HSV_255_255_239:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(255,255,239);
      }
      return false;
    case HSV_197_255_160:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(197,255,160);
      }
      return false;
    case HSV_205_255_144:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(205,255,144);
      }
      return false;
    case HSV_214_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(214,255,128);
      }
      return false;
    case HSV_224_255_143:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(224,255,143);
      }
      return false;
    case HSV_232_255_159:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(232,255,159);
      }
      return false;
    case HSV_174_255_240:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(174,255,240);
      }
      return false;
    case HSV_177_255_224:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(177,255,224);
      }
      return false;
    case HSV_181_255_208:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(181,255,208);
      }
      return false;
    case HSV_186_255_192:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(186,255,192);
      }
      return false;
    case HSV_191_255_176:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(191,255,176);
      }
      return false;
    case HSV_157_255_191:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(157,255,191);
      }
      return false;
    case HSV_162_255_207:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(162,255,207);
      }
      return false;
    case HSV_165_255_223:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(165,255,223);
      }
      return false;
    case HSV_169_255_239:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,239);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_128_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(128,255,128);
      }
      return false;
    case HSV_138_255_143:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(138,255,143);
      }
      return false;
    case HSV_146_255_159:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(146,255,159);
      }
      return false;
    case HSV_152_255_175:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(152,255,175);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
