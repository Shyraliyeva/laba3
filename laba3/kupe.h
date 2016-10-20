#pragma once
#include "shkaf.h"

class Kupe : public Shkaf
{
	char *Polki;
public:
	class Veshalka
	{
	private:
		char *Kol;
	public:
		Veshalka(char* kol);
		void setKol(char* kol);
		char* getKol();
		~Veshalka();

	};

	Kupe(int cost, char* Material, char* Razmer, char* Color, char* polki);
	Kupe(Kupe& kupe);
	void setPolki(char *polki);
	char* getPolki();
	void printKupe();
	~Kupe();

};