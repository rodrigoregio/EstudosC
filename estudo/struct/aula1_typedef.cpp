#include <iostream>
using namespace std;
typedef float peso;
typedef float altura;
float calculoIMC(){
    peso meuPeso=0;
    altura minhaAltura=0;
    cout << "Informe seu peso:" << endl;
    cin >> meuPeso;
    cout << "Informe sua altura:" << endl;
    cin >> minhaAltura;
    float imc=meuPeso/(minhaAltura*minhaAltura);
    cout << "Prontinho, calculei seu IMC, segue resultado abaixo: \n\n" << imc << endl;
    return imc;
}
int main(){
    calculoIMC();
    return 0;
}