#include "List.h"



List::List()
{
	//this->list = { NULL };
}


List::~List()
{
}

void List::insertList()
{
	for (int i = 0; i < this->quantity; i++)
	{
		cout << "Nhap sach thu " << i + 1 << ": " << endl;
		cout << "Nhap ten: ";
		string Name;
		cin.ignore();
		getline(cin, Name);
		this->list[i].setName(Name);
		cout << "Nhap ma sach: ";
		string Id;
		//cin.ignore();
		getline(cin, Id);
		this->list[i].setID(Id);
		cout << "Nhap gia tien: ";
		float Price;
		cin >> Price;
		this->list[i].setPrice(Price);
	}
}

void List::showList()
{
	for (int i = 0; i < this->quantity; i++)
	{
		if (this->list[i].getName() == "")
			continue;
		cout << "Ten sach: " << this->list[i].getName() << endl;
		cout << "Ma sach: " << this->list[i].getID() << endl;
		cout << "Gia sach: " << this->list[i].getPrice() << endl << endl;
	}
}

int List::searchBook(string Name, int position[], int &count)
{
	count = 0;
	for (int i = 0; i < this->quantity; i++)
	{
		if (this->list[i].getName() == Name)
		{
			cout << "sach can tim co: " << endl;
			cout << "Ma sach: " << this->list[i].getID() << endl;
			cout << "Gia sach: " << this->list[i].getPrice() << endl;
			position[count] = i;
			count++;
		}
	}
	if (count == 1)
		return 1;
	else
		return 0;
}

void List::deleteBook(int Index)
{
	list[Index].~Book();
}

void List::updatePrice(int Index)
{
	float newPrice;
	cout << "Hay nhap gia moi:";
	cin >> newPrice;
	list[Index].setPrice(newPrice);
	cout << "Gia moi la : " << newPrice << endl;
}

int List::searchByIDtoIndex(string Id)
{
	for (int i = 0; i < this->quantity; i++)
	{
		if (this->list[i].getID() == Id)
		{
			cout << "Ten sach: " << this->list[i].getName() << endl;
			cout << "Ma sach: " << this->list[i].getID() << endl;
			cout << "Gia sach: " << this->list[i].getPrice() << endl;
			return i;
		}
	}
	return -1;
}

void List::doMenu()
{
	string name;
	cout << "Nhap ten sach ban can tim: ";
	cin >> name;
	int pos[100];
	int count = 0;
	int check = searchBook(name, pos, count);
	if (check == 1)
	{

		int choice;
		do
		{
			system("cls");
			cout << "Tim thay 1 cuon sach. Ban muon lam gi?" << endl;
			cout << "0. Thoat khoi chuong trinh." << endl;
			cout << "1. Xoa sach." << endl;
			cout << "2. Cap nhat gia." << endl;
			cout << "Nhap chuc nang: ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				deleteBook(pos[0]);
				showList();
				system("pause");
				break;
			case 2:
				updatePrice(pos[0]);
				showList();
				system("pause");
				break;
			default:
				if (choice != 0)
					cout << "Nhap sai chuc nang xin moi nhap lai" << endl;
				system("pause");
				break;
			}
		} while (choice != 0);
	}
	else
	{
		system("cls");
		string idToRemove;
		cout << "Co nhieu sach trung ten, moi nhap ma sach: ";
		cin >> idToRemove;
		int index = searchByIDtoIndex(idToRemove);
		if (index == -1)
		{
			cout << "Khong tim duoc ma sach.";
			return;
		}
		cout << "Ban muon lam gi?" << endl;
		int choice;
		cout << "Nhap 1: Xoa" << endl;
		cout << "Nhap 2: Cap nhat gia" << endl;
		cout << "Nhap chuc nang: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			deleteBook(index);
			showList();
			system("pause");
			break;
		case 2:
			updatePrice(index);
			showList();
			system("pause");
			break;
		default:
			break;
		}
	}
}

