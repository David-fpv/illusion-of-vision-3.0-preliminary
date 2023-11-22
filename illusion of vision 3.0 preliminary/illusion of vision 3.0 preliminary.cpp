#include <iostream>
#include "FrameBuilder.h"

int main()
{
    FrameBuilder picture_1;
    char string[] = "ABAB";
    picture_1.writeText(string);
    picture_1.printText();
    picture_1.showFrame();
}