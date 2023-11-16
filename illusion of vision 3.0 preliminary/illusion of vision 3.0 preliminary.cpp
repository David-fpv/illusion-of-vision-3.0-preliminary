#include <iostream>
#include "POV_display.h"

int main()
{
    POV_display display_1;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 36; j++)
        {
            if ((i == 0 || i == 7) || (j == 0 || j == 35))
            {
                display_1.changePixel(j, i, '#');
            }
            else
            {
                display_1.changePixel(j, i, ' ');
            }
        }
    }

    display_1.show();
}