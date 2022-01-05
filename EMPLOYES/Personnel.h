#pragma once
#include "Employe.h"
#include "Commerciaux.h"
class Personnel
{
public:
	Personnel(Employe* table2, int taille);
	//~Personnel();
	float somme(float)const;

private:
	Employe* table1;
	int taille;
};

