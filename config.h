#pragma once

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

// Twoja dokładna mapa pinów z podziałem na rzędy
#define DIRECT_PINS { \
    { GP15, GP14, GP13 }, \
    { GP26, GP27, GP22 }, \
    { GP6, GP7, GP8 } \
}

// Unikalny identyfikator Twojego makropada dla Viala
#define VIAL_KEYBOARD_UID {0x42, 0x69, 0x33, 0x37, 0x24, 0x99, 0x15, 0x01}
#define VIAL_UNLOCK_COMBO {0, 0}, {0, 1}
