#pragma once
#include "Etudiant.h"
#include<string>
using namespace std;

class University
{
private:
	string Nom_Univer;
	Etudiant* E[50];
	int nbr_etud;

public:
	University();
	University(string, Etudiant* [], int);
	University(const University& ) ;
	~University();
	void afficher();
};

