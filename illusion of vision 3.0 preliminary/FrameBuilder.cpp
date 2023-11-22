#include "FrameBuilder.h"

FrameBuilder::FrameBuilder()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 36; j++)
        {
            display_.changePixel(j, i, ' ');
        }
    }
}

FrameBuilder::~FrameBuilder()
{
}

void FrameBuilder::showFrame()
{
    display_.show();
}

int FrameBuilder::printLetter(int position, char symbol)
{
    if (position <= (-1 * symbol_length_in_pixels) || position >= DISPLAY_LENGTH_IN_PIXELS)
    {
        return 1;
    }

    int number_in_alphabet = 0;

    for (int i = 0; i < length(alphabet); i++)
    {
        if (symbol == alphabet[i])
        {
            number_in_alphabet = i;
            break;
        }
    }

    for (int i = position; i < position + symbol_length_in_pixels; i++)
    {
        if (i < 0 || i >= DISPLAY_LENGTH_IN_PIXELS)
        {
            continue;
        }

        for (int j = 0; j < symbol_heigth_in_pixels; j++)
        {
            if (isSetBit(alphabet_in_bits[number_in_alphabet][i - position], j))
            {
                display_.changePixel(i, j, '#');
            }
        }
    }
    
    return 0;
}

void FrameBuilder::printText()
{
    if (text_length_ * symbol_length_in_pixels <= DISPLAY_LENGTH_IN_PIXELS)
    {
        for (int i = 0; i < text_length_; i++)
        {
            printLetter(i * symbol_length_in_pixels, text_[i]);
        }
    }
}

int FrameBuilder::changePixel(int x, int y, char texture)
{
    display_.changePixel(x, y, texture);
    return 0;
}

int FrameBuilder::writeText(char *new_text)
{
    bool return_velue;
    return_velue = strCopy(text_, new_text);
    text_length_ = length(text_);
    return return_velue;
}

void FrameBuilder::clearFrame()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 36; j++)
        {
            display_.changePixel(j, i, ' ');
        }
    }
}
