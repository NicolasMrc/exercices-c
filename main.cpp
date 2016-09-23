#include <iostream>
#include "Point.h"

//TEACHING.GAALOUL@GMAIL.COM
//[C++-EFREI]SANSVOISIN_MERCIER

void exercice1(int taille);
void exercice2(int taille);
void exercice3();
int somme(int tab[], int taille);

/**
 * methode principale appelant les methode de chaques exercices
 * @return
 *      0 si tout c'est bien déroulé
 */
int main() {
    exercice1(10);
    exercice2(4);
    exercice3();
    return 0;
}

/**
 * la methode principale de l'exercice 1
 * permet de creer un tableau d'entier de 1 a 10
 * et affiche la somme de ces entier
 */
void exercice1(int taille){
    std::cout << "################\n" <<"#  Exercice 1  #\n" << "################\n\n";
    int tab[taille];
    for(int i = 0; i < taille; i++){
        tab[i] = i+1;
    }
    std::cout << "somme : " << somme(tab, taille) << "\n\n\n";
}

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
 * méthode principale de l'exercice 2
 * creer dynamiquement un tableau de Point
 * et les detruit
 */
void exercice2(int taille){
    std::cout << "################\n" <<"#  Exercice 2  #\n" << "################\n\n";

    Point *tab = new Point[taille];

    delete []tab;
}

/**
 * méthode principale de l'exercice 3
 */
void exercice3(){

}

