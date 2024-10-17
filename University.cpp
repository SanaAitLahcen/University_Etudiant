#include "University.h"
#include<iostream>

// Constructeur sans paramètres
University::University() : Nom_Univer(" "), nbr_etud(0)
{
    for (int i = 0; i < 50; i++)
    {
        E[i] = nullptr;  // Initialiser les pointeurs à nullptr
    }
}

// Constructeur avec paramètres
University::University(string nom, Etudiant* e1[], int nbr) : Nom_Univer(nom), nbr_etud(nbr)
{
    for (int i = 0; i < nbr_etud && i < 50; i++)
    {
        this->E[i] = e1[i];  // Initialiser chaque étudiant dans le tableau
    }
}

// Constructeur de copie
University::University(const University& U)
{
    this->Nom_Univer = U.Nom_Univer;
    this->nbr_etud = U.nbr_etud;

    for (int j = 0; j < nbr_etud; j++)
    {
        this->E[j] = U.E[j];  // Copier les pointeurs d'étudiants
    }
}

// Destructeur
University::~University()
{
    cout << "dest university" << endl;
}

// Méthode afficher pour afficher les informations de l'université et des étudiants
void University::afficher()
{
    cout << "le nom de l'université :" << " " << this->Nom_Univer << endl;
    cout << "les infos sur les étudiants :" << endl;

    for (int i = 0; i < nbr_etud; i++)
    {
        cout << "Étudiant " << i + 1 << " :" << endl;
        E[i]->afficher();  // Appel de la méthode afficher() de chaque étudiant
    }
}
