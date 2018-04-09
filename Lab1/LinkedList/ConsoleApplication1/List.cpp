#include "stdafx.h"
#include "List.h"
#include "iostream"

void List::push(string n) {
	Node * itm = new Node;
	itm->lastName = n;
	if (firstElement == NULL) {
		firstElement = itm;
		lastElement = itm;
		lastElement->next = firstElement;
	}
	else {
		Node * oldlast = lastElement;
		lastElement = itm;
		oldlast->next = itm;
		lastElement->next = firstElement;
	}
}

List List::getFirstGroup() {
	List first;
	Node * i = firstElement;
	cout << "First group ";

	do {
		first.push(i->lastName);
		i = i->next->next;
	} while (i != firstElement && i != firstElement->next);
	
	return first;
}

List List::getSecondGroup() {
	List second;
	Node * i = firstElement->next;
	cout << "Second group ";

	do {
		second.push(i->lastName);
		i = i->next->next;
	} while (i != firstElement && i != firstElement->next);
	return second;
}


void List::print() {
	cout << "List of footballers: \n";
	Node * tmp = new Node;
	tmp = firstElement;

	do {
		cout << tmp->lastName << " ";
		tmp = tmp->next;
	} while (tmp != firstElement);
	cout << "\n";
}
List::List()
{
}


List::~List()
{
}
