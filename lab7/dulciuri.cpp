#include "dulciuri.h"
#include<iostream>

//template<class T> dulciuri<T>
dulciuri::dulciuri()
{
	int x = 0;
	double y = 0.0;
	this->cod = &x;
	this->nume = " ";
	this->pret = &y;
}


dulciuri::~dulciuri()
{
	std::cout << "Object destoyed" << std::endl;
}

dulciuri::dulciuri(const dulciuri& cl)
{
	(*this->cod) = (*cl.cod);
	this->nume = cl.nume;
	(*this->pret) = (*cl.pret);
}
