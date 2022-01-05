#include "Commerciaux.h"

Commerciaux::Commerciaux(string N, int id, int inds, int infoV) :Employe(N, id, inds)
{
	this->infoVentes = infoV;
}

void Commerciaux::MettreAjour(int Mtrj)
{
	this->infoVentes = Mtrj;
}

float Commerciaux::calculersaliare1(int augmentation, float pourcentage)
{
	float p = pourcentage / 100;
	return (this->indsalaire * augmentation) + (this->infoVentes * p);
}
