#include "dulciuri.h"
#include<iostream>

//template<class T> dulciuri<T>
dulciuri::dulciuri()
{
	//std::cout << "Object created"<<std::endl;
	this->cod = new int(0);
	this->nume = " ";
	this->pret = new double(0.0);
}


dulciuri::~dulciuri()
{
	delete cod;
	delete pret;
	
	//std::cout << "Object destoyed" << std::endl;
}

dulciuri::dulciuri(const dulciuri& cl)
{
	this->cod = new int(*cl.cod);
	this->nume = cl.nume;
	this->pret = new double(* cl.pret);
}
