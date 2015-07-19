/*
 * myBubbleSort.cpp
 *
 *  Created on: 2015Äê7ÔÂ19ÈÕ
 *      Author: ygp
 */

#include "myAlgorithms.h"

void myBubbleSort::sort(int a[], int l)
{
	int i = 0, j = 0, temp = 0;
	for (i = 0; i < l - 1; i++)
	{
		for (j = i + 1; j < l; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

