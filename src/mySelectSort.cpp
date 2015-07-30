/*
 * mySelectSort.cpp
 *
 *  Created on: 2015年6月20日
 *      Author: ygp
 */

#include "myAlgorithms.h"

void mySelectSort::sort(int a[], int l)
{
	int i = 0, j = 0, temp = 0, pos = 0;
	for (i = 0; i < l - 1; i++)
	{
		pos = i;
		for (j = i + 1; j < l; j++)
		{

			if (a[pos] > a[j])
			{
//				temp = a[j];
				pos = j;
			}
		}
		temp = a[pos];
		a[pos] = a[i];
		a[i] = temp;
	}
}

