/*
 * myLinkList.h
 *
 *  Created on: 2015年9月15日
 *      Author: ygp
 */

#ifndef MYLINKLIST_H_
#define MYLINKLIST_H_

#include "myAlgorithms.h"

template<class T>
class lNode
{
public:
	T data;
	lNode* next;

	lNode()
	{
		data = 0;
		next = 0;
	}
	lNode(T data1)
	{
		data = data1;
		next = 0;
	}
	lNode(T data1, lNode* next1)
	{
		data = data1;
		next = next1;
	}
};
template<class T>
class myLinkList
{
private:
	lNode<T>* head;
	lNode<T>* current;
	int length;

public:
	myLinkList()
	{
		head = new lNode<T>();
		current = head;
		length = 0;
	}
	~myLinkList()
	{
		if(length == 0)
			delete head;
		else
		{
			while(listDelete(0))
				;
			delete head;
		}
	}

	status listInsert(int i, T data1)
	{
		if(i > length)
			return ERROR;

		int j;
		current = head;						//1.
		for(j = 0; j < i; j++)
		{
			current = current->next;		//1.定位到插入节点前一节点
		}
		lNode<T>* insertNode = new lNode<T>(data1, current->next);
		current->next = insertNode;
		length++;

		return OK;
	}
	status listDelete(int i)
	{
		if(i >= length)
			return ERROR;

		current = head;						//2.
		for(int j = 0; j < i; j++)
		{
			current = current->next;		//2.定位到删除节点的前一节点
		}
		lNode<T>* deleteNode = current->next;
		current->next = deleteNode->next;
		delete deleteNode;
		length--;

		return OK;
	}
	status getElement(int i, T& data1)
	{
		if(i >= length)
			return ERROR;

		current = head->next;				//3.
		for(int j = 0; j < i; j++)
		{
			current = current->next;		//3.定位到取出数据的节点
		}
		data1 = current->data;

		return OK;
	}
	void display()
	{
		int i;
		current = head->next;
		for(i = 0; i < length; i++)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl << length << endl;
	}
};



#endif /* MYLINKLIST_H_ */
