#include "Book.h"



Book::Book()
{
	this->name = "";
	this->ID= "";
	this->price = 0;
}

Book::Book(string Name, string Id, float Price)
{
	this->setName(Name);
	this->setID(Id);
	this->setPrice(Price);
}

Book::~Book()
{
	this->name = "";
	this->setPrice(0);
	this->ID = "";
}

void Book::setName(string Name)
{
	this->name = Name;
}

void Book::setID(string Id)
{
	this->ID = Id;
}

void Book::setPrice(float Price)
{
	this->price = Price;
}

string Book::getName()
{
	return this->name;
}

string Book::getID()
{
	return this->ID;
}

float Book::getPrice()
{
	return this->price;
}


