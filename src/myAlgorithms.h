/*
 * myAlgorithms.h
 *
 *  Created on: 2015Äê6ÔÂ14ÈÕ
 *      Author: ygp
 */

#ifndef MYALGORITHMS_H_
#define MYALGORITHMS_H_

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

#include "myInsertSort.h"
#include "mySelectSort.h"
#include "myBubbleSort.h"
#include "myMergeSort.h"
#include "myShellSort.h"

#include "test.h"

using namespace std;

class myAlgorithms
{
public:
	static void display(int a[], int l);
	static void randomArry(int a[], int min, int max, int N);
};

#endif /* MYALGORITHMS_H_ */
