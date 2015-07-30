/*
 * myAlgorithms.cpp
 *
 *  Created on: 2015Äê6ÔÂ15ÈÕ
 *      Author: ygp
 */

#include"myAlgorithms.h"

void myAlgorithms::display(int a[], int l)
{
	int i = 0;
	for (i = 0; i < l; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void myAlgorithms::randomArry(int a[], int min, int max, int N)
{
	srand((unsigned) time(NULL));

	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % (int) (max - min + 1) + min;
	}
}
