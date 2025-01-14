#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_GRV, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_MINS, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_EQL, KC_BSLS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_ESC, KC_LALT, KC_LGUI, KC_RGUI, LT(1,KC_MHEN), KC_SPC, KC_ENT, KC_ENT, KC_BSPC, LT(2,KC_HENK), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_GRV, KC_RO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQL, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LBRC, KC_RBRC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};
