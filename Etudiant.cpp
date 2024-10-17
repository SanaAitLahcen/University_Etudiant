#include "Etudiant.h"
#include<iostream>

// Constructeur sans paramètres
Etudiant::Etudiant()
{}

// Constructeur avec paramètres
Etudiant::Etudiant(string C, string N, string P) : Cin(C), Nom_Etud(N), Prenom_Etud(P)
{}

// Constructeur de copie
Etudiant::Etudiant(const Etudiant& E)
{
    this->Cin = E.Cin;
    this->Nom_Etud = E.Nom_Etud;
    this->Prenom_Etud = E.Prenom_Etud;  // Copier les attributs de l'étudiant source
}

// Destructeur
Etudiant::~Etudiant()
{
    cout << "destruction d'étudiant" << endl;
}

// Méthode afficher pour afficher les informations d'un étudiant
void Etudiant::afficher()
{
    cout << "le cin de l'étudiant : " << this->Cin << endl;  // Afficher le CIN de l'étudiant
    cout << "le prénom et nom de l'étudiant : " << this->Nom_Etud << " " << this->Prenom_Etud << endl;  // Afficher le nom et prénom
}
