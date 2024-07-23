// Copyright (C) 2023 @kraken-jokes
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define L1_GUI LT(1,KC_LGUI)
#define L1_DEL LT(1,KC_DEL)
#define L2_APP LT(2,KC_APP)
#define L2_ALT LT(2,KC_LALT)
#define PRTSC LGUI(LSFT(KC_S))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                               KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL, 
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,                               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
		KC_BSPC, KC_Z, KC_X, KC_C, KC_V, KC_B,                              KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, 
                          KC_LGUI,  KC_LCTL, KC_LSFT, L2_ALT,          L1_DEL,  KC_SPC,  L2_APP,  KC_TAB
    ),

    [1] = LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
		KC_LSFT, KC_HOME, KC_END, KC_BSLS, KC_PGUP, KC_PGDN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_END, 
                          KC_TRNS, KC_LCTL, KC_LSFT, KC_LALT,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT(
        QK_BOOT, KC_SLEP, KC_WAKE, KC_TRNS, KC_PWR, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_PAST, KC_BSPC, 
		KC_GRV, KC_WBAK, KC_WFWD, KC_WSCH, KC_FIND, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_PSLS, KC_PAST, 
		KC_VOLD, KC_CALC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_PSLS, KC_PAST,
                          KC_TRNS, KC_TRNS, PRTSC,   KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_P0
    ),
};