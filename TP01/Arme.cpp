/**
 * @file Arme.cpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Arme.hpp"
#include <iostream>

Arme::Arme()
{
    cout << "=> Arme par defaut" << endl;
    this->nomArme = "Arme de base";
    this->degat = 1;
}

Arme::Arme(string nomArme,int degat) 
{
    cout << "=> Arme par initialisation" << endl;
    this->nomArme = nomArme;
    this->degat = degat;
}

Arme::Arme(const Arme& a) 
{
    cout << "=> Arme par copie" << endl;
    this->nomArme = a.nomArme;
    this->degat = a.degat;
}

Arme::~Arme()
{
    cout << "=> Arme destruction" << endl;
    if(this!=NULL) delete this;
    
    return;
}

void Arme::Affichage()
{
    cout << "   => Affichage Arme" << endl;
    cout << "       -> Arme : " << this->nomArme << endl;
    cout << "       -> Degat : " << this->degat << endl;
}