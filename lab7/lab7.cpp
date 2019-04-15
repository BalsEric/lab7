#include <iostream>
#include "teste.h"
#include "dulciuri.h"
#include "Repo.h"
#include "Automat.h"
#include "saratele.h"
//#include "Repo.h"
using namespace std;
int main()
{
	teste();

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
	cout << *a.getDelem()->getElem()->getCod() << endl;
	cout << a.getSelem()->getElem()->getCod();
	return 0;
}
