#pragma once
#include "string"
using namespace std;

class List
{
	struct Node {
		string lastName;
		Node * next;
		Node * prev;
	};
	int count;
	Node * firstElement = nullptr;
	Node * lastElement = nullptr;
public:
	void print();
	void push(string);
	List getGroup(int);
	List();
	~List();
};

