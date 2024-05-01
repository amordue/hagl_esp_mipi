/*

MIT License

Copyright (c) 2019-2022 Mika Tuupola

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

-cut-

This file is part of the Raspberry Pi Pico MIPI DCS backend for the HAGL
graphics library: https://github.com/tuupola/hagl_pico_mipi

SPDX-License-Identifier: MIT

*/

#ifndef _HAGL_PICO_HAL_COLOR_H
#define _HAGL_PICO_HAL_COLOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifdef CONFIG_MIPI_DCS_PIXEL_FORMAT_24BIT_SELECTED
typedef uint32_t hagl_color_t;
#define HAGL_COLOR_TYPE_DEFINED
#endif

#ifdef CONFIG_MIPI_DCS_PIXEL_FORMAT_18BIT_SELECTED
typedef uint32_t hagl_color_t;
#define HAGL_COLOR_TYPE_DEFINED
#endif

#ifdef CONFIG_MIPI_DCS_PIXEL_FORMAT_16BIT_SELECTED
/* Currently only this, ie. RGB565 is properly tested. */
typedef uint16_t hagl_color_t;
#define HAGL_COLOR_TYPE_DEFINED
#endif

#ifdef CONFIG_MIPI_DCS_PIXEL_FORMAT_12BIT_SELECTED
typedef uint16_t hagl_color_t;
#define HAGL_COLOR_TYPE_DEFINED
#endif

#ifdef CONFIG_MIPI_DCS_PIXEL_FORMAT_8BIT_SELECTED
typedef uint8_t hagl_color_t;
#define HAGL_COLOR_TYPE_DEFINED
#endif

#ifdef CONFIG_MIPI_DCS_PIXEL_FORMAT_3BIT_SELECTED
typedef uint8_t hagl_color_t;
#define HAGL_COLOR_TYPE_DEFINED
#endif

#ifndef HAGL_COLOR_TYPE_DEFINED
typedef uint32_t hagl_color_t;
#endif

#ifdef __cplusplus
}
#endif
#endif /* _HAGL_PICO_HAL_COLOR_H */
