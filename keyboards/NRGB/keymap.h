
#pragma once

// clang-format off

#define KEY_MAPS {								\
    {{RGB_MODE_U},}                             \
};												\

#define RGB_CONFIG { {                          \
    {14},                                       \
    {13},                                       \
    {12},                                       \
    {11},                                       \
    {10},                                       \
    {9},                                        \
    {8},                                        \
    {7},                                        \
    {6},                                        \
    {5},                                        \
    {4},                                        \
    {3},                                        \
    {2},                                        \
    {1},                                        \
    {0},                                        \
}, {                                            \
    { 0,  56 },                                 \
    { 0,  52 },                                 \
    { 0,  48 },                                 \
    { 0,  44 },                                 \
    { 0,  40 },                                 \
    { 0,  36 },                                 \
    { 0,  32 },                                 \
    { 0,  28 },                                 \
    { 0,  24 },                                 \
    { 0,  20 },                                 \
    { 0,  16 },                                 \
    { 0,  12 },                                 \
    { 0,  8 },                                  \
    { 0,  4 },                                  \
    { 0,  0 },                                  \
}};                                             \

#define RGB_MODE_RESET {                        \
    .mode = RGB_MATRIX_RAINBOW_MOVING_CHEVRON,  \
    .hsv.h = 10, .hsv.s = 255, .hsv.v = 100,    \
    .speed = 25,                                \
};                                              \

// clang-format on
