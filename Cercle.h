//
// Created by Nicolas Mercier on 24/09/2016.
//

#ifndef EXERCICES_CERCLE_H
#define EXERCICES_CERCLE_H

#include <math.h>

/**
 * classe cercle
 */
class Cercle {

    friend double air(Cercle cercle);
    friend double perimetre(Cercle cercle);

    private:
        double PI = M_PI;
        float rayon, abscisse, ordonnee;
    public:
        Cercle(float rayon, float abscisse, float ordonnee);
};


#endif //EXERCICES_CERCLE_H
