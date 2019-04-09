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
	suc1.setCod(2);
	suc1.setNume("Suc");
	suc1.setPret(3.4);

	saratele biscuiti;
	suc1.setCod(1);
	suc1.setNume("Biscuiti sarati");
	suc1.setPret(1.0);

	Repo<dulciuri> repoSuc;
	repoSuc.add(suc1);
	repoSuc.add(suc2);

	Repo<saratele> repoBiscuiti;
	repoBiscuiti.add(biscuiti);


	Automat a = Automat();
	a.addD(repoSuc);
	a.addS(repoBiscuiti);

}
