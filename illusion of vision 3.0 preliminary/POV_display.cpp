#include "POV_display.h"

POV_display::POV_display()
{
}

POV_display::~POV_display()
{
}

int POV_display::changePixel(int x, int y, char texture)
{
	if (x >= width_display_ || y >= height_display_)
	{
		return 1;
	}

	display_matrix_[y][x] = texture;
	return 0;
}

void POV_display::show()
{
	system("cls");
	for (int i = 0; i < height_display_; i++)
	{
		for (int j = 0; j < width_display_; j++)
		{
			std::cout << display_matrix_[i][j];
		}
		std::cout << '\n';
	}
}

void POV_display::clear()
{
	system("cls");
}
