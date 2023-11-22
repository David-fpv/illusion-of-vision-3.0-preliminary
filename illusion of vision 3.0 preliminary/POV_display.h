#pragma once
#include <iostream>
#define DISPLAY_LENGTH_IN_PIXELS 36
#define DISPLAY_HEIGHT_IN_PIXELS 8

class POV_display
{
public:
	POV_display();
	~POV_display();
	int changePixel(int x, int y, char texture);
	void show();
	void clear();
private:
	const int width_display_ = DISPLAY_LENGTH_IN_PIXELS;
	const int height_display_ = DISPLAY_HEIGHT_IN_PIXELS;
	char display_matrix_[DISPLAY_HEIGHT_IN_PIXELS][DISPLAY_LENGTH_IN_PIXELS];
};

