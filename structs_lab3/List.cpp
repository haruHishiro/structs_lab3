#include "List.h"


List::List() {
	List::head = nullptr;
	List::tail = nullptr;
}

List::~List() {
	List::removeAllFromHead();
}

char List::isEmpty() { return List::head == nullptr; }

void List::pushBack(unsigned long long value) {
	node* n = new node(value);
	if (List::isEmpty()) {
		List::head = n;
		List::tail = n;
	}
	else {
		n->setPrev(List::tail);
		List::tail->setNext(n);
		List::tail = n;
	}
}

node* List::operator[](const unsigned long long index) {
	if (List::isEmpty()) return nullptr;
	node* n = List::head;
	for (unsigned long long i = 0; i < index; i++) {
		n = n->getNext();
		if (!n) return nullptr;
	}
	return n;
}

void List::removeHead() {
	if (List::isEmpty()) return;
	node* n = List::head;
	List::head = n->getNext();
	delete n;
}

void List::removeTail() {
	if (List::isEmpty()) return;
	if (List::head == List::tail) {
		List::removeHead();
		return;
	}
	node* n = List::tail->getPrev();
	n->setNext(nullptr);
	delete List::tail;
	List::tail = n;
}

void List::removeAllPrev(unsigned long long iterator) {
	for (unsigned long long i = 0; i < iterator; i++) {
		List::removeHead();
	}
}

void List::removeALL(){
	List::removeAllFromHead();
	List::head = nullptr;
	List::tail = nullptr;
}

void List::removeAllFromHead() {
	if (List::isEmpty()) return;
	node* buf = List::head;
	node* toDelete;

	do {
		toDelete = buf;
		buf = toDelete->getNext();
		delete toDelete;
	} while (buf);
}

void List::printList() {
	if (isEmpty()) {
		printf("No Elements");
		return;
	}
	node* toPrint = List::head;
	do {
		printf("%llu, ", toPrint->getValue());
		toPrint = toPrint->getNext();
	} while (toPrint);

}

node* List::getTail() { return List::tail; }
node* List::getHead() { return List::head; }