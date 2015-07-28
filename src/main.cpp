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

int main()
{

	int a[8] = { 2, 3, 4, 5, 1, 8, 7, 6 };		//≤Â»Î≈≈–Ú

	myInsertSort::sort(a, 8);
	myAlgorithms::display(a, 8);

	int b[8] = { 2, 3, 4, 5, 1, 8, 7, 6 };		//—°‘Ò≈≈–Ú

	mySelectSort::sort(b, 8);
	myAlgorithms::display(b, 8);

	int c[8] = { 2, 3, 4, 5, 1, 8, 7, 6 };		//√∞≈›≈≈–Ú

	myBubbleSort::sort(c, 8);
	myAlgorithms::display(c, 8);

	int d[8] = { 0, 10, 5, 1, 4, 2, 6, 8 };		//πÈ≤¢≈≈–Ú

	myMergeSort::sort(d, 8);
	myAlgorithms::display(d, 8);

	return 0;
}
