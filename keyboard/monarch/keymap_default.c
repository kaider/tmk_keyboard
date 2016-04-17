#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     */
    KEYMAP(
        KC_NLCK,GRV,PSLS,PAST,ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        P7,  P8,  P9,  PMNS,TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        P4,  P5,  P6,  PPLS,KC_CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
        P1,  P2,  P3,  PENT,LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT, \
        P0,       PDOT,     LCTL,LGUI,LALT,          SPC,                RGUI,     RALT,FN0, RCTL),
    /* 1: Fn
     */
    KEYMAP(
        FN1, PSCR,SLCK,PAUS,ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        HOME,UP,  PGUP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        LEFT,NO,  RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        END, DOWN,PGDN,TRNS,TRNS,VOU,VOD,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        INS,      DEL,      TRNS,TRNS,TRNS,          TRNS,               TRNS,     TRNS,FN0,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [1] = ACTION_BACKLIGHT_STEP()
};
