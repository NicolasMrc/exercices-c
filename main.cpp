#include <iostream>
#include "Point.h"
#include "Etudiant.h"
#include "fonctions.h"
#include "test.h"


//TEACHING.GAALOUL@GMAIL.COM
//[C++-EFREI]SANSVOISIN_MERCIER

void exercice1(int taille);
void exercice2(int taille);
void exercice3(int nbEtudiants);
void exercice4();
int somme(int tab[], int taille);
float calculerMoyenneClasse(Etudiant etudiants[], int nbEtudiants);

/**
 * methode principale appelant les methode de chaques exercices
 * @return
 *      0 si tout c'est bien déroulé
 */
int main() {

    std::cout << "################\n" <<"#   Welcolme   #\n" << "################\n\n";
    std::cout << "Quel exercice voulez vous executer ?\n";
    int choix;
    std::cin >> choix;

    do{
        if (choix > 0 && choix < 9){
            switch (choix) {
                case 1 :
                    exercice1(10);
                    break;
                case 2 :
                    exercice2(4);
                    break;
                case 3 :
                    exercice3(10);
                    break;
                case 4 :
                    exercice4();
                    break;
                default:
                    break;
            }
        } else {
            std::cout << "valeur invalide !\n";
            std::cout << "Quel exercice ?\n";
            std::cin >> choix;
        }
    } while (choix == 0 || choix >= 9);


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
 * fonction principale de l'exercie 4
 */
void exercice4(){
    std::cout << "################\n" <<"#  Exercice 4  #\n" << "################\n\n";
    struct test t(3, 4.5);
    std::cout << "n : " << t.n << "\n";
    std::cout << "x : " << t.x << "\n\n";
    f(&t);
    std::cout << "Reinitialisation ! " << "\n\n";
    std::cout << "n : " << t.n << "\n";
    std::cout << "x : " << t.x << "\n\n";
}
