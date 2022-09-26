/**
 * @file Armes.hpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __ARMES_H__
#define __ARMES_H__
#include <string>
using namespace std;
class Arme
{
    private:
        string nomArme;
        int degat;
    public:
        Arme();
        Arme(string,int);
        Arme(const Arme&);
        ~Arme();

        void Affichage();
};

#endif