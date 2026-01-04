#include <iostream>

int stringLength(const char* str)
{
	const char* curr = str;

	while (*(curr++) != '\0');

	return curr - str - 1;
}

char* extensionName(const char* path)
{
	const char* dot = path + stringLength(path);

	int length = 0;
	while (*dot != '.' && dot != path)
	{
		dot--;
		length++;
	}

	char* result = new char[length + 1] {};

	dot++;
	for (int i = 0; dot[i] != '\0'; i++)
	{
		result[i] = dot[i];
	}
	return result;

}

void stringConcat(char* destination, const char* source)
{
	while (*destination != '\0')
	{
		destination++;
	}

	while (*source != '\0')
	{
		*destination = *source;

		destination++;
		source++;
	}

	*destination = '\0';

}

void renameFile(char*& path, const char* newName)
{
	char* extension = extensionName(path);

	char* result = new char[stringLength(newName) + stringLength(extension) + 1 + 1] {};

	stringConcat(result, newName);
	stringConcat(result, ".");
	stringConcat(result, extension);

	delete[] extension;
	delete[] path;

	path = result;
}

int main()
{
	char* buffer = new char[1024] {};
	char newNameInput[256];

	std::cout << "Enter fail name ";
	std::cin >> buffer;

	std::cout << "Enter new name ";
	std::cin >> newNameInput;

	renameFile(buffer, newNameInput);

	std::cout << "New name: " << buffer;

	delete[] buffer;


	
}