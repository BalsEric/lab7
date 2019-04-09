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
};


template<class RepoT>Repo<RepoT>::Repo()
{

}


template<class RepoT>Repo<RepoT>::~Repo()
{
}

template<class RepoT>void Repo<RepoT>::add(RepoT el)
{
	this->x.push_back(el);
}