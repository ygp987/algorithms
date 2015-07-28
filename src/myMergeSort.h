/*
 * myMergeSort.h
 *
 *  Created on: 2015Äê7ÔÂ23ÈÕ
 *      Author: ygp
 */

#ifndef MYMERGESORT_H_
#define MYMERGESORT_H_

class myMergeSort
{
public:
	void static merge(int a[], int tmp[], int lPos, int rPos, int rEnd);
	void static msort(int a[], int tmp[], int left, int right);
	void static sort(int a[], int l);

};

#endif /* MYMERGESORT_H_ */
