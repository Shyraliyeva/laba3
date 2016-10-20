#pragma once
#include "mebel.h"

class Krovat : public Mebel
{
	char *Kol;
public:
	void setKol(char *kol);
	char* getKol();
	void print();
	Krovat(int cost, char* Material, char* Razmer, char* kol);
	Krovat(Krovat& krovat);
	~Krovat();
};