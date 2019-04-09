#include "saratele.h"
#include<iostream>

//template<class T> dulciuri<T>
saratele::saratele()
{
	(*this->cod) = 0;
	this->nume = " ";
	(*this->pret) = 0.0;
}


saratele::~saratele()
{
	std::cout << "Object destoyed" << std::endl;
}

saratele::saratele(const saratele& cl)
{
	(*this->cod) = (*cl.cod);
	this->nume = cl.nume;
	(*this->pret) = (*cl.pret);
}
