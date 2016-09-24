//
// Created by Nicolas Mercier on 23/09/2016.
//

#include "PointExo2.h"

/**
 * Le numéro du point
 */
int Point::numero = 0;

/**
 * Constructeur
 * @return
 *      le point
 */
Point::Point(){
    numero ++;
    std::cout << "create point : " << numero << "\n";
}

/**
 * Destructeur de point
 */
Point::~Point(){
    std::cout << "delete point : " << numero << "\n";
    numero --;
}
