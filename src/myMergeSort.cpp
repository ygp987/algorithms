/*
 * myMergeSort.cpp
 *
 *  Created on: 2015��7��23��
 *      Author: ygp
 */

#include "myAlgorithms.h"

void myMergeSort::merge(int a[], int tmp[], int lPos, int rPos, int rEnd)
{
	int i, lEnd, num, tmpPos;
	lEnd = rPos - 1;
	tmpPos = lPos;
	num = rEnd - lPos + 1;

	while (lPos <= lEnd && rPos <= rEnd)	//��Ҫѭ��
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

	while (lPos <= lEnd)				//����ʣ��ĵ�һ��
	{
		tmp[tmpPos] = a[lPos];
		tmpPos++;
		lPos++;
	}
	while (rPos <= rEnd)				//����ʣ��ĵڶ���
	{
		tmp[tmpPos] = a[rPos];
		tmpPos++;
		rPos++;
	}
	for (i = 0; i < num; i++, rEnd--)	//����ʱ���鸴�ƻ�ԭ����
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
	int tmp[l] = { 0 };

	if (tmp != 0)
	{
		msort(a, tmp, 0, l - 1);
	}
}
