#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<istream>
#include "saratele.h"
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

#include "Repo.h"
using namespace std;
template<class RepoT>
class RepoFile :public Repo<RepoT>
{
private:
	Repo<RepoT> r;
public:
	void readData(string numeFile);
	RepoFile<RepoT>();
	~RepoFile<RepoT>();
    //istream& operator>> (istream& in,Repo<T>&);

	//ostream& operator<< (ostream& out, Repo<T>&);

};
template<class RepoT>
RepoFile<RepoT>::RepoFile()
{

}
template<class RepoT>
RepoFile<RepoT>::~RepoFile()
{

}
template<class RepoT>
void RepoFile<RepoT>::readData(string numeFile)
{
	cout << "IM HERE";
	//cin.clear();
	ifstream f(numeFile);
	string s,nume;
	int* cod;
	std::string::size_type sz;
	double* pret;
	
	while (f >> s)
	{
		if (isalpha(s[0]))
		{
			nume = s;
		}
		else
		{
			if (ispunct(s[1]) or ispunct(s[2]))
			{
				pret = new double(stod(s,&sz));
			}
			else
			{
				if (isdigit(s[0]))
				{
					cod = new int(stoi(s));
					RepoT obj(cod, nume, pret);
					r.add(obj);

				}
			}
		}
		//cout << s<<" ";
	}
	f.close();
	//ofstream g("out.txt");
	//f.open("in.txt");
	//g.open("out.txt");
	/*
	string nume;
	\
	f>> nume;
	cout << nume;
	while(f>>nume>>*pret>>*cod)
	{
		cout << "IM HERE TWOO";
		RepoT obj(cod,nume,pret);
		Repo<RepoT>::add(obj);
		cout << nume << " " << *cod << " " << *pret;
	}
	f.close();
	g.close();
	*/
}

/*
template<class T>
istream& operator>> (istream& in, Repo<T>& x)
{
	cout << "Im here";
	std::string s, nume;
	//unsigned i = 0;
	//int* cod=new int(0);
	//double* pret=new double(0.0);
	//in.ignore(1024, '\n');
//	in>>nume;
	//in >> *cod;
	//in >> *pret;
	//in.ignore(1024, '\n');
	//while (s[i] != ' ')
	//{
		//nume += s[i++];
	//}
	//i++;
	//pret = (s[i] + s[i + 1] + s[i + 2]) - '0';
	//i += 4;
	//cod = s[i] - '0';
	//cout << nume << " " << *cod << " " << *pret;
	//T obj(cod, nume, pret);
	//x.add(obj);
	return in;
}
/*
template<class T>
ifstream& operator>> (ifstream& in, RepoFile<T>& x)
{
	char  s[300];
	std::string nume;
	int i = 0;
	int* cod;
	double* pret;
	in.getline(s, 300);
	while (s[i] != ' ')
	{
		nume += s[i];
	}
	i++;
	pret = (s[i] + s[i + 1] + s[i + 2]) - '0';
	i += 4;
	cod = s[i] - '0';
	T obj(cod, nume, pret);
	//RepoFile.add(obj);
	add(obj);
	return in;
}

template<class T>
ostream& operator<< (ostream& out,Repo<T>& obj)
{
	out << "Hello";
	//for(int i=0;i<obj.getSize();i++)
		//out << obj.getElem2(i)->getNume() << " " << obj.getElem2(i)->getPret() << " " << obj.getElem2(i)->getCod() >> std::endl;
	return out;
}

*/