//
// Created by Nicolas Mercier on 24/09/2016.
//

#include <iostream>
#include "PointExo6.h"


/**
 * methode permettant d'initialiser la position d'un point
 * @param x
 *      la coordonnée x de la position du point
 * @param y
 *      la coordonnée y de la position du point
 */
void PointExo6::initialise(int x, int y){
    PointExo6::x = x;
    PointExo6::y = y;
}

/**
 * méthode permettant de deplacer les coordonnée d'un point
 * @param x
 *      le vecteur de deplacement x du point
 * @param y
 *      le vecteur de deplacement y du point
 */
void PointExo6::deplace(signed x, signed y){
    if ( x >= 0 || (x < 0 && -x < PointExo6::x )){
        PointExo6::x += x;
    } else {
        PointExo6::x = 0;
    }
    if ( y >= 0 || (y < 0 && -y < PointExo6::y )){
        PointExo6::y += y;
    } else {
        PointExo6::y = 0;
    }
}

/**
 * méthode permettant d'afficher les coordonée d'un point
 */
void PointExo6::affiche(){
    std::cout << "Coordonnée du point : \n";
    std::cout << "x : " << PointExo6::x << "\n";
    std::cout << "y : " << PointExo6::y << "\n";
}