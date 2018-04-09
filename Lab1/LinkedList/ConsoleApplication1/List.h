#pragma once
#include "string"
using namespace std;

class List
{
	struct Node{
		string lastName;
		Node * next;
	};
	int count;
	Node * firstElement = nullptr;
	Node * lastElement = nullptr;
public: 
	void print();
	void push(string);
	List getSecondGroup();
	List getFirstGroup();
	List();
	~List();
};

