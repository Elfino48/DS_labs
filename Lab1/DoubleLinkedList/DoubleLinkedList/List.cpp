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
		firstElement->prev = lastElement;
	}
	else {
		Node * oldlast = lastElement;
		lastElement = itm;
		oldlast->next = itm;
		lastElement->next = firstElement;
		lastElement->prev = oldlast;
	}
}

List List::getGroup(int n) {
	List group;
	Node * i;

	if ( n == 1 ) i = firstElement;
	else i = firstElement->next;
	
	cout << n << " group ";

	do {
		group.push(i->lastName);
		i = i->next->next;
	} while (i != firstElement && i != firstElement->next);

	return group;
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
