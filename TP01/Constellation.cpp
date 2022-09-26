/**
 * @file Constellation.cpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Constellation.hpp"
#include <iostream>

Constellation::Constellation()
{
    cout << "=> Constallation par defaut" << endl;
    this->nom = "Constellation de base";
    Cloth* c = new Cloth(); 
    this->cloth = c;        
    this->nbEtoiles = 1;
}

Constellation::Constellation(string nom,int nbEtoiles,Cloth* cloth) 
{
    cout << "=> Constallation par initialisation" << endl;
    this->nom = nom;
    this->nbEtoiles = nbEtoiles;
    this->cloth = cloth;
}

Constellation::Constellation(const Constellation& c) 
{
    cout << "=> Constallation par copie" << endl;
    this->nom = c.nom;
    this->nbEtoiles = c.nbEtoiles;
    this->cloth = c.cloth;
}

Constellation::~Constellation()
{
    cout << "=> Constallation destrcteur" << endl;
    //delete this;
}

void Constellation::Affichage()
{
    cout << "=> Affichage Constallation" << endl;
    cout << "   -> Affichage de : " <<  this->nom <<endl;
    cout << "   -> nbEtoiles : " << this->nbEtoiles << endl;
    //printf("    - Cloth : %d \n", this->cloth->Affichage());
    //cout << " cloth : " << this->cloth->Affichage() << endl;
}