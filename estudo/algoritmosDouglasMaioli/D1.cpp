/**
 * Dada a função f(x)=x²-3x+5
 * Crie um algoritmo em C++ que tenha uma função que
 * calcula o valor de f(a), em que a é um numero real
 * informado pelo usuário.
 */
#include <iostream>
using namespace std;

double f(double a){
    return ((a*a)-(3*a)+5);
}
int main(){
    double x=0.0;
    cout << "Informe o valor de A: " << endl;
    cin >> x;
    cout << "\nO valor resultado da função eh: " << f(x) << endl;
    return 0;
}