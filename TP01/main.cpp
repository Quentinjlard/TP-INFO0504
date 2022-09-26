/**
 * @file test.cpp
 * @author JUILLIARD Quentin (quentin.juilliard@etudiant.univ-reims.fr)
 * @brief Zone de test
 * @version 0.1
 * @date 2022-09-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include "sexe.hpp"
#include "RangArmure.hpp"
#include "Saint.hpp"
#include "Arme.hpp"
#include "Cloth.hpp"
#include "Constellation.hpp"


using namespace std;


int main()
{
    cout << "\n ----- TEST PAR DEFAUT ----- \n " << endl;
    cout << "\n ----- Creation Arme -----" << endl;
    Arme *arme = new Arme();
    arme->Affichage();

    cout << "\n ----- Creation Cloth ----- " << endl;
    Cloth *cloth = new Cloth();
    cloth->Affichage();

    cout << "\n ----- Creation Constellation ----- " << endl;
    Constellation * constellation = new Constellation();
    constellation->Affichage();

    cout << "\n ----- Creation saint ----- " << endl;
    Saint *saint1 = new Saint();
    saint1->Affichage();

    cout << "\n ----- FIN TEST PAR DEFAUT ----- \n " << endl;

    cout << "\n ----- TEST PAR INITILISATION ----- \n " << endl;
    cout << "\n ----- Creation Arme -----" << endl;
    Arme* basique = new Arme("Basique",1);
    basique->Affichage();

    cout << "\n ----- Creation Sexe -----" << endl;
    SexeType sexe = SexeType::Homme;
    //sexe = SexeType::Homme;

    cout << "\n ----- Creation Rang Armure -----" << endl;
    RangArmure* r = new RangArmure();
    *r = RangArmure::OR;

    cout << "\n ----- Creation Cloth -----" << endl;
    Cloth* enOr = new Cloth(r,basique);
    enOr->Affichage();

    cout << "\n ----- Creation Constellation -----" << endl;
    Constellation* c = new Constellation("Normale",5,enOr);
    c->Affichage();

    cout << "\n ----- Creation Variable Tiers -----" << endl;
    bool pointVitaux[5];
    for(int i =0; i <= 5; i++)
        pointVitaux[i] = false;
    string nom = "Quentin";
    string evolution = "Super-Quentinou";
    int cosmos = 5;
    int defense = 3;

    cout << "\n ----- Creation Saint -----" << endl;
    Saint* Quentin = new Saint(nom, sexe, cloth, constellation, pointVitaux, cosmos, evolution,defense);
    Quentin->Affichage();

    cout << "\n ----- FIN TEST PAR INITILISATION ----- \n " << endl;

    cout << "\n ----- Attaque ----- \n " << endl;
    cout << "Saint SuperNichon - attaque Quentin :  " << endl;
    saint1->perdreCosmos();
    saint1->Affichage();
    saint1->Attaque_Saint(Quentin);
    Quentin->Affichage();
    saint1->ajouteCosmos();
    saint1->Affichage();
    saint1->equipeCloth(enOr);
    saint1->Affichage();

    cout << "\n ----- DESTRUCTION ----- \n " << endl;
    //arme->~Arme();
    //arme->Affichage();
    //cloth->~Cloth();
    // constellation->~Constellation();
    // saint1->~Saint();
    // basique->~Arme();
    // enOr->~Cloth();
    // c->~Constellation();
    // Quentin->~Saint();

    cout << "\n ----- FIN DESTRUCTION ----- \n " << endl;

    return 0;
}