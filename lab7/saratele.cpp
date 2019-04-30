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


istream& operator>> (istream& in, saratele& s)
{
	//cout << "Im hewre";
	int x, y;
	std::string s1;
	in >> s.nume;

	//s.setCod(x);
   // getline(in,s.nume)
	//s.setNume(s1);
	in >> *s.pret;
	in >> *s.cod;
	//s.setPret(y);
	return in;
}

ostream& operator<< (ostream& out, saratele& s)
{
	out << s.getNume() << " costa " << s.getPret() << " cu codul " << s.getCod() << endl;
	return out;
}