#include <iostream>
using namespace std;

//procédure 10 nombres
void affichage10Nombres(int nbDepart) {
    for (int i = 1; i <= 10; i++) {
        cout << nbDepart + i << endl;
    }
}
//procédure nombres imparis
void affichageNombresImpairs() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int nombreDepart;

    // Demande à l'utilisateur d'entrer un nombre de départ
    cout << "Veuillez entrer un nombre de depart : ";
    cin >> nombreDepart;

    // Appel de la procédure
    affichage10Nombres(nombreDepart);

    affichageNombresImpairs();

    return 0;
}
