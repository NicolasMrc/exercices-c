//
// Created by Nicolas Mercier on 24/09/2016.
//

#include <iostream>
#include "VecteurBidimensionel.h"

/**
 * Constructeur de vecteur bidimensionnel
 * @param x
 *      la valeur a associer a x
 * @param y
 *      la valeur a associer a y
 * @return
 *      le vecteur
 */
VecteurBidimensionel::VecteurBidimensionel(signed x, signed y) {
    VecteurBidimensionel::x = x;
    VecteurBidimensionel::y = y;
}

/**
 * permet d'acceder a x
 * @return
 *      x
 */
signed VecteurBidimensionel::getX() {
    return VecteurBidimensionel::x;
}

/**
 * permet de lire la valeur y du vecteur
 * @return
 *      y
 */
signed VecteurBidimensionel::getY() {
    return VecteurBidimensionel::y;
}

/**
 * permet d'afficher le vecteur sous forme (x,y)
 */
void VecteurBidimensionel::afficher() {
    std::cout << "(" << VecteurBidimensionel::x << ", " << VecteurBidimensionel::y << ")";
}