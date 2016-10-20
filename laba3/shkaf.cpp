#include "stdafx.h"
#include <iostream>
#include "shkaf.h"

void Shkaf::setKolVel(char *kolVel)
{
	delete[] KolVel;
	int lenght = std::strlen(kolVel) + 1;
	KolVel = new char[lenght];
	strcpy_s(KolVel, lenght, kolVel);
}

char* Shkaf::getKolVel()
{
	return KolVel;
}

void Shkaf::setColor(char *color)
{
	delete[] Color;
	int lenght = std::strlen(color) + 1;
	Color = new char[lenght];
	strcpy_s(Color, lenght, color);
}

char* Shkaf::getColor()
{
	return Color;

}

void Shkaf::print() {
	std::cout << "Shkaf:" << std::endl;
	std::cout << "\tColor: " << getColor() << std::endl;
	Mebel::Print();
}

Shkaf::Shkaf(int cost, char* Material, char* Razmer, char* Color) : Mebel(cost, Material, Razmer)
{
	std::cout << " Конструктор шкафа\n" << std::endl;
	this->Color = new char[0];
	setColor(Color);
}

Shkaf::~Shkaf()
{
	std::cout << " Деструктор шкафа\n";
	delete[] Color;
}