/*
 * myShellSort.cpp
 *
 *  Created on: 2015Äê7ÔÂ28ÈÕ
 *      Author: ygp
 */

#include "myAlgorithms.h"

void myShellSort::sort(int a[], int l)
{
	/*
	 int i, j, increment;
	 int tmp;
	 */
	int increment;
	for (increment = l / 2; increment > 0; increment /= 2)
	{
		/*		for(i = increment; i < l; i++)
		 {
		 tmp = a[i];
		 j = i - increment;
		 while (j >= 0 && a[j] > tmp)
		 {
		 a[j + increment] = a[j];
		 j -= increment;
		 }
		 a[j + increment] = tmp;
		 }*/

		myInsertSort::sort(a, l, increment);
	}
}
