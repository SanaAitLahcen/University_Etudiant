#include "University.h"
#include<iostream>

// Constructeur sans param�tres
University::University() : Nom_Univer(" "), nbr_etud(0)
{
    for (int i = 0; i < 50; i++)
    {
        E[i] = nullptr;  // Initialiser les pointeurs � nullptr
    }
}

// Constructeur avec param�tres
University::University(string nom, Etudiant* e1[], int nbr) : Nom_Univer(nom), nbr_etud(nbr)
{
    for (int i = 0; i < nbr_etud && i < 50; i++)
    {
        this->E[i] = e1[i];  // Initialiser chaque �tudiant dans le tableau
    }
}

// Constructeur de copie
University::University(const University& U)
{
    this->Nom_Univer = U.Nom_Univer;
    this->nbr_etud = U.nbr_etud;

    for (int j = 0; j < nbr_etud; j++)
    {
        this->E[j] = U.E[j];  // Copier les pointeurs d'�tudiants
    }
}

// Destructeur
University::~University()
{
    cout << "dest university" << endl;
}

// M�thode afficher pour afficher les informations de l'universit� et des �tudiants
void University::afficher()
{
    cout << "le nom de l'universit� :" << " " << this->Nom_Univer << endl;
    cout << "les infos sur les �tudiants :" << endl;

    for (int i = 0; i < nbr_etud; i++)
    {
        cout << "�tudiant " << i + 1 << " :" << endl;
        E[i]->afficher();  // Appel de la m�thode afficher() de chaque �tudiant
    }
}
