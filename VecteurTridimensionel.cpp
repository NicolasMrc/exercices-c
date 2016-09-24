//
// Created by Nicolas Mercier on 24/09/2016.
//

#include <iostream>
#include "VecteurTridimensionel.h"

/**
 * constructeur de vecteur tridimensionnel
 * @param x
 *      la valeur de x
 * @param y
 *      la valeur de y
 * @param z
 *      la valeur de z
 * @return
 *      le vecteur
 */
VecteurTridimensionel::VecteurTridimensionel(signed x, signed y, signed z) {
    VecteurTridimensionel::x = x;
    VecteurTridimensionel::y = y;
    VecteurTridimensionel::z = z;
}

/**
 * getter permettant d'acceder a la variable x du vecteur
 * @return
 *      x
 */
signed VecteurTridimensionel::getX() {
    return VecteurTridimensionel::x;
}

/**
 * getter permettant d'acceder a la variable y du vecteur
 * @return
 *      y
 */
signed VecteurTridimensionel::getY() {
    return VecteurTridimensionel::y;
}

/**
 * getter permettant d'acceder a la variable z du vecteur
 * @return
 *      z
 */
signed VecteurTridimensionel::getZ() {
    return VecteurTridimensionel::z;
}

/**
 * permet d'afficher le vecteur sous la forme "(x,y,z)"
 */
void VecteurTridimensionel::afficher(){
    std::cout << "(" << VecteurTridimensionel::x << ", " << VecteurTridimensionel::y << ", " << VecteurTridimensionel::z << ")";
}