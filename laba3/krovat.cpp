#include "stdafx.h"
#include "krovat.h"
#include <iostream>

void Krovat::setKol(char *kol)
{
	delete[] Kol;
	int lenght = std::strlen(kol) + 1;
	Kol = new char[lenght];
	strcpy_s(Kol, lenght, kol);
}

char* Krovat::getKol()
{
	return Kol;

}

void Krovat::print() {
	std::cout << "Krovat:" << std::endl;
	std::cout << "\tKolichestvo: " << getKol() << std::endl;
	Mebel::Print();
}

Krovat::Krovat(int cost, char* Material, char* Razmer, char* kol) : Mebel(cost, Material, Razmer)
{
	std::cout << " Конструктор кровати\n" << std::endl;
	this->Kol = new char[0];
	setKol(kol);
}

Krovat::Krovat(Krovat& krovat) : Mebel(krovat.getCost(), krovat.getMaterial(), krovat.getRazmer()) {
	this->Kol = new char[0];
	setKol(krovat.getKol());
}

Krovat::~Krovat()
{
	std::cout << " Деструктор кровати\n";
	delete[] Kol;
}