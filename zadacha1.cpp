#include <iostream>

int* creatArray(size_t N)
{
	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	return arr;
}

void printArray(const int* arr, size_t N)
{
	for (size_t i = 0; i < N; i++)
	{
		std::cout << arr[i] << ' ';
	}

}

int main()
{
	size_t N;
	std::cin >> N;

	int* dynamicArray = creatArray(N);
	printArray(dynamicArray, N);

	delete[] dynamicArray;

}