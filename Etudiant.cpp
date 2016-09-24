//
// Created by Nicolas Mercier on 23/09/2016.
//

#include "Etudiant.h"

/**
 * methode permettant d'afficher un etudiant
 */
void Etudiant::afficherEtudiant() {
    std::cout << "Etudiant n°"<< Etudiant::numInscription << " : " << Etudiant::nom << " " << Etudiant::prenom << " "  "\n";
    std::cout << "Moyenne Semestre 1 : " << Etudiant::moySemestre1 << "\n";
    std::cout << "Moyenne Semestre 2 : " << Etudiant::moySemestre2 << "\n";
    std::cout << "Moyenne Générale : " << Etudiant::moyGenerale << "\n\n";
}

/**
 * methode permettant de calculer la moyenne generale d'un etudiant
 */
void Etudiant::calculMoyGenEtudiant() {
    if (moySemestre1 != NULL && moySemestre2 != NULL){
        moyGenerale = (moySemestre1 + moySemestre2)/2;
    } else {
        std::cout << "Erreur : Une des moyenne des semestre n'est pas renseignée\n";
    }
}

/**
 * methode permettant la saisie d'un étudiant
 */
void Etudiant::saisieEtudiant() {
    std::cout << "Nom ?\n";
    std::cin >> Etudiant::nom;
    std::cin.clear();
    std::cout << "Prénom ?\n";
    std::cin >> Etudiant::prenom;
    std::cin.clear();
    std::cout << "Numéro d'inscription ?\n";
    std::cin >> Etudiant::numInscription;
    std::cin.clear();
    std::cout << "Moyenne du premier semestre ?\n";
    std::cin >> Etudiant::moySemestre1;
    std::cin.clear();
    std::cout << "Moyenne du deuxième semestre ?\n";
    std::cin >> Etudiant::moySemestre2;
    std::cin.clear();
}