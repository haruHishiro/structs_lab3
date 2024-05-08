#pragma once

#include "node.h"
#include <stdio.h>


class List {
public:
	List();
	~List();
	char isEmpty();
	void pushBack(unsigned long long value);

	node* operator[] (const unsigned long long index);

	void removeHead();
	void removeTail();
	void removeAllPrev(unsigned long long iterator);
	void removeALL();

	void printList();

	node* getTail();
	node* getHead();

private:
	void removeAllFromHead();
	node* head;
	node* tail;
};
