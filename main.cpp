#include <iostream>
#include "Point.h"
#include "Etudiant.h"

//TEACHING.GAALOUL@GMAIL.COM
//[C++-EFREI]SANSVOISIN_MERCIER

void exercice1(int taille);
void exercice2(int taille);
void exercice3(int nbEtudiants);
int somme(int tab[], int taille);
float calculerMoyenneClasse(Etudiant etudiants[], int nbEtudiants);

/**
 * methode principale appelant les methode de chaques exercices
 * @return
 *      0 si tout c'est bien déroulé
 */
int main() {
    exercice1(10);
    exercice2(4);
    exercice3(10);
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

    Point *points = new Point[taille];

    delete []points;
    std::cout << "\n\n\n";
}

/**
 * méthode principale de l'exercice 3
 */
void exercice3(int nbEtudiants){
    std::cout << "################\n" <<"#  Exercice 3  #\n" << "################\n\n";

    Etudiant *etudiants = new Etudiant[nbEtudiants];

    std::cout << "saisie des étudiants  : \n\n";

    for(int i = 0; i < nbEtudiants; i++){
        std::cout << "Etudiant "<< i+1 <<" : \n\n";
        etudiants[i].saisieEtudiant();
        etudiants[i].calculMoyGenEtudiant();
    }

    std::cout << "Liste des étudiants  : \n\n";

    for(int i = 0; i < nbEtudiants; i++) {
        etudiants[i].afficherEtudiant();
    }

    std::cout << "Moyenne de la classe : " << calculerMoyenneClasse(etudiants, nbEtudiants);

    delete []etudiants;
    std::cout << "\n\n\n";
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