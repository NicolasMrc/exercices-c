//
// Created by Nicolas Mercier on 24/09/2016.
//

#ifndef EXERCICES_POINTEXO6_H
#define EXERCICES_POINTEXO6_H

/**
 * classe point de l'exercice 6
 */
class PointExo6 {
    private:
        int x;
        int y;
    public:
        void initialise(int x, int y);
        void deplace(signed x, signed y);
        void affiche();

};


#endif //EXERCICES_POINTEXO6_H
