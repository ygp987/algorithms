/*
 * myHeapSort.h
 *
 *  Created on: 2015年7月30日
 *      Author: ygp
 */

#ifndef MYHEAPSORT_H_
#define MYHEAPSORT_H_

class myHeapSort
{
public:
	static int parent(int i);
	static int left(int i);
	static int right(int i);
	static void maxHeapify(int a[], int i, int length);
	static void buildMaxHeapify(int a[], int length);
	static void sort(int a[], int length);
};



#endif /* MYHEAPSORT_H_ */
