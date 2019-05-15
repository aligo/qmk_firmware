#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, 
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 
		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, 
		KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSPC, 
		KC_LCTL, KC_LALT, KC_LGUI,                            LT(1, KC_SPC),                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT),

	KEYMAP(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, 
		KC_DEL,  KC_BTN1, KC_WH_D, KC_BTN2, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, KC_LCBR, KC_RCBR, KC_PIPE, 
		_______, KC_WH_L, KC_WH_U, KC_WH_R, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_COLN, KC_DQUO,          KC_UNDS, 
		KC_PGUP, KC_BTN3, KC_BTN4, KC_BTN5, _______, _______, _______, _______, KC_LABK, KC_RABK, KC_QUES,                   KC_PGDN, 
		_______, _______, _______,                            _______,                            _______, _______, _______, _______),

	// KEYMAP(
	// 	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
	// 	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
	// 	_______, RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______, 
	// 	_______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, 
	// 	RESET, _______, _______, _______, _______, _______, _______, _______),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {


	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( U(NO), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRB |= (1 << 0); PORTB &= ~(1 << 0);
	} else {
		DDRB &= ~(1 << 0); PORTB &= ~(1 << 0);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}