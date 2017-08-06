#ifndef SORTTHIS_H
#define SORTTHIS_H

//template <class T> void sortThis(T *array, unsigned first, unsigned last)
//{
//	unsigned left = first;
//	unsigned right = last;
//	T *mid = &array[(left + right) / 2];
//
//	while (left <= right) {
//		while (array[left] < mid) {
//			left++;
//		}
//
//		while (array[right] > mid) {
//			right--;
//		}
//
//		if (left <= right) {
//			std::swap(array[left++], array[right--]);
//		}
//	}
//
//	if (first < right) {
//		sortThis(array, first, right);
//	}
//
//	if (last > left) {
//		sortThis(array, left, last);
//	}
//}


template <class T> void sortThis(T *array, unsigned first, unsigned last)
{
	unsigned left = first;
	unsigned right = last;
	T *mid = &array[(left + right) / 2];
	T *ptrLeft = &array[left];
	T *ptrRight = &array[right];

	while (left <= right) {
		while (ptrLeft < mid) {
			left++;
			ptrLeft++;
		}

		while (ptrRight > mid) {
			right--;
			ptrRight--;
		}

		if (left <= right) {
			T temp = *ptrLeft;
			ptrLeft = ptrRight;
			ptrRight = &temp;

			ptrLeft++;
			ptrRight--;
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