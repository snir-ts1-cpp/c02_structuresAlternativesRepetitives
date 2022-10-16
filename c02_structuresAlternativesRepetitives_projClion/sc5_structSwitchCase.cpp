// Utilisation d'une structure switch...case

#include <iostream>
using namespace std;

int main() {
    int choixUtilisateur(0);
    cout << "Entrez votre choix parmi 1, 2 ou 3 : ";
    cin >> choixUtilisateur;

    switch(choixUtilisateur)
    {
        case 1 :
            cout << "Vous avez saisi 1" << endl;
            break;
        case 2 :
            cout << "Vous avez saisi 2" << endl;
            break;
        case 3 :
            cout << "Vous avez saisi 3" << endl;
            break;
        default :
            cout << "Vous n'avez saisi ni 1, ni 2, ni 3" << endl;
            break;
    }

return 0;
}