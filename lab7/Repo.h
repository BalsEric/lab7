#pragma once
#include<string>
#include<vector>
#include "dulciuri.h"
using namespace std;
template<class RepoT>
class Repo
{

private:
	vector<RepoT> x;
public:
	Repo();
	~Repo();

	void add(RepoT el);
	vector<RepoT> getAll() { return this->x; }
	RepoT* getElem() { 
		RepoT* r = &this->x.back();
		return r; 
	}
	int getSize() { return x.size(); }

	RepoT* getElem2(int value) {
		RepoT* r = &this->x.at(value);
		return r;
	}
	//int checkCod(int cod);
};


template<class RepoT>Repo<RepoT>::Repo()
{

}


template<class RepoT>Repo<RepoT>::~Repo()
{
}

template<class RepoT>
void Repo<RepoT>::add(RepoT el)
{
	x.push_back(el);
}
/*
template<class RepoT>int Repo<RepoT>::checkCod(int cod)
{
	for (int i = 0; i < x.size(); i++)
	{
		if (x.at(i)->getCod() == cod)
			return i;
	}
	return -1;
}
*/