/*
 * myHeapSort.cpp
 *
 *  Created on: 2015年7月30日
 *      Author: ygp
 */

#include "myAlgorithms.h"

int myHeapSort::parent(int i)
{
	return (i - 1) / 2;
}
int myHeapSort::left(int i)
{
	return 2 * i + 1;
}
int myHeapSort::right(int i)
{
	return 2 * i + 2;
}

void myHeapSort::maxHeapify(element a[], int i, int length)
{
	int l, r, largest;
	l = left(i);
	r = right(i);
	if (l < length && a[l] > a[i])
	{
		largest = l;
	}
	else
		largest = i;
	if (r < length && a[r] > a[largest])
	{
		largest = r;
	}
	if (largest != i)
	{
		/*		int temp = a[i];
		 a[i] = a[largest];
		 a[largest] = temp;*/

		myAlgorithms::swap(a[i], a[largest]);

		maxHeapify(a, largest, length);
	}
}
void myHeapSort::buildMaxHeapify(element a[], int length)
{
	int i;
	for (i = length / 2; i >= 0; i--)
	{
		maxHeapify(a, i, length);
	}
}
void myHeapSort::sort(element a[], int length)
{
	int i;
	buildMaxHeapify(a, length);
	for (i = length - 1; i >= 1; i--)
	{
		/*		int tmp = a[i];
		 a[i] = a[0];
		 a[0] = tmp;*/

		myAlgorithms::swap(a[i], a[0]);

		length--;
		maxHeapify(a, 0, length);
	}
}
