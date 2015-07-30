/*
 * myMergeSort.cpp
 *
 *  Created on: 2015年7月23日
 *      Author: ygp
 */

#include "myAlgorithms.h"

void myMergeSort::merge(int a[], int tmp[], int lPos, int rPos, int rEnd)
{
	int i, lEnd, num, tmpPos;
	lEnd = rPos - 1;
	tmpPos = lPos;
	num = rEnd - lPos + 1;

	while (lPos <= lEnd && rPos <= rEnd)	//主要循环
	{
		if (a[lPos] <= a[rPos])
		{
			tmp[tmpPos] = a[lPos];
			tmpPos++;
			lPos++;
		}
		else
		{
			tmp[tmpPos] = a[rPos];
			tmpPos++;
			rPos++;
		}
	}

	while (lPos <= lEnd)				//复制剩余的第一半
	{
		tmp[tmpPos] = a[lPos];
		tmpPos++;
		lPos++;
	}
	while (rPos <= rEnd)				//复制剩余的第二半
	{
		tmp[tmpPos] = a[rPos];
		tmpPos++;
		rPos++;
	}
	for (i = 0; i < num; i++, rEnd--)	//把临时数组复制回原数组
	{
		a[rEnd] = tmp[rEnd];
	}

}
void myMergeSort::msort(int a[], int tmp[], int left, int right)
{
	int center;

	if (left < right)
	{
		center = (left + right) / 2;
		msort(a, tmp, left, center);
		msort(a, tmp, center + 1, right);
		merge(a, tmp, left, center + 1, right);
	}
}
void myMergeSort::sort(int a[], int l)
{
	int* tmp = new int[l];

	if (tmp != 0)
	{
		msort(a, tmp, 0, l - 1);
		delete[] tmp;
	}
}
