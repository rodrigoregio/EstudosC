/* 
 * Crie um algoritmo em CPP utilizando apenas
 * ponteiros em que o usuario informa a indade
 * de duas pessoas, e o algoritmo informa a
 * média dessas idades.
 */
#include <iostream>
using namespace std;

int main(){
    //int i1,i2, m;
    int *idade1=new int, *idade2=new int;
    float *media=new float;
    cout << "Informe a primeira idade:" << endl;
    cin >> *idade1;

    cout << "Informe a segunda idade:" << endl;
    cin >> *idade2;

    cout << "Idade1: " << *idade1 << endl;
    cout << "idade2: " << *idade2 << endl;

    cout << endl;
    cout << "Valor ponteiro idade 1: " << *idade1 << "\nValor ponteiro idade2: " << *idade2 << endl;
    *media= (*idade1 + *idade2) / 2;

    cout << "Valor ponteiro media: " << *media << endl;
    delete[] idade1;
    delete[] idade2;
    delete[] media;
}