//============================================================================
// Name        : algoriyhms.cpp
// Author      : ygp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "myAlgorithms.h"
//#include"myInsertSort.h"
using namespace std;

int main()
{
	int a[8] = { 2, 3, 4, 5, 1, 8, 7, 6 };

	myInsertSort::sort(a, 8);
	myAlgorithms::display(a,8);

	int b[8] = { 2, 3, 4, 5, 1, 8, 7, 6 };

	mySelectSort::sort(b, 8);
	myAlgorithms::display(b, 8);

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	return 0;
}
