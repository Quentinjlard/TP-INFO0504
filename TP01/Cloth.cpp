/**
 * @file Cloth.cpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief
 * @version 0.1
 * @date 2022-09-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "RangArmure.hpp"
#include "Arme.hpp"
#include "Cloth.hpp"
#include <iostream>

Cloth::Cloth()
{
    cout << "=> Cloth par defaut" << endl;
    RangArmure *r = new RangArmure();
    *r =  RangArmure::OR;  
    //printf("Rand armure : %d \n", *r);
    this->rang = *r;
    //printf("Rand armure : %d \n", this->rang);
    Arme* a = new Arme();
    this->arme = a;
}

Cloth::Cloth(RangArmure *r,Arme* a)
{
    cout << "=> Cloth par initialisation" << endl;
    this->rang = *r;
    this->arme = a;
}

Cloth::Cloth(const Cloth& c)
{
    cout << "=> Cloth par copie" << endl;
    this->rang = c.rang;
    this->arme = c.arme;
}

Cloth::~Cloth()
{
    cout << "=> Cloth destrcteur" << endl;
    //delete this;
}

void Cloth::Affichage()
{
    cout << "=> Affichage Cloth" << endl;
    switch(this->rang)
    {
        case  RangArmure::ARGENT:
            printf("    - Rang Armure : Argent\n");
            break;

        case RangArmure::BRONZE:
            printf("    - Rang Armure : Bronze\n");
            break;

        case RangArmure::OR:
            printf("    - Rang Armure : OR\n");
            break;
    }
    //printf("RangArmure : %d\n", this->rang);
    // cout << "   RangArmure : " << this->rang << endl;
    cout << "   - Arme : " ;
    this->arme->Affichage();
    cout << " " << endl;

}