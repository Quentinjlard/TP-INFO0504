/**
 * @file Saint.cpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Saint.hpp"
#include "Sexe.hpp"
#include <time.h>
#include <iostream>

Saint::Saint()
{
    cout << "=> Saint par defaut" << endl;
    this->nom = "SuperNichon";
    this->cloth = new Cloth(); // NE RETOURNE RIEN
    this->cloth->Affichage();
    SexeType* sexe = new SexeType();
    *sexe = SexeType::Homme;
    //printf("sexe : %d \n", *sexe);
    this->sexe = *sexe;
    //printf("sexe : %d \n", this->sexe);
    this->constellation = new Constellation();
    for (int i =0; i < 5; i++)
        this->pointsVitaux[i] = false;
    this->cosmos = 5;
    this->evolution = "";
    this->defense = 5;
}
Saint::Saint(string nom, SexeType sexe, Cloth* cloth, Constellation* constellation, bool pointVitaux[], int cosmos, string evolution, int defense)
{
    cout << "=> Saint par initialisation" << endl;
    this->nom = nom;
    this->sexe = sexe;
    this->cloth = cloth;
    this->constellation = constellation;
    for (int i=0; i< 5; i++)
        {
            this->pointsVitaux[i] = pointsVitaux[i];
        }
    this->cosmos = cosmos;
    this->evolution = evolution;
    this->defense = defense;
}
Saint::Saint(const Saint& copie)
{
    cout << "=> Saint par copie" << endl;
    this->nom = copie.nom;
    this->sexe = copie.sexe;
    this->cloth = copie.cloth;
    this->constellation = copie.constellation;
    for (int i=0; i< 5; i++)
        {
            this->pointsVitaux[i] = copie.pointsVitaux[i];
        }
    this->cosmos = copie.cosmos;
    this->evolution = copie.evolution;
    this->defense = copie.defense;
}
Saint::~Saint()
{
    cout << "=> Saint destrcteur" << endl;
    //delete this;
}

void Saint::set_PointsVitaux(int indice, bool valeur) 
{ 
    cout << "=> Set point vitaux" << endl;
    this->pointsVitaux[indice] = valeur;    
}

int Saint::get_Defense()
{
    cout << "=> Saint Défense" << endl;
    return this->defense;
}

void Saint::Attaque_Saint(Saint* toucher)
{
    cout << "=> Saint attaque" << endl;
    srand (time(NULL));
    int estToucher = rand() % toucher->get_Defense(); + 1;
    cout << "   -> " << estToucher << endl;

    if(estToucher % 2 == 0)
    {
        srand (time(NULL));
        int zone = rand() % 4 + 1;
        cout << " -> " << zone << endl;
        toucher->set_PointsVitaux(zone, true);
    }
}

void Saint::ajouteCosmos()
{
    cout << "=> Saint Gain de Cosmos" << endl;
    this->cosmos ++;
}

void Saint::perdreCosmos()
{
    cout << "=> Saint Perte de Cosmos" << endl;
    this->cosmos --;
}

void Saint::equipeCloth(Cloth* equipement)
{
    cout << "=> Saint équipement" << endl;
    this->cloth = equipement;
}

void Saint::Affichage()
{
    cout << "=> Saint Affichage" << endl;
    //----------------------------------------------------
    cout << "   - Affichage de " << this->nom << endl;
    //----------------------------------------------------
    switch (this->sexe)
    {
        case SexeType::Homme:
            printf("    - SEXE : HOMME! \n");
            break;

        case SexeType::Femme:
            printf("    - SEXE :Femme! \n");
            break;
    }
    //----------------------------------------------------
    cout << "   - Cloth : " << endl;
    this->cloth->Affichage();
    //----------------------------------------------------
    cout << "   - Constellation : ";
    this->constellation->Affichage();
    //----------------------------------------------------
    cout << "   - Point Vitaux : " ;
    for (int i = 0; i < 5; i++)
    {
        if(this->pointsVitaux[i] == 0)
            cout << "intacte";
        else
            cout << "Toucher";

        cout << " ";
    }
    cout << " " << endl;
    //----------------------------------------------------
    cout << "   - Cosmos : " << this->cosmos << endl;
    //----------------------------------------------------
    cout << "   - Evolution : " << this->evolution << endl;
    //----------------------------------------------------
    cout << "   - Defense : " << this->defense << endl;

}