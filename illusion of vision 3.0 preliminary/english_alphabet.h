#pragma once

/* This file have English letters which safe in very economical style.
For any letter I should do some matrix where I use 1 is color, 0 - no color.
And before column I wrote in one number in binary
format, after it translated in decimal format.
And so I got massive of 5 decimal numbers for any letter. */

extern char alphabet[];
extern const int length_alphabet;

extern const int symbol_length_in_pixels;
extern const int symbol_heigth_in_pixels;

extern unsigned char alphabet_in_bits[2][6]; // 2 - count letters, 6 - their length in pixels 