#pragma once
#include<iostream>
using namespace std;
//#include<string>
//#include<fstream>
//#include<istream>
//#include <iomanip>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::ostream;
//using std::istream;


class saratele
{
private:
	int* cod;
	std::string nume;
	double* pret;
public:
	saratele();
	saratele(int* cod, std::string nume, double* pret) : cod(cod), nume(nume), pret(pret) {}
	~saratele();
	//dulciuri(dulciuri<T>&);
	saratele(const saratele&);
	//getteri
	int getCod() { return *this->cod; }
	std::string getNume() { return this->nume; }
	double getPret() { return *this->pret; }

	//setteri
	void setCod(int newValue) { (*this->cod) = newValue; }
	void setNume(std::string newValue) { this->nume = newValue; }
	void setPret(double newValue) { (*this->pret) = newValue; }
friend istream& operator>> (istream& in, saratele&);
friend ostream& operator<< (ostream& out, saratele&);

};



