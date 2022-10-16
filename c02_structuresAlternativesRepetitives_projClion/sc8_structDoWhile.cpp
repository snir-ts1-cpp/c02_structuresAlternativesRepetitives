// Utilisation d'une structure do...while
// Affichage des nombres entiers de 1 à 5

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do{
        cout << i << " ";
        i++;
    }
    while(i<=5);

    return 0;
}