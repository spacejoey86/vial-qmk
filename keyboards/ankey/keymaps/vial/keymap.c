// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define LAYOUT_base(Q,W,E,R,T,    Y,U,I,O,P, \
                    A,S,D,F,G,    H,J,K,L,SCLN, \
                    Z,X,C,V,B,    N,M,COMM,DOT,SLSH, \
                    THM1,THM2,THM3,   THM4,THM5,THM6\
                    ) \
    LAYOUT_split_3x5_3(\
      V, B, C, X, THM1,   Z,\
      F, G, D, S, THM2,    A,\
      R, T, E, W, THM3, Q,\
      \
      COMM,  M, DOT, N, SLSH,     THM6,\
      K,     J, L,   H, SCLN,     THM5,\
      I,     U, O,   Y, P,        THM4)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *        ┌────┐                       ┌────┐
      *        │THM1├────┐             ┌────┤THM6│
      *        └────┤THM2├────┐   ┌────┤THM5├────┘
      *             └────┤THM3│   │THM4├────┘
      *                  └────┘   └────┘
      */
    // [0] = LAYOUT_split_3x5_3(
    //   KC_V, KC_B, KC_C, KC_X, KC_DELETE,   KC_Z,
    //   KC_F, KC_G, KC_D, KC_S, KC_SPACE,    KC_A,
    //   KC_R, KC_T, KC_E, KC_W, KC_LEFT_ALT, KC_Q,

    //   KC_COMMA, KC_M, KC_DOT, KC_N, KC_SLASH,     KC_BACKSPACE,
    //   KC_K,     KC_J, KC_L,   KC_H, KC_SEMICOLON, KC_ENTER,
    //   KC_I,     KC_U, KC_O,   KC_Y, KC_P,         KC_LEFT_SHIFT
    // )

    [0] = LAYOUT_base(KC_Q, KC_W, KC_E, KC_R, KC_T,                                      KC_Y, KC_U, KC_I, KC_O, KC_P,
                      LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,     KC_H, RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SEMICOLON),
                      KC_Z, KC_X, KC_C, KC_V, KC_B,                                      KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,
                        KC_DELETE, QK_CAPS_WORD_TOGGLE, LT(1, KC_ENTER),                       LT(2, KC_SPACE), MO(3), KC_BACKSPACE
                      ),

    [1] = LAYOUT_base(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_9),      LSFT(KC_0), KC_7, KC_8, KC_9, KC_MINUS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT_BRACKET,     KC_RIGHT_BRACKET, KC_4, KC_5, KC_6, KC_EQUAL,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_NONUS_HASH, KC_SLASH,  KC_0, KC_1, KC_2, KC_3, KC_TRNS,
                                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS),

    [2] = LAYOUT_base(KC_ESCAPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TAB,        KC_TRNS, KC_HOME, KC_UP, KC_PAGE_UP, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_END, KC_TRNS, KC_PAGE_DOWN, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS),

    [3] = LAYOUT_base(LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),     LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), KC_TRNS, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_QUOTE,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS)
};
