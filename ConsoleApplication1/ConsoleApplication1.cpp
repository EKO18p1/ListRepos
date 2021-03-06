#include "stdafx.h"
#include <iostream>
#include <list>
#include <iterator>
#include <ctime>

using std::cout;
using std::endl;
using std::list;

void main()
{
	srand(time(0));
	list<int> myList;

	for (size_t i = 0; i < 15; i++)
	{
		myList.push_back(rand() % 67);
	}

	for (auto i = myList.begin(); i != myList.end(); ++i)
	{
		cout << *i << endl;
	}


	system("pause");
	system("cls");
	//myList.sort();
	//myList.reverse();
	myList.unique();

	for (auto i = myList.begin(); i != myList.end(); ++i)
	{
		cout << *i << endl;
	}

	cout << myList.back() << endl;
	cout << myList.front() << endl;

	system("pause");
}
