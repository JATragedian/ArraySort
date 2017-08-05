#include <iostream>
#include <ctime>
#include "SortThis.h"

#define SIZE 3854

int main()
{
	int array[SIZE];

	for (unsigned i = 0; i < SIZE; i++) {
		array[i] = rand() % 91 + 65;
	}

	clock_t start = clock();

	sortThis(array, 0, SIZE - 1);

	clock_t end = clock();

	for (unsigned i = 0; i < SIZE; i++) {
		std::cout << array[i] << ' ';
	}

	std::cout << "\n\n" << "Speed of sorting execution: " << (double) (end - start) / SIZE << '\n';

	system("pause >> NULL");

	return 0;
}