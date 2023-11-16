#pragma once
#include <iostream>
#define WIDTH_DISPLAY 36
#define HEIGHT_DISPLAY 8

class POV_display
{
public:
	POV_display();
	~POV_display();
	int changePixel(int x, int y, char texture);
	void show();
	void clear();
private:
	const int width_display_ = WIDTH_DISPLAY;
	const int height_display_ = HEIGHT_DISPLAY;
	char display_matrix_[HEIGHT_DISPLAY][WIDTH_DISPLAY];
};

