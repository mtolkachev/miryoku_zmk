// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// custom_config.h
#pragma once

/* 
 * Основной слой (BASE): Русский Вестник с модификациями.
 * Используются Unicode-коды (&uc), чтобы символы печатались корректно 
 * независимо от системной раскладки ОС.
 */
#define MIRYOKU_LAYER_BASE \
&uc 0446, &uc 0434, &uc 0440, &uc 0433, &uc 0445,    &uc 0444, &uc 043F, &uc 0430, &uc 044F, &kp APOS, \
&uc 0441, &uc 0442, &uc 043D, &uc 043A, &uc 0431,    &uc 044A, &uc 0432, &uc 043E, &uc 0451, &uc 0438, \
&uc 0449, &uc 0437, &uc 043B, &uc 043C, &uc 0447,    &uc 0436, &uc 0439, &kp FSLH, &kp COMMA, &kp DOT, \
U_NP, U_NP, U_LT(U_FUN, DEL), U_LT(U_NUM, BSPC), U_LT(U_SYM, RET), U_LT(U_MOUSE, TAB), U_LT(U_NAV, SPACE), U_LT(U_MEDIA, ESC), U_NP, U_NP

/* 
 * Дополнительный слой (EXTRA): Английский Canary.
 * Знаки препинания (APOS, FSLH, COMMA, DOT) находятся на тех же физических позициях, что и выше.
 */
#define MIRYOKU_LAYER_EXTRA \
&kp W, &kp L, &kp Y, &kp P, &kp B,    &kp Z, &kp F, &kp O, &kp U, &kp APOS, \
&kp C, &kp R, &kp S, &kp T, &kp G,    &kp M, &kp N, &kp E, &kp I, &kp A, \
&kp Q, &kp J, &kp V, &kp D, &kp K,    &kp X, &kp H, &kp FSLH, &kp COMMA, &kp DOT, \
U_NP, U_NP, &kp ESC, &kp SPACE, &kp TAB, &kp RET, &kp BSPC, &kp DEL, U_NP, U_NP