/* This file have English letters which safe in very economical style.
For any letter I should do some matrix where I use 1 is color, 0 - no color.
And before column I wrote in one number in binary
format, after it translated in decimal format.
And so I got massive of 5 decimal numbers for any letter. */
#include "english_alphabet.h"

char alphabet[] = "AB";	// Available alphabetical
const int length_alphabet = 2;

const int symbol_length_in_pixels = 6;
const int symbol_heigth_in_pixels = 7;

unsigned char alphabet_in_bits[2][symbol_length_in_pixels] =
{
	{31, 36, 68, 36, 31, 0}, //A - letter
	{127, 73, 73, 73, 54, 0} //B
};