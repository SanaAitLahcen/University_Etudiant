#pragma once
#include<string>
using namespace std;

class Etudiant
{
private:
	string Cin;
	string Nom_Etud;
	string Prenom_Etud;
	

public:
	Etudiant();
	Etudiant(string, string, string);
	Etudiant(const Etudiant& );
	~Etudiant();
	void afficher();

};

