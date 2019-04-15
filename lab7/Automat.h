#pragma once
#include "Repo.h"
#include "saratele.h"
#include "dulciuri.h"
#include<vector>
#include<tuple>
class Automat
{
private:
	vector<Repo<dulciuri>> xD;
	vector<Repo<saratele>> xS;
	vector<tuple<int,int> > bani;
	//vector<double, int> bani[100];
public:
	Automat();
	~Automat();
	void addD(Repo<dulciuri> r) { xD.push_back(r); }
	void addS(Repo<saratele> r) { xS.push_back(r); }
	int getDsize() { return xD.size(); }
	int getSsize() { return xS.size(); }
	void addMoney(int money,int cantitate) {
		for (int i = 0; i < bani.size(); i++)
		{
			if (get<0>(bani.at(i)) == money)
			{
				auto ex = make_tuple(get<0>(bani.at(i)), get<1>(bani.at(i)) + cantitate);
				bani.at(i) = ex;
			}
		}
	}

	vector<tuple<int, int> > getBani() { return bani; }
	int giveExchane(int rest)
	{
		if (rest == 0)
			return 0;
		else

			if (rest == 5)
			{
				auto ex = make_tuple(get<0>(bani.at(1)), get<1>(bani.at(1)) - 1);
				bani.at(1) = ex;
				return 5;
			}
			else
				if (rest == 10)
				{
					auto ex = make_tuple(get<0>(bani.at(2)), get<1>(bani.at(2)) - 1);
					bani.at(2) = ex;
					return 10;
				}
				else
					if (rest == 50)
					{
						auto ex = make_tuple(get<0>(bani.at(3)), get<1>(bani.at(3)) - 1);
						bani.at(3) = ex;
						return 50;
					}
					else
						if (rest == 100)
						{
							auto ex = make_tuple(get<0>(bani.at(4)), get<1>(bani.at(4)) - 1);
							bani.at(4) = ex;
							return 100;
						}
						else
						{
							// ceva alg de dat rest
						}


	}
	Repo<dulciuri>* getDelem() { 
		Repo<dulciuri>* el = &this->xD.back();
		return el;
	}
	Repo<saratele>* getSelem() { 
		Repo<saratele>* el1 = &this->xS.back();
		return el1; 
	}

	Repo<saratele>* getSelem2(int value) {
		Repo<saratele>* el1 = &this->xS.at(value);
		return el1;
	}
	Repo<dulciuri>* getDelem2(int value) {
		Repo<dulciuri>* el = &this->xD.at(value);
		return el;
	}
};

