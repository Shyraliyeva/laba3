#include "stdafx.h"
#include "divan.h"
#include <iostream>

void Divan::setType(char *type)
{
	delete[] Type;
	int lenght = std::strlen(type) + 1;
	Type = new char[lenght];
	strcpy_s(Type, lenght, type);
}

char* Divan::getType()
{
	return Type;

}

void Divan::print() {
	std::cout << "Divan:" << std::endl;
	std::cout << "\tType: " << getType() << std::endl;
	Mebel::Print();
}

Divan::Divan(int cost, char* Material, char* Razmer, char* type) : Mebel(cost, Material, Razmer)
{
	std::cout << " Конструктор дивана\n" << std::endl;
	this->Type = new char[0];
	setType(type);
}

Divan::Divan(Divan& divan) : Mebel(divan.getCost(), divan.getMaterial(), divan.getRazmer()) {
	this->Type = new char[0];
	setType(divan.getType());
}

Divan::~Divan()
{
	std::cout << " Деструктор дивана\n";
	delete[] Type;
}