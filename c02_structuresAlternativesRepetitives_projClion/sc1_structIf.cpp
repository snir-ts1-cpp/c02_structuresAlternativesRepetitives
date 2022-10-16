// Utilisation d'une structure if

#include <iostream>
using namespace std;

int main() {
    int nb(0);
    cout << "Entrez un entier : ";
    cin >> nb;

    if (nb > 0) {
        cout << "Vous avez entre un entier positif: " << nb << endl;
    }

    cout << "Cette ligne est toujours executee.";

    return 0;
}