#pragma once

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string name;
	string ID;
	float price;
public:
	Book();
	Book(string Name, string Id, float Price);
	~Book();
	void setName(string Name);
	void setID(string Id);
	void setPrice(float Price);
	string getName();
	string getID();
	float getPrice();
};

