#pragma once
#include "Employe.h"
class Commerciaux :public Employe
{
public:
	Commerciaux(string N, int id, int inds, int infoV = 0);
	//~Commerciaux ();
	void MettreAjour(int Mtrj);
	float calculersaliare1(int augmentation, float pourcentage);

private:
	int infoVentes;
};
