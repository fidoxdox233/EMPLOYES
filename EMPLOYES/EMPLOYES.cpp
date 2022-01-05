#include <iostream>
using namespace std;
#include "Employe.h"
#include "Responsables.h"
#include "Personnel.h"
#include "Commerciaux.h"


int main()
{
float aug;
Employe A("A", 1, 20);
Employe B("B", 2, 20);
Employe C("C", 3, 20);
Employe D("D", 4, 20);

Employe tab[4] = { A,B,C,D };
cout << "Donnez l'augmentation:" << endl;
cin >> aug;
	
		for (int i = 0; i < 4; i++) {
			
			cout << "L'employe " << i + 1 << " :" << endl;
			tab[i].afficher();
			float sal = tab[i].calculesalaire(aug);
			cout << "Salary:" << sal << endl;
			cout << endl;
		}

		Responsable R1("TOMBRAIDER", 10, 50, tab, 4);
		R1.afficherDirect();
		cout << endl;
		Commerciaux C1("PRISONBREAK", 20, 60, 40);
		C1.MettreAjour(12);
		float calc = C1.calculersaliare1(aug, 0.8);
		cout << "le commercial  :" << endl;
		C1.afficher();
		cout << "le salaire des commerciaux  :" << calc << endl;
		cout << endl;
		Personnel P2(tab, 4);
		float Sommesal = P2.somme(aug);
		cout << "la somme des salaires confondus des employes : " << Sommesal << endl;
}

