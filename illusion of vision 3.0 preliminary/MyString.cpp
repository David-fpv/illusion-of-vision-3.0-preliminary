#include "MyString.h"

int length(char* str)
{
	int size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return size;
}

int strCopy(char* str1, char* str2)
{
	if (length(str2) == 0)
	{
		return 1;
	}

	int length_str2 = length(str2);

	for (int i = 0; i <= length_str2; i++)
	{
		str1[i] = str2[i];
	}

	return 0;
}

void strClear(char* str)
{
	str[0] = '\0';
}