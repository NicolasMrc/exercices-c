#include <iostream>

//TEACHING.GAALOUL@GMAIL.COM
//[C++-EFREI]SANSVOISIN_MERCIER

void exercice1();
void exercice2();
int somme(int tab[]);

int main() {
    exercice1();
    exercice2();
    return 0;
}

void exercice1(){
    std::cout << "################\n" <<"#  Exercice 1  #\n" << "################\n\n";
    int tab[10];
    for(int i = 0; i < 10; i++){
        tab[i] = i+1;
    }
    std::cout << "somme : " << somme(tab) << "\n\n\n";
}

int somme(int tab[]){
    int somme = 0;
    for (int i = 0; i < 10; i++){
        somme += tab[i];
    }
    return somme;
}

void exercice2(){
    std::cout << "################\n" <<"#  Exercice 2  #\n" << "################\n\n";

}