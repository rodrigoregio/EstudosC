/*
 * Em um programa de Moradia Popular, somente
 * pessoas maiores de 21 anos e com renda abaixo de
 * R$1200,00 podem participar.
 * Crie um Algoritmo em C++, em que o usuário
 * informa sua idade e sua renda, e é informado
 * se ele pode ou não participar desse programa.
 */

#include <iostream>
using namespace std;
int main(){
    const float REMDA_MINIMA=1200.00;
    const int IDADE_MINIMA=21;
    int idade=0;
    float renda=0.0;
    cout << "Informe sua idade:" << endl;
    cin >> idade;
    cout << "Informe sua renda:" << endl;
    cin >> renda;

    cout << "Aguarde... analisando seus dados..." << endl;
    if ((idade >= IDADE_MINIMA) && (renda > REMDA_MINIMA)){
        cout << "\nParabéns, você pode participar do programa 'Minha C, Minha CPP'" << endl;
    } else {
        cout << "\nSentimos muito :(, você não pode participar do programa 'Minha C, Minha CPP',\nestude mais um pouco e conseguirá sua CPP." << endl;
    }
}