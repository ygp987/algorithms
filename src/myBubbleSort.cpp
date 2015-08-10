/*
 * myBubbleSort.cpp
 *
 *  Created on: 2015年7月19日
 *      Author: ygp
 */

#include "myAlgorithms.h"

void myBubbleSort::sort(int a[], int l)
{
	int i = 0, j = 0;
	for (i = 0; i < l - 1; i++)
	{
		for (j = i + 1; j < l; j++)
		{
			if (a[i] > a[j])
			{
				/*				int temp = a[i];
				 a[i] = a[j];
				 a[j] = temp;*/

				myAlgorithms::swap(a[i], a[j]);
			}
		}
	}
}

