/*
 * myQuickSort.cpp
 *
 *  Created on: 2015年8月3日
 *      Author: ygp
 */

#include "myAlgorithms.h"

int myQuickSort::partition(element a[], int left, int right)
{
/*		element x = a[right];							//算法导论原版
	 int i = left - 1;
	 int j;

	 for(j = left; j < right; j++)
	 {
	 if(a[j] <= x)
	 {
	 i++;
	 myAlgorithms::swap(a[i], a[j]);
	 }
	 }
	 myAlgorithms::swap(a[i + 1], a[right]);
	 return i + 1;*/

	element x = a[left];							//算法导论修改
	int i = left;
	int j;

	for (j = left + 1; j <= right; j++)
	{
		if (a[j] <= x)
		{
			i++;
			if (i < j)
			{
				myAlgorithms::swap(a[i], a[j]);
			}
		}
	}
	myAlgorithms::swap(a[i], a[left]);
	return i;

	/*
	 element x = a[left];							//算法
	 int i = left;
	 int j = right + 1;

	 while(true)
	 {
	 while(a[++i] < x && i < right)
	 {

	 }
	 while(a[--j] > x && j > left)
	 {

	 }
	 if(i >= j)
	 {
	 break;
	 }
	 myAlgorithms::swap(a[i], a[j]);
	 }

	 myAlgorithms::swap(a[j], a[left]);

	 return j;
	 */


/*	 element x = a[left];							//数据结构（清华）
	 int pivotPos = left;

	 while(true)
	 {
	 while(a[right] >= x && right > left)
	 {
	 right--;
	 }
	 while(a[left] <= x && left < right)
	 {
	 left++;
	 }
	 if(left >= right)
	 {
	 break;
	 }
	 myAlgorithms::swap(a[left], a[right]);
	 }

	 myAlgorithms::swap(a[left], a[pivotPos]);

	 return right;*/
}

void myQuickSort::qSort(element a[], int left, int right)
{
	if (left < right)
	{
		int povitPos = partition(a, left, right);
		qSort(a, left, povitPos - 1);
		qSort(a, povitPos + 1, right);
	}
}

void myQuickSort::sort(element a[], int arryLength)
{
	qSort(a, 0, arryLength - 1);
}
