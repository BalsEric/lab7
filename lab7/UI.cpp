#include "UI.h"
#include "dulciuri.h"
#include "saratele.h"
#include "Repo.h"
#include<iostream>
using namespace std;


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
	d1.setCod(1);
	d1.setNume("Cola");
	d1.setPret(5.5);

	dulciuri d2;
	d2.setCod(2);
	d2.setNume("Apa");
	d2.setPret(3.0);

	dulciuri d3;
	d3.setCod(3);
	d3.setNume("Apa Minerala");
	d3.setPret(3.5);

	dulciuri d4;
	d4.setCod(4);
	d4.setNume("Corn cu ciocolata");
	d4.setPret(4.5);

	dulciuri d5;
	d5.setCod(5);
	d5.setNume("Milka");
	d5.setPret(5.5);

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
	s1.setCod(6);
	s1.setNume("Covrigi");
	s1.setPret(2.5);

	saratele s2;
	s2.setCod(7);
	s2.setNume("Rulada sarata");
	s2.setPret(1.0);

	saratele s3;
	s3.setCod(8);
	s3.setNume("Biscuiti");
	s3.setPret(3.5);

	saratele s4;
	s4.setCod(9);
	s4.setNume("Chips");
	s4.setPret(4.5);


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
	int x,money;
	switch (value)
	{
	case 1:
		for (int i = 0; i < a.getDsize(); i++)
		{
			for (int j = 0; j<a.getDelem2(i)->getSize(); j++)
				cout << a.getDelem2(i)->getElem2(j)->getNume() << " costs " << a.getDelem2(i)->getElem2(j)->getPret() << "lei , cod:"<<a.getDelem2(i)->getElem2(j)->getCod()<<endl;
		}
		cout << "Provide money" << endl;
		cin >> money;
		cout << "Provide the code to buy" << endl;
		cin >> x;
		if (money >= a.getDelem2(i)->getElem2(j)->getPret())
		{
			
		}
		break;
	case 2:
		for (int i = 0; i < a.getSsize(); i++)
		{
			for (int j = 0;j< a.getSelem2(i)->getSize(); j++)
				cout << a.getSelem2(i)->getElem2(j)->getNume() << " costs " << a.getSelem2(i)->getElem2(j)->getPret() << "lei, cod:"<< a.getSelem2(i)->getElem2(j)->getCod() <<endl;
		}
		break;
	
	}
}
