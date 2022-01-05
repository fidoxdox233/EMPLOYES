#include "Employe.h"
#include <iostream>
using namespace std;

Employe::Employe(string N, int id, int inds)
{
	this->Nom = N;
	this->id = id;
	this->indsalaire = inds;
}

void Employe::afficher() const
{
	cout << "le nom est : " << this->Nom << endl;
	cout << "le matricule est : " << this->id << endl;
	cout << "l'indice de salaire est : " << this->indsalaire << endl;
}

float Employe::calculesalaire(float augmentation)const
{
	return (this->indsalaire * augmentation);
}
