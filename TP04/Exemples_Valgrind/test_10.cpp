#include <iostream>
#include <cstdlib>
#include <memory>

using namespace std;

class Vecteur {
    private :
        unsigned int nbElements;
        double* adresse;

    public :
        Vecteur(int n) : nbElements(n), adresse(new double[n]) {}
        Vecteur(const Vecteur &);
        Vecteur(Vecteur*);
        Vecteur & operator = (const Vecteur &);
};

Vecteur::Vecteur(const Vecteur & v) {
    nbElements = v.nbElements;
    adresse = new double[nbElements];
    for(auto i=0;i<nbElements;i++) { adresse[i]=v.adresse[i];}
}

Vecteur::Vecteur(Vecteur * v) {
    nbElements = v->nbElements;
    adresse = new double[nbElements];
    for(auto i=0;i<nbElements;i++) { adresse[i]=v->adresse[i];}
}

Vecteur & Vecteur::operator =(const Vecteur & v) {
    if(this != &v) {
        nbElements = v.nbElements;
        adresse = new double[nbElements];
        for(auto i=0;i<nbElements;i++) { adresse[i]=v.adresse[i];}
    }
    return *this;
}

int main(int argc, char** argv) {

    Vecteur v1{50};
    Vecteur v2(100);
    v1=v1;
    v1=v2;
    Vecteur v3 = new Vecteur(v1);
    Vecteur v4{v3};
    
    return EXIT_SUCCESS;
}