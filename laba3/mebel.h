#pragma once
class Mebel
{
	int Cost;
	char *Material;
	char *Razmer;
public:
	void setCost(int n);
	int getCost();
	void setMaterial(char *material);
	char* getMaterial();
	void setRazmer(char *razmer);
	char* getRazmer();
	void Print();
	Mebel(int Cost, char* Material, char* Rasmer);
	Mebel(Mebel& mebel);
	~Mebel();

};