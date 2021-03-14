/**
 * Crie um algoritmo em C++, que calcula a potência
 * B^E, em que o usuario informa um numero real B e
 * um numero natural E. Nesse algoritmo, sempre que
 * é informado o resultado da potência, é perguntado
 * se deseja calcular outra potência.
 * Obs.: sem pow.
 */
#include <iostream>
using namespace std;
int calculaPot(int numero, int elevado){
    int res=numero;
    int a=0;
    for(int i=1;i<elevado; i++){
        res*=numero;
        //cout << res << endl;
    }
    return res;
}
int main(){
    char res='s';
    int nu=0;
    int elevado=0;
    do{
        cout << "Informe o numero:" << endl;
        cin >> nu;
        cout << "O numero " << nu << " elevado a quanto?" << endl;
        cin >> elevado;

        cout << "Numero " << nu << " elevado a " << elevado << " é " << calculaPot(nu,elevado) << endl;

        cout << "Deseja continuar? [s / n]" << endl;
        cin >> res;
    }while(res == 's' || res == 'S');
}