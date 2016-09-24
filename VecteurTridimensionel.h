//
// Created by Nicolas Mercier on 24/09/2016.
//

#ifndef EXERCICES_VECTEURTRIDIMENSIONEL_H
#define EXERCICES_VECTEURTRIDIMENSIONEL_H


/**
 * Classe de vecteur tridimensionnel
 */
class VecteurTridimensionel {
    private:
        signed x,y,z;
    public:
        VecteurTridimensionel(signed x, signed y, signed z);
        signed getX();
        signed getY();
        signed getZ();
        void afficher();
};


#endif //EXERCICES_VECTEURTRIDIMENSIONEL_H
