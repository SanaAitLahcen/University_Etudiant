#include<iostream>
#include"University.h"


int main()
{  
	// Création dynamique des étudiants
	Etudiant* E1=new Etudiant("R149081667","Ait lahcen","Sana");
	Etudiant* E2 = new Etudiant("C123456788", "Doe", "Fatima");

	//affichage des informations des étudiants
	E1->afficher();
	cout << endl;

	E2->afficher();
	cout << endl;


	// Création d'un tableau de pointeurs vers les étudiants
	Etudiant* etudiants[2] = { E1,E2 }; //tableaux des étudiants

	// Création d'une instance de l'université 'Fstm' avec le nom et le tableau des étudiants
	University Fstm("fstm",etudiants,2);
	Fstm.afficher();

	delete E1;
	delete E2;


	return 0;
}