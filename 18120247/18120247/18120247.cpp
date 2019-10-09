#include "List.h"
#include "Book.h"
#include <iostream>

int main()
{
	List listBook;
	int n;
	cout << "Nhap so luong sach: ";
	cin >> n;
	listBook.quantity = n;
	listBook.insertList();
	listBook.showList();
	listBook.doMenu();
	return 0;
}

