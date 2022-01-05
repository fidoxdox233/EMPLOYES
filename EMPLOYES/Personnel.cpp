#include "Personnel.h"
#include "Employe.h"

Personnel::Personnel(Employe* table2, int taille)
{
	this->taille = taille;
	this->table1 = new Employe[taille];
	for (int i = 0; i < taille; i++)
	{
		this->table1[i] = table2[i];
	}
}

/*Personnel::~Personnel()
{
	delete[] this->table1;
	this->table1 = nullptr;
}*/

float Personnel::somme(float augmentation)const
{
	float s = 0;
	for (int i = 0; i < this->taille; i++)
	{
		float s1 = this->table1[i].calculesalaire(augmentation);
		s = s + s1;
	}
	return s;

}


