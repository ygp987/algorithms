/*
 * myList.h
 *
 *  Created on: 2015年8月13日
 *      Author: ygp
 */

#ifndef MYLIST_H_
#define MYLIST_H_

#include "myAlgorithms.h"

const int listInitSize = 50;
const int listIncrement = 20;

class myList
{
private:
	element *data;
	int length;
	int listSize;

public:
	myList();
	~myList();
	status initList();
	status listInsert(int i, element a);
	status listDelete(int i, element& e);
	status listDelete(int i);
	int locateElement(element e);
	void display();

};



#endif /* MYLIST_H_ */
