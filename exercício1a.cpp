#include <iostream>
using namespace std;

/*1. Um shopping está fazendo uma promoção na qual o cliente que fizer compras de
valor até R$100,00 ganha um cupom para concorrer a um carro e se ele comprar
acima de R$100,00 ganha dois cupons e um vale-desconto no total de 10% da
compra. Faça um programa que leia do teclado o total de compras e imprima se o
cliente tem direito a 1 cupom, ou a 2 cupons e o vale-desconto (nesse caso, imprima
o valor do desconto). Declare como constantes simbólicas o limite e o percentual do
desconto.*/

void desconto(){
    float valorcompra;
    cout << "Digite o valor total de sua compra: ";
    cin >> valorcompra;
    
    if (valorcompra <= 100.00) {
        cout << "A sua compra foi " << valorcompra << " reais, o que significa que você tem direito de um cupom para concorrer um carro!";
    } else if (valorcompra > 100.00) {
        valorcompra *= 0.90;
        cout << "A sua compra foi " << valorcompra << " reais, o que significa que você tem direito de dois cupons para concorrer um carro e um desconto de 10%.\n Sua compra agora será: " << valorcompra;
    }
}

int main(){
    desconto();
}
