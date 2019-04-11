#pragma once
#include "Repo.h"
#include "saratele.h"
#include<vector>
class Automat
{
private:
	vector<Repo<dulciuri>> xD;
	vector<Repo<saratele>> xS;
	//vector<double, int> bani[100];
public:
	Automat();
	~Automat();
	void addD(Repo<dulciuri> r) { xD.push_back(r); }
	void addS(Repo<saratele> r) { xS.push_back(r); }


	Repo<dulciuri> getDelem() { return xD.back(); }
	Repo<saratele> getSelem() { return xS.back(); }
};

