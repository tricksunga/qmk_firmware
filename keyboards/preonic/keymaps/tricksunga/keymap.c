#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum preonic_keycodes {
    REPEAT_MACRO = SAFE_RANGE,
    REPEAT_MACRO2,
};

enum preonic_layers {
    LAYER0,
    LAYER1,
    LAYER2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │ GRV │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │BSPC │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │ TAB │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  \  │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │ ESC │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │LSFT │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │ ENT │
 * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
 * │LCTL │     │LALT │LGUI │MO(1)│   SPACE   │MO(2)│LEFT │DOWN │ UP  │RGHT │
 * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
 */
[_LAYER0] = LAYOUT_preonic_grid(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, 
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, 
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, 
    KC_LCTL, KC_NO,   KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │     │     │     │     │  -  │  =  │ DEL │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │     │MB1  │MB3  │MB2  │  [  │  ]  │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │MB5  │M←   │M↓   │M↑   │M→   │     │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │LSFT │     │     │     │     │MB4  │     │     │     │     │     │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │ >>> │           │     │     │     │     │     │
 * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
 */
[_LAYER1] = LAYOUT_preonic_grid(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MINS, KC_EQL,  KC_DEL, 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   MS_BTN1, MS_BTN3, MS_BTN2, KC_LBRC, KC_RBRC, KC_NO, 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   MS_BTN5, MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, KC_NO,   KC_NO, 
    KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   MS_BTN4, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
),

/* ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
 * │     │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │F10  │F11  │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │     │MACRO│MCRO2│     │     │     │     │     │PRSC │SCRL │PAUS │F12  │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │     │     │     │ INS │HOME │PGUP │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │     │     │     │ DEL │ END │PGDN │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
 * │     │LEDTG│     │     │     │           │ >>> │PREV │VALD │VALU │NEXT │
 * └─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
 */
[_LAYER2] = LAYOUT_preonic_grid(
    KC_NO,   KC_F1,     KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, 
    KC_NO,   MACRO,     MACRO2,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PSCR, KC_SCRL, KC_PAUS, KC_F12, 
    KC_NO,   KC_NO,     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_INS,  KC_HOME, KC_PGUP, KC_NO, 
    KC_NO,   KC_NO,     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,  KC_END,  KC_PGDN, KC_NO, 
    KC_NO,   UG_TOGG,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, UG_PREV, UG_VALD, UG_VALU, UG_NEXT
)

};

// Macro state variables
static bool macro1_is_running = false;
static bool macro2_is_running = false;
static uint32_t macro1_timer = 0;
static uint32_t macro2_timer = 0;
static uint8_t macro1_step = 0;
static uint8_t macro2_step = 0;
static uint32_t macro1_current_delay = 0;
static uint32_t macro2_current_delay = 0;

// Generate random delay between 500ms and 2000ms
static uint32_t get_random_delay(void) {
    return 500 + (timer_read32() % 1501);  // 500 + (0-1500) = 500-2000ms
}

// Generate random delay between 500ms and 750ms
static uint32_t get_short_random_delay(void) {
    return 500 + (timer_read32() % 251);  // 500 + (0-250) = 500-750ms
}

void matrix_scan_user(void) {
    // Handle MACRO (3 + space with random delays)
    if (macro1_is_running) {
        if (timer_elapsed32(macro1_timer) > macro1_current_delay) {
            switch (macro1_step) {
                case 0:
                    // Type '3'
                    tap_code(KC_3);
                    macro1_step = 1;
                    macro1_timer = timer_read32();
                    macro1_current_delay = get_short_random_delay();  // Random 500-750ms delay after typing '3'
                    break;
                case 1:
                    // Type space
                    tap_code(KC_SPC);
                    macro1_step = 0;  // Reset to start of sequence
                    macro1_timer = timer_read32();
                    macro1_current_delay = get_random_delay();  // Random 500-2000ms delay after typing space
                    break;
            }
        }
    }
    
    // Handle MACRO2 (2 + space + space with fixed delays)
    if (macro2_is_running) {
        if (timer_elapsed32(macro2_timer) > macro2_current_delay) {
            switch (macro2_step) {
                case 0:
                    // Type '2'
                    tap_code(KC_2);
                    macro2_step = 1;
                    macro2_timer = timer_read32();
                    macro2_current_delay = 100;  // 100ms delay
                    break;
                case 1:
                    // Type first space
                    tap_code(KC_SPC);
                    macro2_step = 2;
                    macro2_timer = timer_read32();
                    macro2_current_delay = 100;  // 100ms delay
                    break;
                case 2:
                    // Type second space
                    tap_code(KC_SPC);
                    macro2_step = 0;  // Reset to start of sequence
                    macro2_timer = timer_read32();
                    macro2_current_delay = 300;  // 300ms delay before repeating
                    break;
            }
        }
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MACRO:
            if (record->event.pressed) {
                // Toggle macro1 on/off
                macro1_is_running = !macro1_is_running;
                if (macro1_is_running) {
                    macro1_timer = timer_read32();
                    macro1_step = 0;
                    macro1_current_delay = get_random_delay();  // Start with random delay
                }
            }
            return false;  // Skip normal key processing
        case MACRO2:
            if (record->event.pressed) {
                // Toggle macro2 on/off
                macro2_is_running = !macro2_is_running;
                if (macro2_is_running) {
                    macro2_timer = timer_read32();
                    macro2_step = 0;
                    macro2_current_delay = 300;  // Start with 300ms delay
                }
            }
            return false;  // Skip normal key processing
    }
    return true;  // Continue with normal key processing
}