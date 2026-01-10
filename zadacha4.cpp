#include <iostream>

int* countCaracter(const char* str)
{
	int* counts = new int[128];

	for (int i = 0; i < 128; i++) 
	{
		counts[i] = 0;
	}

	int i = 0;

	while (str[i] != '\0')
	{
		char currentChar = str[i];
		counts[(unsigned char)currentChar]++;
		i++;
	}
	return counts;
}

int main()

const char* myText = 