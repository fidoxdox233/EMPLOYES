#pragma once
#include "Employe.h"
class Responsable : public Employe
{
public:
	Responsable(string N, int id, int inds, Employe* table, int taille);
	~Responsable();
	void afficherDirect()const;
private:
	Employe* table;
	int taille;
};