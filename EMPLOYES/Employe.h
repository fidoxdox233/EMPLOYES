#pragma once
#include <iostream>
using namespace std;
class Employe
{
public:
	Employe(string N = "", int id = 0, int inds = 0);
	void afficher()const;
	float calculesalaire(float)const;
	//~Employe();

protected:
	string Nom;
	int id;
	int indsalaire;
};
