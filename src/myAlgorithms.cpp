/*
 * myAlgorithms.cpp
 *
 *  Created on: 2015年6月15日
 *      Author: ygp
 */

#include"myAlgorithms.h"

void myAlgorithms::display(element a[], int l)
{
	int i = 0;
	for (i = 0; i < l; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void myAlgorithms::randomArry(element a[], element min, element max, int N)
{
	srand((unsigned) time(NULL));

	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % (element) (max - min + 1) + min;
	}
}
void myAlgorithms::swap(element& a, element& b)
{
	element temp = a;
	a = b;
	b = temp;
}
