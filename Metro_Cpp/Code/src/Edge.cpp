#include "Edge.h"

Edge::Edge(Node* node1, Node* node2, int distanceCourtChemin, int distanceMinChangement)
{
    this->node1 = node1;
    this->node2 = node2;
    this->distanceCourtChemin = distanceCourtChemin;
    this->distanceMinChangement = distanceMinChangement;
}

Edge::Edge()
{
    node1 = NULL;
    node2 = NULL;
    this->distanceCourtChemin = 0;
    this->distanceMinChangement = 0;
}

Edge::~Edge()
{
    delete this;
}

int Edge::getDistance(bool min_itineraire){
    if(min_itineraire){
        return(distanceMinChangement);
    }else{
        return(distanceCourtChemin);
    }
}

 bool Edge::connects(Node* node1, Node* node2)
    {
        return (
                   (node1 == this->node1 &&
                    node2 == this->node2)
                )
                    ;
    }
