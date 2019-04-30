#include "UI.h"
#include "dulciuri.h"
#include "saratele.h"
#include "Repo.h"
#include<fstream>
#include<iostream>
using namespace std;
ifstream f("in.txt");

UI::UI()
{
	cout << "Welcome !" << endl;
	cout << "For Sweets . Press 1" << endl;
	cout << "For Salty . Press 2" << endl;
	setUp();
}


UI::~UI()
{
}
void UI::setUp()
{
	dulciuri d1;
	f >> d1;

	dulciuri d2;
	f >> d2;

	dulciuri d3;
	f >> d3;

	dulciuri d4;
	f >> d4;
	dulciuri d5;
	f >> d5;

	Repo<dulciuri> suc;
	suc.add(d1);
	suc.add(d2);
	suc.add(d3);

	Repo<dulciuri> cioco;
	cioco.add(d4);
	cioco.add(d5);

	a.addD(suc);
	a.addD(cioco);
	
	// SARATELE


	saratele s1;
	f >> s1;

	saratele s2;
	f >> s2;

	saratele s3;
	f >> s3;

	saratele s4;
	f >> s4;

	Repo<saratele> patiserie;
	patiserie.add(s1);
	patiserie.add(s2);

	Repo<saratele> deRontait;
	deRontait.add(s3);
	deRontait.add(s4);

	a.addS(patiserie);
	a.addS(deRontait);

}
int  UI::getCommand()
{
	
	int nr;
	cout << "Provide command ";
	cin >> nr;
	cout << endl;
	return nr;
}
void UI::Menu(int value)
{
	int x, money;
	switch (value)
	{
	case 1:
		for (int i = 0; i < a.getDsize(); i++)
		{
			for (int j = 0; j < a.getDelem2(i)->getSize(); j++)
				cout << a.getDelem2(i)->getElem2(j)->getNume() << " costs " << a.getDelem2(i)->getElem2(j)->getPret() << " lei , cod: " << a.getDelem2(i)->getElem2(j)->getCod() << endl;
		}
		cout << "Provide money" << endl;
		cin >> money;
		cout << "Provide the code to buy" << endl;
		cin >> x;
		for (int i = 0; i < a.getDsize(); i++)
		{
			for (int j = 0; j < a.getDelem2(i)->getSize(); j++)
			{
				if (a.getDelem2(i)->getElem2(j)->getCod() == x)
				{
					double rest = money - a.getDelem2(i)->getElem2(j)->getPret();
					a.giveExchane(rest);
					
						/*
						while (money >= 50)
						{
							a.addMoney(50, 1);
							money -= 50;
						}
						while (money >= 10)
						{
							a.addMoney(10, 1);
							money -= 10;
						}
						while (money >= 5)
						{
							a.addMoney(5, 1);
							money -= 5;
						}
						while (money >= 1)
						{
							a.addMoney(1, 1);
							money -= 1;
						}
						*/
						//delete a.getDelem2(i)->getElem2(j);

					

				}
			}
		}
		break;
	case 2:
		for (int i = 0; i < a.getSsize(); i++)
		{
			for (int j = 0; j < a.getSelem2(i)->getSize(); j++)
				cout << a.getSelem2(i)->getElem2(j)->getNume() << " costs " << a.getSelem2(i)->getElem2(j)->getPret() << "lei, cod:" << a.getSelem2(i)->getElem2(j)->getCod() << endl;
		}
		cout << "Provide money" << endl;
		cin >> money;
		cout << "Provide the code to buy" << endl;
		cin >> x;
		for (int i = 0; i < a.getSsize(); i++)
		{
			for (int j = 0; j < a.getSelem2(i)->getSize(); j++)
			{
				if (a.getSelem2(i)->getElem2(j)->getCod() == x)
				{
					double rest = money - a.getSelem2(i)->getElem2(j)->getPret();
					a.giveExchane(rest);
					
						/*
						while (money >= 50)
						{
							a.addMoney(money, 1);
							money -= 50;
						}
						while (money >= 10)
						{
							a.addMoney(money, 1);
							money -= 10;
						}
						while (money >= 5)
						{
							a.addMoney(money, 1);
							money -= 5;
						}
						while (money >= 1)
						{
							a.addMoney(money, 1);
							money -= 1;
						}
						*/
						//delete a.getSelem2(i)->getElem2(j);

					

				}
			}
			break;


		}
		
	}
}
