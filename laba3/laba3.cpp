// laba3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include "locale"
#include "krovat.h"
#include "divan.h"
#include "kupe.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	Divan a(1252000, "кожа", "60х90х60", "Угловой");
	a.print();
	system("pause");

	Krovat b(1650000, "деревянная основа", "200x190x60", "2");
	b.print();
	system("pause");

	Shkaf c(350000, "металл", "200x90x180", "Белый");
	c.print();
	system("pause");

	Kupe d(35401000, "дерево", "200х180х60", "Коричневый", "6");
	d.printKupe();

	Kupe::Veshalka e("42");
	e.getKol();

	system("pause");

	return 0;
}

