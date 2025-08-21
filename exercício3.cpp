#include <iostream>
using namespace std;

/*3. Escreva um programa que leia dois números do teclado e avise se o primeiro é maior
que o segundo ou não.*/

void maiorOumenor() {
    float numero1;
    float numero2;
    
    cout << "Digite o primeiro número:\n>> ";
    cin >> numero1;
    
    cout << "Digite o segundo número:\n>>";
    cin >> numero2;
    
    if (numero1 > numero2) {
        cout << "O número " << numero1 << " é maior que o " << numero2;
    } else if (numero1 < numero2) {
        cout << "O número " << numero1 << " é menor que o " << numero2;
    } else {
        cout << "Os números são iguais.";
    }
}

int main() {
    maiorOumenor();
    
    return 0;
}
