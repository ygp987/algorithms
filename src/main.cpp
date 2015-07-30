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

const int arryLength = 100000;

int main()
{
	int a[arryLength] = { 0 }, tmp[arryLength] = { 0 };	//��ʼ��
	int timeStart = 0, timeEnd = 0;
	myAlgorithms::randomArry(a, 0, 100000, arryLength);
	memcpy(tmp, a, sizeof(tmp));

	timeStart = clock();
	myInsertSort::sort(a, arryLength);			//��������
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
//	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	mySelectSort::sort(a, arryLength);			//ѡ������
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
//	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myBubbleSort::sort(a, arryLength);			//ð������
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
//	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myMergeSort::sort(a, arryLength);			//�鲢����
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
//	myAlgorithms::display(a, arryLength);

	memcpy(a, tmp, sizeof(a));
	timeStart = clock();
	myShellSort::sort(a, arryLength);			//ϣ������
	timeEnd = clock();
	cout << timeEnd - timeStart << endl;
//	myAlgorithms::display(a, arryLength);


	return 0;
}
