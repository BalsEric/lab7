#include "Automat.h"



Automat::Automat()
{
	auto t = std::make_tuple(1,24);
	auto t1 = std::make_tuple(5, 132);
	auto t2 = std::make_tuple(10, 23);
	auto t3 = std::make_tuple(50, 2);
	//auto t4 = std::make_tuple(100, 0);
	bani.push_back(t);
	bani.push_back(t1);
	bani.push_back(t2);
	bani.push_back(t3); 
	//bani.push_back(t4);
}


Automat::~Automat()
{
}
