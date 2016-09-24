//
// Created by Nicolas Mercier on 24/09/2016.
//

#include "fonctions.h"


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