#include <iostream>
#include <math.h>
#include "PointExo2.h"
#include "Etudiant.h"
#include "fonctions.h"
#include "test.h"
#include "PointExo6.h"
#include "Cercle.h"


//TEACHING.GAALOUL@GMAIL.COM
//[C++-EFREI]SANSVOISIN_MERCIER

void exercice1(int taille);
void exercice2(int taille);
void exercice3(int nbEtudiants);
void exercice4();
void exercice5();
void exercice6();
void exercice7();
void exercice8();
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
                case 5 :
                    exercice5();
                    break;
                case 6 :
                    exercice6();
                    break;
                case 7 :
                    exercice7();
                    break;
                case 8 :
                    exercice8();
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
    std::cout << "\n################\n" <<"#  Exercice 4  #\n" << "################\n\n";
    struct test t(3, 4.5);
    std::cout << "n : " << t.n << "\n";
    std::cout << "x : " << t.x << "\n\n";
    f(&t);
    std::cout << "Reinitialisation ! " << "\n\n";
    std::cout << "n : " << t.n << "\n";
    std::cout << "x : " << t.x << "\n\n";
}

/**
 * fonction principale de l'exercice 5
 * partie 1 calculant le resulat de x puissance p
 * partie 2 modifie x par reference pour contenir le resultat de x puissance p
 */
void exercice5(){
    std::cout << "\n################\n" <<"#  Exercice 5  #\n" << "#   Partie 1   #\n" << "################\n\n";
    float x;
    unsigned p;
    std::cout << "Valeur de x ? \n";
    std::cin >> x;
    std::cout << "\nValeur de la puissance ? \n";
    std::cin >> p;
    std::cout << "\nResultat : \n" << x << "^" << p << " = " << expo(x, p) << "\n" ;
    std::cout << "\n################\n" <<"#  Exercice 5  #\n" << "#   Partie 2   #\n" << "################\n\n";


    std::cout << "Valeur de x ? \n";
    std::cin >> x;
    std::cout << "\nValeur de la puissance ? \n";
    std::cin >> p;
    expo2(&x,p);
    std::cout << "\nResultat : \n" << x << "\n" ;
}

/**
 * methode principale de l'exercice 6
 * initialisation de vecteur
 * deplacement de vecteur
 * affichage
 */
void exercice6(){
    std::cout << "\n################\n" <<"#  Exercice 6  #\n" << "################\n\n";

    PointExo6 p1, p2;
    int x, y;
    std::cout << "/////// Initialisation \\\\\\\\\\\\\\ \n\n" << "p1 : \nQuelle est la coordonée x de p1 ?\n";
    std::cin >> x;
    std::cout << "Quelle est la coordonnée y de p1 ?\n";
    std::cin >> y;
    p1.initialise(x,y);
    std::cout << "\np2 : \nQuelle est la coordonnée x de p2 ?\n";
    std::cin >> x;
    std::cout << "Quelle est la coordonnée y de p2 ?\n";
    std::cin >> y;
    p2.initialise(x,y);

    std::cout << "\n\nAffichage : \n\n";
    std::cout << "p1 : \n";
    p1.affiche();
    std::cout << "\np2 : \n";
    p2.affiche();

    std::cout << "\n\n////// Deplacement \\\\\\\\\\\\\\ \n\n";
    std::cout << "p1 : \nDe combien voulez vous deplacer p1 en x ?\n";
    std::cin >> x;
    std::cout << "De combien voulez vous deplacer p1 en y ?\n";
    std::cin >> y;
    p1.deplace(x,y);
    std::cout << "\np2 : \nDe combien voulez vous deplacer p2 en x ?\n";
    std::cin >> x;
    std::cout << "De combien voulez vous deplacer p2 en y ?\n";
    std::cin >> y;
    p2.deplace(x,y);

    std::cout << "\nAffichage : \n\n";
    p1.affiche();
    p2.affiche();
}

/**
 * methode principale de l'exercice 7
 *
 * produit d'entier
 * produits de vecteur bidimensionnel
 * produits de vecteur tridimensionnel
 */
void exercice7(){
    signed x1, x2, y1, y2, z1, z2;
    std::cout << "\n################\n" <<"#  Exercice 7  #\n" << "################\n\n";

    std::cout << "/////// Produit de deux entier signés \\\\\\\\\\\\\\ \n\n";
    std::cout << "x1 ?\n";
    std::cin >> x1;
    std::cout << "x2 ?\n";
    std::cin >> x2;
    std::cout << "\nResultat : " << produit(x1, x2) << "\n\n";


    std::cout << "/////// Produit de deux vecteurs bidimensionnels \\\\\\\\\\\\\\ \n\n";
    std::cout << "Vecteur 1 : \nx1 ?\n";
    std::cin >> x1;
    std::cout << "y1 ?\n";
    std::cin >> y1;
    std::cout << "\nVecteur 2 :\n";
    std::cout << "x2 ?\n";
    std::cin >> x2;
    std::cout << "y2 ?\n";
    std::cin >> y2;

    VecteurBidimensionel vb1(x1,y1);
    VecteurBidimensionel vb2(x2,y2);
    VecteurBidimensionel pb = produit(vb1, vb2);
    std::cout << "\nVecteur 1 :\n";
    vb1.afficher();
    std::cout << "\n\nVecteur 2 :\n";
    vb2.afficher();
    std::cout << "\n\nProduit des deux vecteurs :\n";
    pb.afficher();


    std::cout << "\n\n/////// Produit de deux vecteurs tridimensionnels \\\\\\\\\\\\\\ ";
    std::cout << "\n\nVecteur 1 : \nx1 ?\n";
    std::cin >> x1;
    std::cout << "y1 ?\n";
    std::cin >> y1;
    std::cout << "z1 ?\n";
    std::cin >> z1;
    std::cout << "\nVecteur 2 :\n";
    std::cout << "x2 ?\n";
    std::cin >> x2;
    std::cout << "y2 ?\n";
    std::cin >> y2;
    std::cout << "z2 ?\n";
    std::cin >> z2;

    VecteurTridimensionel vt1(x1,y1, z1);
    VecteurTridimensionel vt2(x2,y2, z2);
    VecteurTridimensionel pt = produit(vt1, vt2);
    std::cout << "\nVecteur 1 :\n";
    vt1.afficher();
    std::cout << "\n\nVecteur 2 :\n";
    vt2.afficher();
    std::cout << "\n\nProduit des deux vecteurs :\n";
    pt.afficher();

}

/**
 * methode principale de l'exercie 8
 * calcule de l'air et de la surface d'un cercle
 */
void exercice8(){
    std::cout << "\n################\n" <<"#  Exercice 8  #\n" << "################\n\n";

    float r, a, o;
    std::cout << "Rayon du cercle ? \n";
    std::cin >> r;
    std::cout << "\nAbsicce du cercle ? \n";
    std::cin >> a;
    std::cout << "\nOrdonnée du cercle ? \n";
    std::cin >> o;
    Cercle cercle(r,a,o);

    std::cout << "\nPerimetre du cercle : " << perimetre(cercle) << "\n\n";
    std::cout << "Air du cercle : " << air(cercle) << "\n\n";
}


