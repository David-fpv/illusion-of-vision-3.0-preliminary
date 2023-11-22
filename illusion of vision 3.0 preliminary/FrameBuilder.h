#pragma once
#include "POV_display.h"
#include "MyString.h"
#include "english_alphabet.h"
#include "BitArray.h"

#define MAX_SIZE_TEXT 51

class FrameBuilder
{
public:
	FrameBuilder();
	~FrameBuilder();
	int changePixel(int x, int y, char texture);
	int writeText(char* new_text);
	void clearFrame();
	void showFrame();
	int printLetter(int position, char symbol);
	void printText();
private:
	char text_[MAX_SIZE_TEXT];
	int text_length_ = 0;
	POV_display display_;
};

