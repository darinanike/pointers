// Даден е низ. Създайте нов динамичен низ, който съдържа само главните букви.


#include <iostream>

bool isUpper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

// bool isUpper(char c)
// { 
// if (c >= 'A' && c <= 'Z')
// {
// return true;
// else
// return false;
// }
// }

int main()
{
	char input[100];
	std::cout << "Enter a word: ";
	std::cin.getline(input, 100);

	int countUpper = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (isUpper(input[i]))
		{
			countUpper++;
		}
	}

	char* result = new char[countUpper + 1];
	int k = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (isUpper(input[i]))
		{
			result[k] = input[i];
			k++;
		}
	}
	result[k] = '\0';

	std::cout << "Only upper letters: " << result << std::endl;
	delete[] result;
	return 0;
}