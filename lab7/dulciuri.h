#pragma once
#include<string>
//template<class T> 
class dulciuri
{
private:
	int* cod;
	std::string nume;
	double* pret;
public:
	dulciuri();
	~dulciuri();
	//dulciuri(dulciuri<T>&);
	dulciuri(const dulciuri&);
	//getteri
	int getCod() { return *this->cod; }
	std::string getNume() { return this->nume; }
	double getPret() { return *this->pret; }

	//setteri
	void setCod(int newValue) { (*this->cod) = newValue; }
	void setNume(std::string newValue) { this->nume = newValue; }
	void setPret(double newValue) { (*this->pret) = newValue; }
};

