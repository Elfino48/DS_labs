// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "List.h"
#include "string"

using namespace std;

int main()
{
	string footballers[] = { "1A", "2B", "3C", "4D", "5E", "6F", "7G", "8H", "9I", "10J", "11K", "12L", "13M",
		"14N", "15O", "16P", "17Q", "18R", "19S", "20T" };
	
	List list;
	for (string lastname : footballers)
		list.push(lastname);
	list.print();
	
	List first, second;
	first = list.getFirstGroup();
	first.print();
	second = list.getSecondGroup();
	second.print();

    return 0;
}

