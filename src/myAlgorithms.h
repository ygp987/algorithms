/*
 * myAlgorithms.h
 *
 *  Created on: 2015年6月14日
 *      Author: ygp
 */

#ifndef MYALGORITHMS_H_
#define MYALGORITHMS_H_

typedef int element;
typedef bool status;

const bool OK = true;
const bool ERROR = false;

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

#include "myInsertSort.h"
#include "mySelectSort.h"
#include "myBubbleSort.h"
#include "myMergeSort.h"
#include "myShellSort.h"
#include "myHeapSort.h"
#include "myQuickSort.h"

#include "myList.h"

#include "test.h"

using namespace std;

class myAlgorithms
{
public:
	static void display(element a[], int l);
	static void randomArry(element a[], element min, element max, int N);
	static void swap(element& a, element& b);
};

#endif /* MYALGORITHMS_H_ */
