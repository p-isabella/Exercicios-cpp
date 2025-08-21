#include <iostream>
using namespace std;

/*2. Escreva um programa que leia um número real do teclado e imprima se o número lido
é positivo ou não.*/

void posorneg() {
    float numero;
    cout << "Digite um número real:\n>> ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "O número " << numero << " é negativo.";
    } else if (numero == 0) {
        cout << "O número é " << numero;
    } else {
        cout << "O número " << numero << " é positivo.";
    }
}

int main() {
    posorneg();
}
