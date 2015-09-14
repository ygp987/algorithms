//============================================================================
// Name        : algoriyhms.cpp
// Author      : ygp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "myAlgorithms.h"

using namespace std;

const int arryLength = 20;

int main()
{
	element a[arryLength] = { 0 };
	element tmp[arryLength] = { 0 };	//初始化
	int timeStart = 0, timeEnd = 0;
	myAlgorithms::randomArry(a, 1, 100, arryLength);
	memcpy(tmp, a, sizeof(tmp));

//	myAlgorithms::display(a, arryLength);


/*	timeStart = clock();
	myInsertSort::sort(a, arryLength);			//插入排序
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	mySelectSort::sort(a, arryLength);			//选择排序
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myBubbleSort::sort(a, arryLength);			//冒泡排序
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myMergeSort::sort(a, arryLength);			//归并排序
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myShellSort::sort(a, arryLength);			//希尔排序
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
	myAlgorithms::display(a, arryLength);
*/
/*
	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myHeapSort::sort(a, arryLength);			//堆排序
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
//	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myQuickSort::sort(a, arryLength);			//快速排序
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
//	myAlgorithms::display(a, arryLength);
*/

	myList ml;
	ml.initList();
	ml.listInsert(0, 123);
	ml.listInsert(1, 1234);
	ml.listInsert(2, 12345);
	ml.listInsert(0, 123456);
	ml.display();
	ml.listDelete(0);
	ml.display();
	cout << ml.locateElement(123) << endl;


	return 0;

}
