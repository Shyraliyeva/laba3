// laba3.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	Divan a(1252000, "����", "60�90�60", "�������");
	a.print();
	system("pause");

	Krovat b(1650000, "���������� ������", "200x190x60", "2");
	b.print();
	system("pause");

	Shkaf c(350000, "������", "200x90x180", "�����");
	c.print();
	system("pause");

	Kupe d(35401000, "������", "200�180�60", "����������", "6");
	d.printKupe();

	Kupe::Veshalka e("42");
	e.getKol();

	system("pause");

	return 0;
}

