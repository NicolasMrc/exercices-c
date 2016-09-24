//
// Created by Nicolas Mercier on 24/09/2016.
//

#include <iostream>
#include "VecteurTridimensionel.h"

VecteurTridimensionel::VecteurTridimensionel(signed x, signed y, signed z) {
    VecteurTridimensionel::x = x;
    VecteurTridimensionel::y = y;
    VecteurTridimensionel::z = z;
}

signed VecteurTridimensionel::getX() {
    return VecteurTridimensionel::x;
}

signed VecteurTridimensionel::getY() {
    return VecteurTridimensionel::y;
}

signed VecteurTridimensionel::getZ() {
    return VecteurTridimensionel::z;
}

void VecteurTridimensionel::afficher(){
    std::cout << "(" << VecteurTridimensionel::x << ", " << VecteurTridimensionel::y << ", " << VecteurTridimensionel::z << ")";
}