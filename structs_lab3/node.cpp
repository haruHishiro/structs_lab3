#include "node.h"


node::node(){
	node::next = nullptr;
	node::prev = nullptr;
	node::value = 1;
}

node::node(node* prev, unsigned long long value){
	node::next = nullptr;
	node::prev = prev;
	node::value = value;
}

node::node(unsigned long long value){
	node::next = nullptr;
	node::prev = nullptr;
	node::value = value;
}

bool operator<(const node& left, const node& right) { return bool(left.value < right.value); }
bool operator>(const node& left, const node& right) { return bool(left.value > right.value); }
bool operator==(const node& left, const node& right) { return bool(left.value == right.value); }
node node::operator++(int) { return *this->getNext(); }

void node::setPrev(node* prev) { node::prev = prev; }
void node::setNext(node* next) { node::next = next; }
void node::setValue(unsigned long long value) { node::value = value; }
unsigned long long node::getValue() { return node::value; }
node* node::getNext() { return node::next; }
node* node::getPrev() { return node::prev; }
