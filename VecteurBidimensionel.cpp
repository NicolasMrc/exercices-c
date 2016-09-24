//
// Created by Nicolas Mercier on 24/09/2016.
//

#include <iostream>
#include "VecteurBidimensionel.h"

VecteurBidimensionel::VecteurBidimensionel(signed x, signed y) {
    VecteurBidimensionel::x = x;
    VecteurBidimensionel::y = y;
}

signed VecteurBidimensionel::getX() {
    return VecteurBidimensionel::x;
}

signed VecteurBidimensionel::getY() {
    return VecteurBidimensionel::y;
}

void VecteurBidimensionel::afficher() {
    std::cout << "(" << VecteurBidimensionel::x << ", " << VecteurBidimensionel::y << ")";
}