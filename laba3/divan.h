#pragma once
#include "mebel.h"

class Divan : public Mebel
{
	char *Type;
public:
	void setType(char *type);
	char* getType();
	void print();
	Divan(int cost, char* Material, char* Razmer, char* type);
	Divan(Divan& divan);
	~Divan();

};