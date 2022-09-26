/**
 * @file Cloth.hpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @author COGNE Romain (romain.cogne@etudiant.univ-reims.fr)
 * @brief 
 * @version 0.1
 * @date 2022-09-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CLOTH_HPP__
#define __CLOTH_HPP__

#include <string>

#include "Arme.hpp"
#include "RangArmure.hpp"

class Cloth
{
    private:
        RangArmure rang;
        Arme* arme;
    
    public:
    
    Cloth();
    Cloth(RangArmure*, Arme*);
    Cloth(const Cloth&);

    ~Cloth();

    void Affichage();
};
#endif