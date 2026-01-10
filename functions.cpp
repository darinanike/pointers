#include <iostream>

// функция за дължина на низ

int mystrleng(const char* str)
{
	int size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return size;
}

// функция за копиране на низ

char* mystrcopy(char* destination, const char* source)
{
	int sourceSize = mystrleng(source);

	for (int i = 0; i < sourceSize; i++)
	{
		destination[i] = source[i];
	}
	destination[sourceSize] = '\0';
	return destination;

}

// функция за конкантенация на два низа

char* mystrcat(char* destination, const char* source)
{
	int sourceSize = mystrleng(source);
	int destinationSize = mystrleng(source);

	for (int i = 0; i = sourceSize; i++)
	{
		destination[destinationSize + i] = source[i];
	}
	destination[destinationSize + sourceSize] = '\0';
	return destination;
}

