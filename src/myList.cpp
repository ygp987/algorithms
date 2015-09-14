/*
 * myList.cpp
 *
 *  Created on: 2015年8月13日
 *      Author: ygp
 */

#include "myAlgorithms.h"

myList::myList()
{
	if(!initList())
	{
		cout << "error" << endl;
	}
}
status myList::initList()
{
	data = new element[listInitSize];
	if (!data)
		return ERROR;


	length = 0;
	listSize = listInitSize;

	return OK;
}
status myList::listInsert(int i, element a)
{
	int j = 0;

	if(i < 0 || i > length)
		return ERROR;

	if(length >= listSize)
	{
		element* newbase = new element[listSize + listIncrement];
		memcpy(newbase, data, length * sizeof(element));
		delete[] data;
		data = newbase;
		listSize += listIncrement;
	}
	for(j = length - 1; j >= i - 1; j--)
	{
		data[j + 1] = data[j];
	}
	data[i] = a;
	length++;

	return OK;
}
status myList::listDelete(int i, element& e)
{
	if(i < 0 && i > length - 1)
	{
		cout << "error" << endl;
		return ERROR;
	}
	e = data[i];
	int j;
	for(j = length - 1; j > i; j--)
	{
		data[j-1] = data[j];
	}
	length--;

	return OK;
}
status myList::listDelete(int i)
{
	if(i < 0 && i > length - 1)
	{
		cout << "error" << endl;
		return ERROR;
	}
	int j;
	for(j = i + 1; j < length; j++)
	{
		data[j-1] = data[j];
	}
	length--;

	return OK;
}
int myList::locateElement(element e)
{
	int i;
	for(i = 0; i < length; i++)
	{
		if(data[i] == e)
			return i;
	}
	return -1;
}
void myList::display()
{
	myAlgorithms::display(data, length);
	cout << length << " " << listSize << endl;
}
