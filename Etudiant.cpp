#include "Etudiant.h"
#include<iostream>

// Constructeur sans param�tres
Etudiant::Etudiant()
{}

// Constructeur avec param�tres
Etudiant::Etudiant(string C, string N, string P) : Cin(C), Nom_Etud(N), Prenom_Etud(P)
{}

// Constructeur de copie
Etudiant::Etudiant(const Etudiant& E)
{
    this->Cin = E.Cin;
    this->Nom_Etud = E.Nom_Etud;
    this->Prenom_Etud = E.Prenom_Etud;  // Copier les attributs de l'�tudiant source
}

// Destructeur
Etudiant::~Etudiant()
{
    cout << "destruction d'�tudiant" << endl;
}

// M�thode afficher pour afficher les informations d'un �tudiant
void Etudiant::afficher()
{
    cout << "le cin de l'�tudiant : " << this->Cin << endl;  // Afficher le CIN de l'�tudiant
    cout << "le pr�nom et nom de l'�tudiant : " << this->Nom_Etud << " " << this->Prenom_Etud << endl;  // Afficher le nom et pr�nom
}
