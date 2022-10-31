#include <iostream>
#include <vector>
#include <cstdio>
#include "Metro.h"
#include "IHM.h"
#include "Graphe.h"

using namespace std;


int main()
{
    // ATTENTION PENSER A CHANGER !
    // Mettre le lien vers le dossier qui contient le dossier Data projet
    string project_directory = "../"; // Kim
    //string project_directory = "W:/Bureau/ProjetCpp/ProjetC"; //Alain
    bool activerCouleur = true; //Pour activer la coloration syntaxique
    // ATTENTION : si on n'utilise pas Windows, supprimer la ligne 6 du fichier
    //   IHM.h contenant "#include <windows.h>"

    IHM menu(activerCouleur); // on crée un objet menu
    Metro metro; // on crée un objet metro
    metro.importerDonnees(project_directory); // on importe les données
    Graphe graphe(project_directory); // on crée un objet graphe
    vector<string> identifiants_depart_arrivee = menu.choixDepartArrivee(metro);
    // On affiche le menu de choix de la station de depart et d'arrivee et on récupère les 2 identifiants de stations
    bool minChangement = menu.choixTypeItineraire(); // on affiche le menu de type d'itineraire (chemin le plus rapide
                                                    // ou minimum de changements) et on récupère la réponse
    Itineraire itineraire_sortie(graphe.dijkstras(identifiants_depart_arrivee[0],
                                                  identifiants_depart_arrivee[1],
                                                  minChangement),
                                 metro); // On calcule l'itineraire le plus court en fonction de ce choix grâce à l'algo
    menu.afficherItineraire(itineraire_sortie); // On affiche l'itineraire

    while(menu.quitter()){ // tant qu'on ne quitte pas l'application
        // et c'est reparti ! cf. ci-dessous pour la suite
        identifiants_depart_arrivee = menu.choixDepartArrivee(metro);
        minChangement = menu.choixTypeItineraire();
        Itineraire itineraire_sortie(graphe.dijkstras(identifiants_depart_arrivee[0],
                                                      identifiants_depart_arrivee[1],
                                                      minChangement),
                                     metro);

        menu.afficherItineraire(itineraire_sortie);
    }

    printf("\n  => METRO liberer \n");
    metro.destructMetro();
    printf("\n  => GRAPHE liberer \n");
    graphe.destructGraphe();
    printf("\n  => Fini \n");
    return 0;
}
