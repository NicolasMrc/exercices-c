//
// Created by Nicolas Mercier on 24/09/2016.
//

#ifndef EXERCICES_VECTEURBIDIMENSIONEL_H
#define EXERCICES_VECTEURBIDIMENSIONEL_H


/**
 * Classe de vecteur bidimensionnel
 */
class VecteurBidimensionel {
    private:
        signed x,y;
    public:
        VecteurBidimensionel(signed x, signed y);
        signed getX();
        signed getY();
        void afficher();
};


#endif //EXERCICES_VECTEURBIDIMENSIONEL_H
