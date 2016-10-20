#include "stdafx.h"
#include "mebel.h"
#include <iostream>
//#define _CRT_NONSTDC_NO_WARNINGS

void Mebel::setCost(int n)
{
	this->Cost = n;
}

void Mebel::setMaterial(char *material)
{
	delete[] Material;
	int lenght = std::strlen(material) + 1;
	Material = new char[lenght];
	strcpy_s(Material, lenght, material);
}

void Mebel::setRazmer(char *razmer)
{
	delete[] Razmer;
	int lenght = std::strlen(razmer) + 1;
	Razmer = new char[lenght];
	strcpy_s(Razmer, lenght, razmer);
}

int Mebel::getCost()
{
	return Cost;

}
char* Mebel::getMaterial()
{
	return Material;

}

char* Mebel::getRazmer()
{
	return Razmer;

}

void Mebel::Print() {
	std::cout << "Mebel: " << std::endl;
	std::cout << "\tCost: " << Cost << std::endl;
	std::cout << "\tMaterial: " << getMaterial() << std::endl;
	std::cout << "\tRazmer: " << getRazmer() << std::endl;
}

Mebel::Mebel(int cost, char* material, char* rasmer)
{
	std::cout << " Конструктор мебели\n" << std::endl;
	this->Cost = cost;
	this->Material = new char[0];
	this->Razmer = new char[0];
	setCost(cost);
	setMaterial(material);
	setRazmer(rasmer);
}

Mebel::Mebel(Mebel& mebel) {
	this->Cost = Cost;
	this->Material = new char[0];
	this->Razmer = new char[0];
	setCost(mebel.getCost());
	setMaterial(mebel.getMaterial());
	setRazmer(mebel.getRazmer());
}

Mebel::~Mebel()
{
	std::cout << " Деструктор мебели\n";
	delete[] Material;
	delete[] Razmer;
	//delete Cost;
}