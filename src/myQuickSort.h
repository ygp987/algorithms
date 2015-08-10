/*
 * myQuickSort.h
 *
 *  Created on: 2015年8月3日
 *      Author: ygp
 */

#ifndef MYQUICKSORT_H_
#define MYQUICKSORT_H_

class myQuickSort
{
public:
	static int partition(int a[], int left, int right);
	static void qSort(int a[], int left, int right);
	static void sort(int a[], int arryLength);
};

#endif /* MYQUICKSORT_H_ */
