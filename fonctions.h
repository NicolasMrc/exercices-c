//
// Created by Nicolas Mercier on 24/09/2016.
//

#ifndef EXERCICES_FONCTIONS_H
#define EXERCICES_FONCTIONS_H

#include "Etudiant.h"
#include "test.h"
#include "VecteurTridimensionel.h"
#include "VecteurBidimensionel.h"
#include "Cercle.h"


float calculerMoyenneClasse(Etudiant etudiants[], int nbEtudiants);

int somme(int tab[], int taille);

void f(test *t);

float expo(float x, unsigned p);

void expo2(float *x, unsigned p);

signed produit(signed x, signed y);

VecteurBidimensionel produit(VecteurBidimensionel v1, VecteurBidimensionel v2);

VecteurTridimensionel produit(VecteurTridimensionel v1, VecteurTridimensionel v2);

double perimetre(Cercle cercle);

double air(Cercle cercle);

#endif //EXERCICES_FONCTIONS_H
