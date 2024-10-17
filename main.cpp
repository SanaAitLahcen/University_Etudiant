#include<iostream>
#include"University.h"


int main()
{  
	// Cr�ation dynamique des �tudiants
	Etudiant* E1=new Etudiant("R149081667","Ait lahcen","Sana");
	Etudiant* E2 = new Etudiant("C123456788", "Doe", "Fatima");

	//affichage des informations des �tudiants
	E1->afficher();
	cout << endl;

	E2->afficher();
	cout << endl;


	// Cr�ation d'un tableau de pointeurs vers les �tudiants
	Etudiant* etudiants[2] = { E1,E2 }; //tableaux des �tudiants

	// Cr�ation d'une instance de l'universit� 'Fstm' avec le nom et le tableau des �tudiants
	University Fstm("fstm",etudiants,2);
	Fstm.afficher();

	delete E1;
	delete E2;


	return 0;
}