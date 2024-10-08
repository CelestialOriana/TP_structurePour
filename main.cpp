#include "sousProgrammes.h"



int main() {
    int nombreDepart;

    // Demande à l'utilisateur d'entrer un nombre de départ
    cout << "Veuillez entrer un nombre de depart : ";
    cin >> nombreDepart;

    // Appel de la procédure
    affichage10Nombres(nombreDepart);

    //affichageNombresImpairs();

    affichagePlusGdPlusPetit();

    return 0;
}

