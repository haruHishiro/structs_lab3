#pragma once


class node {
public:
	node();
	node(node* prev, unsigned long long value);
	node(unsigned long long value);

	friend bool operator< (const node& left, const node& right);
	friend bool operator> (const node& left, const node& right);
	friend bool operator== (const node& left, const node& right);
	node operator++(int);

	void setPrev(node* prev);
	void setNext(node* next);
	void setValue(unsigned long long value);
	unsigned long long getValue();
	node* getNext();
	node* getPrev();

private:
	unsigned long long value;
	node* next;
	node* prev;
};
