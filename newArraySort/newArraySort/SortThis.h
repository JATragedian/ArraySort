#ifndef SORTTHIS_H
#define SORTTHIS_H

template <class T> void sortThis(T *array, unsigned first, unsigned last)
{
	unsigned size = 10;
	unsigned left = first;
	unsigned right = last;
	unsigned midIndex = (left + right) / 2;
	T *mid = &array[midIndex];

	for (unsigned i = 0; i < size; i++) {
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';

	while (left <= right && left < midIndex && right > midIndex){
		while (array[left] < *mid) {
			left++;
		}

		while (array[right] > *mid) {
			right--;
		}

		if (left <= right) {
			std::swap(array[left++], array[right--]);
			for (unsigned i = 0; i < size; i++) {
				std::cout << array[i] << ' ';
			}
			std::cout << '\n';
		}
	}

	if (first < right) {
		sortThis(array, first, right);
	}

	if (last > left) {
		sortThis(array, left, last);
	}
}

#endif