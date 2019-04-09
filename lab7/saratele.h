#pragma once
#include<string>
using namespace std;
class saratele
{
private:
	int* cod;
	std::string nume;
	double* pret;
public:
	saratele();
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
};