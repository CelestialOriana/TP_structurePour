#include <iostream>
using namespace std;

//procédure
void affichage10Nombres(int nbDepart) {
    // Affiche les dix nombres suivants
    for (int i = 1; i <= 10; i++) {
        cout << nbDepart + i << endl;
    }
}

int main() {
    int nombreDepart;

    // Demande à l'utilisateur d'entrer un nombre de départ
    cout << "Veuillez entrer un nombre de depart : ";
    cin >> nombreDepart;

    // Appel de la procédure
    affichage10Nombres(nombreDepart);

    return 0;
}
