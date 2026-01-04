#include <iostream>

int stringLength(const char* str)
{
    const char* curr = str;

    while (*(curr++) != '\0');
    return curr - str - 1;
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

char* stringConcatenated(const char* first, const char* second)
{
    int lengthFirst = stringLength(first);
    int lengthSecond = stringLength(second);

    char* result = new char[lengthFirst + lengthSecond + 1] {};

    stringConcat(result, first);
    stringConcat(result, second);

    return result;
}

int main()
{
    char buffer1[1024];
    char buffer2[1024];

    std::cout << "Enter a word: ";
    std::cin >> buffer1;

    std::cout << "Enter second word: ";
    std::cin >> buffer2;

    char* result = stringConcatenated(buffer1, buffer2);
    std::cout << "The new word is: " << result;
    

    delete[] result;

}