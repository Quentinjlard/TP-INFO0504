/**
 * @file saint.hpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief 
 * @version 0.1
 * @date 2022-09-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef SAINT_HPP
#define SAINT_HPP

#include <iostream>
#include <string>
using namespace std;

#include "Cloth.hpp"
#include "Sexe.hpp"
#include "Constellation.hpp"

class Saint
{
    private :
        string nom;
        SexeType sexe;
        Cloth *cloth;
        Constellation *constellation;
        bool pointsVitaux[5];
        int cosmos;
        string evolution;
        int defense;

    public :
        Saint();
        Saint(string, SexeType, Cloth*, Constellation*, bool[], int, string, int);
        Saint(const Saint&);

        ~Saint();

        void Attaque_Saint(Saint*);
        void supprimePointVitaux(Saint);
        void ajouteCosmos();
        void perdreCosmos();
        void equipeCloth(Cloth*);
        void set_PointsVitaux(int, bool);
        int get_Defense();
        void Affichage();

};

#endif