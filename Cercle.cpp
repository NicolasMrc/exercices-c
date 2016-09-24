//
// Created by Nicolas Mercier on 24/09/2016.
//

#include "Cercle.h"

/**
 * constructeur de la classe Cercle
 * @param rayon
 *      le rayon du cercle
 * @param abscisse
 *      l'abscisse du cercle
 * @param ordonnee
 *      l'ordonnée du cercle
 * @return
 *      le cercle
 */
Cercle::Cercle(float rayon, float abscisse, float ordonnee) {
    Cercle::rayon = rayon;
    Cercle::abscisse = abscisse;
    Cercle::ordonnee = ordonnee;
}