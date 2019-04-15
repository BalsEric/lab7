#include "saratele.h"
#include<iostream>

//template<class T> dulciuri<T>
saratele::saratele()
{
	//std::cout << "Object created";
	this->cod = new int(0);
	this->nume = " ";
	this->pret = new double(0.0);
}


saratele::~saratele()
{
	delete cod;
	delete pret;
	
	//std::cout << "Object destoyed" << std::endl;
}

saratele::saratele(const saratele& cl)
{
	this->cod = new int(*cl.cod);
	this->nume = cl.nume;
	this->pret = new double(*cl.pret);
}
