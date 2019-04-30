#include <iostream>
#include "teste.h"
#include "UI.h"
//#include<vector>
#include "RepoFile.h"
//#include "saratele.h"
//include<fstream>
//using std::istream;
//#include <iomanip>
//
//using std::cout;
//using std::cin;
//using std::endl;
//ifstream f("in.txt");
//using std::ostream;
//#include "Repo.h"
using namespace std;
int main()
{
	
	
	int nr;
	//teste();
	UI u;
	
	cout << "Money in the automant :" << endl;
	for (std::vector<tuple<int,int>>::size_type i = 0; i != u.a.getBani().size(); i++)
		std::cout << get<0>(u.a.getBani().at(i)) << " lei . Quantity: " << get<1>(u.a.getBani().at(i)) << endl;
	cout << "-----------------------------" << endl;
	while (true)
	{
		nr = u.getCommand();
		u.Menu(nr);
		cout << "Money in the automant :" << endl;
		for (std::vector<tuple<int, int>>::size_type i = 0; i != u.a.getBani().size(); i++)
			std::cout << get<0>(u.a.getBani().at(i)) << " lei .	Quantity: " << get<1>(u.a.getBani().at(i)) << endl;
		cout << "-----------------------------" << endl;
	}




	

	/*
	dulciuri suc1;
	suc1.setCod(1);
	suc1.setNume("Suc");
	suc1.setPret(5.5);

	dulciuri suc2;
	suc2.setCod(2);
	suc2.setNume("Suc");
	suc2.setPret(3.4);

	saratele biscuiti;
	biscuiti.setCod(777);
	biscuiti.setNume("Biscuiti sarati");
	biscuiti.setPret(1.0);
	//cout << biscuiti.getCod();
	Repo<dulciuri> repoSuc;
	repoSuc.add(suc1);
	repoSuc.add(suc2);

	Repo<saratele> repoBiscuiti;
	repoBiscuiti.add(biscuiti);
	//cout << repoBiscuiti.getElem()->getCod();

	Automat a = Automat();
	a.addD(repoSuc);
	a.addS(repoBiscuiti);
	cout << endl;
	cout << a.getDelem()->getElem()->getCod() << endl;
	cout << a.getSelem()->getElem()->getCod();
	return 0;
	*/




}
