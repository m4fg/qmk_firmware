#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define EISU LALT(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,----------------------------------------------------------------------------------------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |   -  |                    |   =  |   Y  |   U  |   I  |   O  |   P  |  \   |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Ctrl |   A  |   S  |   D  |   F  |   G  |   [  |                    |   ]  |   H  |   J  |   K  |   L  |   ;  |  "   |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |  ~   |                    |   |  |   N  |   M  |   ,  |   .  |   /  | Shift|
   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
   * | Esc  |  Alt |  GUI | GUI  |||||||| Lower| Space|Enter ||||||||Enter |  BS  | Raise|||||||| Left | Down |  Up  | Right|
   * ,----------------------------------------------------------------------------------------------------------------------.
   */
  [_QWERTY] = LAYOUT( \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,                        KC_EQL , KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
    KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,                        KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TILD,                        KC_PIPE, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    KC_ESC, KC_LALT, KC_LGUI, KC_LGUI,      LT(1,KC_MHEN),   KC_SPC , KC_ENT,        KC_ENT , KC_BSPC, LT(2,KC_HENK),        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
  ),

  [1] = LAYOUT(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_GRV, KC_RO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQL, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LBRC, KC_RBRC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case ADJUST:
//       if (record->event.pressed) {
//         layer_on(_ADJUST);
//       } else {
//         layer_off(_ADJUST);
//       }
//       return false;
//       break;
//   }
//   return true;
// }
