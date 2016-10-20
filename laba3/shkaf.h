#pragma once
#include "mebel.h"

class Shkaf : public Mebel
{
	char *Color;
protected:
	char *KolVel;
public:
	void setColor(char *color);
	char* getColor();
	void setKolVel(char *kolVel);
	char* getKolVel();
	void print();
	Shkaf(int cost, char* Material, char* Razmer, char* Color);
	~Shkaf();
};