#include <iostream>
using namespace std;

int main() {
    int nombreDépart;

    // Demande à l'utilisateur d'entrer un nombre de départ
    cout << "Veuillez entrer un nombre de depart : ";
    cin >> nombreDépart;

    // Affichage
    for (int i = 1; i <= 10; i++) {
        cout << nombreDépart + i << endl;
    }

    return 0;
}

