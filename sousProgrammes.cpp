//
// Created by emmanuel.a on 08/10/2024.
//

#include "sousProgrammes.h"
#include <iostream>
#include <limits>

using namespace std;

// Procédure pour afficher 10 nombres
void affichage10Nombres(int nbDepart) {
    for (int i = 1; i <= 10; i++) {  // Changer 9 à 10 pour afficher 10 nombres
        cout << nbDepart + i << endl;
    }
}

// Procédure pour afficher les nombres impairs
void affichageNombresImpairs() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}

// Procédure pour afficher le plus grand et le plus petit nombre
void affichagePlusGdPlusPetit() {
    double min = numeric_limits<double>::infinity();  // Initialiser min avec une valeur infinie pour trouver le plus petit nombre
    double max = -numeric_limits<double>::infinity(); // Initialiser max avec une valeur très petite pour trouver le plus grand nombre

    for (int i = 0; i < 10; ++i) {
        double n;
        cout << "Entrez le nombre " << (i + 1) << ": ";
        cin >> n;

        if (n < min) {
            min = n;
        }
        if (n > max) {
            max = n;
        }
    }

    cout << "Le plus petit nombre est: " << min << endl;
    cout << "Le plus grand nombre est: " << max << endl;
}