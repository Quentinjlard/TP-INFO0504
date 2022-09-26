/**
 * @file Constellation.hpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief 
 * @version 0.1
 * @date 2022-09-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __CONSTELLATION_HPP__
#define __CONSTELLATION_HPP__
#include <string>
#include "Cloth.hpp"

using namespace std;

class Constellation
{
    private:
        string nom;
        int nbEtoiles;
        Cloth *cloth; //ICI

    public:
        Constellation();
        Constellation(string, int,Cloth*); //ICI
        Constellation(const Constellation&);
        ~Constellation();
        int getNbEtoile();
        void Affichage();
};

#endif
