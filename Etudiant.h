//
// Created by Nicolas Mercier on 23/09/2016.
//

#ifndef EXERCICES_ETUDIANT_H
#define EXERCICES_ETUDIANT_H

#include <iostream>


class Etudiant {

    int numInscription;
    std::string nom;
    std::string prenom;
    int moySemestre1;
    int moySemestre2;

    public:
        float moyGenerale;
        void saisieEtudiant();
        void afficherEtudiant();
        void calculMoyGenEtudiant();
};


#endif //EXERCICES_ETUDIANT_H
