#include "Responsables.h"

Responsable::Responsable(string N, int id, int inds, Employe* T, int taille) :Employe(N, id, inds)
{
	this->table = new Employe[taille];
	for (int i = 0; i < taille; i++)
	{
		this->table[i] = T[i];
	}
	this->taille = taille;
}

Responsable::~Responsable()
{
	delete[]this->table;
	this->table = 0;
}

void Responsable::afficherDirect() const
{
	cout << "le nom responsable est :" << this->Nom << endl;
	cout << "le matricule de le responsable :" << this->id << endl;
	cout << "l'indice de salaire de le responsable :" << this->indsalaire << endl;
	cout << "les subordonnes direct on a " << endl;
	cout << endl;
	for (int i = 0; i < this->taille; i++)
	{
		cout << "Le subordonne " << i + 1 << " :" << endl;
		this->table[i].afficher();
		cout << endl;
	}
}

