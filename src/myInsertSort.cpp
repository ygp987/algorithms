/*
 * myInsertSort.cpp
 *
 *  Created on: 2015��6��14��
 *      Author: ygp
 */

#include "myAlgorithms.h"

void myInsertSort::sort(int a[], int l)
{
	int i = 0, j = 0;
	int temp = 0;
	for (i = 1; i < l; i++)
	{
		j = i - 1;
		temp = a[i];
		while (j >= 0 && a[j] > temp)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}

