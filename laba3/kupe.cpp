#include "stdafx.h"
#include "kupe.h"
#include <iostream>
using namespace std;

Kupe::Kupe(int cost, char* Material, char* Razmer, char* Color, char* polki) : Shkaf(cost, Material, Razmer, Color)
{
	cout << "Конструктор шкафа-купе" << endl;
	this->Polki = new char[0];
	setPolki(polki);
}

void Kupe::setPolki(char *polki)
{
	delete[] Polki;
	int lenght = std::strlen(polki) + 1;
	Polki = new char[lenght];
	strcpy_s(Polki, lenght, polki);
}

char* Kupe::getPolki()
{
	return Polki;

}

void Kupe::printKupe() {
	std::cout << "Shkaf-Kupe:" << std::endl;
	std::cout << "\tPolki: " << getPolki() << std::endl;
	Shkaf::print();
}

Kupe::~Kupe()
{
	std::cout << " Деструктор шкафа-купе\n";
	delete[] Polki;
}

Kupe::Veshalka::Veshalka(char* kol)
{
	cout << "Конструктор вешалки " << endl;
	this->Kol = new char[0];
	setKol(kol);
}

Kupe::Kupe(Kupe& kupe) : Shkaf(kupe.getCost(), kupe.getMaterial(), kupe.getRazmer(), kupe.getColor()) {
	this->Polki = new char[0];
	setPolki(kupe.getPolki());
}

void Kupe::Veshalka::setKol(char *kol)
{
	delete[] Kol;
	int lenght = std::strlen(kol) + 1;
	Kol = new char[lenght];
	strcpy_s(Kol, lenght, kol);
}

char* Kupe::Veshalka::getKol()
{
	return  Kol;
}

Kupe::Veshalka::~Veshalka()
{
	cout << " Деструктор вешалки " << endl;
	delete[] Kol;
}