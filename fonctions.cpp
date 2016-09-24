//
// Created by Nicolas Mercier on 24/09/2016.
//

#include <cmath>
#include "fonctions.h"
#include "Cercle.h"


/**
 * fonction calculant la somme des entiers d'un tableau
 * @param tab
 *      le tableau
 * @return
 *      la somme
 */
int somme(int tab[], int taille){
    int somme = 0;

    for (int i = 0; i < taille; i++){
        somme += tab[i];
    }

    return somme;
}

/**
 * calcule la moyenne des moyenne générales des etudiants
 * @param etudiants
 *      le tableau d'étudiants
 * @return
 *      la moyenne
 */
float calculerMoyenneClasse(Etudiant etudiants[], int nbEtudiants){
    float moyenne = 0.0;

    for (int i = 0; i < sizeof(etudiants); ++i) {
        moyenne += etudiants[i].moyGenerale;
    }

    return moyenne /= nbEtudiants;
}

/**
 * fonction reinitialisant a zero les attribut d'une instance de la structure test
 * @param t
 *      la structure test a reinitialiser
 */
void f(test *t){
    t->n = 0;
    t->x = 0.0;
}

/**
 * methode calculant x a la puissance p
 * @param x
 *      le nombre a mettre a la puissance p
 * @param p
 *      la puissance
 * @return
 *      le resultat
 */
float expo(float x, unsigned p){
    return (float)pow(x,p);
}

/**
 * methode calculant x a la puissance p
 * @param x
 *      pointeur sur x
 * @param p
 *      la puissance
 */
void expo2(float *x, unsigned p){
    *x = (float)pow(*x,p);
}

/**
 * methode calculant le produit de deux entier signés
 * @param x
 *      le premier entier
 * @param y
 *      le duexieme entier
 * @return
 *      le produit des deux entiers
 */
signed produit(signed x, signed y){
    return x*y;
}

/**
 * methode calculant le produit de deux vecteur bidimensionnel
 * @param v1
 *      le premier vecteur
 * @param v2
 *      le deuxieme vecteur
 * @return
 *      le produit des deux vecteurs
 */
VecteurBidimensionel produit(VecteurBidimensionel v1, VecteurBidimensionel v2){
    VecteurBidimensionel p(v1.getX()*v2.getX(), v1.getY()*v2.getY());
    return p;
}

/**
 * methode calculant le produit de deux vecteur tridimensionnel
 * @param v1
 *      le premier vecteur
 * @param v2
 *      le deuxieme vecteur
 * @return
 *      le produit des vecteurs
 */
VecteurTridimensionel produit(VecteurTridimensionel v1, VecteurTridimensionel v2){
    VecteurTridimensionel p(v1.getX()*v2.getX(),v1.getY()*v2.getY(),v1.getZ()*v2.getZ());
    return p;
}

/**
 * methode permettant de calculer le permietre d'un cerlce
 * @param cercle
 *      le cercle
 * @return
 *      le perimetre
 */
double air(Cercle cercle){
    return (2 * cercle.PI * cercle.rayon);
}

/**
 * methode permettant de calculer la surface d'un cerlce
 * @param cercle
 *      le cercle
 * @return
 *      la surface
 */
double perimetre(Cercle cercle){
    return (cercle.PI * pow(cercle.rayon,2));
}