#include<iostream>
#include<assert.h>
#include "teste.h"
#include  "dulciuri.h"
#include "Repo.h"
#include "Automat.h"
using namespace std;
void teste()
{
	dulciuri suc1;
	suc1.setCod(100);
	suc1.setNume("Suc");
	suc1.setPret(5.5);
	assert((*suc1.getCod()) == 100);
	cout << *suc1.getCod();
	assert(suc1.getNume() == "Suc");
	cout << suc1.getNume();
	assert((*suc1.getPret()) - 5.5 <= 0.0001);
	cout << "Object working" << endl;
	
	Repo<dulciuri> repoSuc;
	repoSuc.add(suc1);
	assert((*repoSuc.getElem()->getCod()) == 100);
	cout << *repoSuc.getElem()->getCod();
	assert(repoSuc.getElem()->getNume() == "Suc");
	assert((*repoSuc.getElem()->getPret())-5.5<0.0001);

	cout << "Repo working" << endl;

}