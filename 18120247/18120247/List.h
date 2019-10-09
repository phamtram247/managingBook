#pragma once
#include "Book.h"

class List
{
public:

	Book list[100];
	int quantity;

	List();
	~List();
	void insertList();
	void showList();
	int searchBook(string Name, int position[], int& count);

	void deleteBook(int Index);
	void updatePrice(int Index);
	int searchByIDtoIndex(string Id);
	void doMenu();
};
