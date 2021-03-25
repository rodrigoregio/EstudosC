/* 
 * Crie um algoritmo em CPP utilizando apenas
 * ponteiros em que o usuario informa a indade
 * de duas pessoas, e o algoritmo informa a
 * média dessas idades.
 */
#include <iostream>
using namespace std;

int main(){
    int i1,i2, m;
    int *idade1, *idade2, *media;
    cout << "Informe a primeira idade:" << endl;
    cin >> i1;

    cout << "Informe a segunda idade:" << endl;
    cin >> i2;

    *idade1=i1;
    *idade2=i2;

    cout << endl;
    cout << "Valor ponteiro idade 1: " << &idade1 << "\nValor ponteiro idade2: " << &idade2 << endl;
    m= (*idade1 + *idade2) / 2;

    *media=m;
    cout << "Valor ponteiro media: " << &media << endl;
}