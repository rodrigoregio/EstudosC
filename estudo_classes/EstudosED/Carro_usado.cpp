#include <iostream>
#include "carro.h"

using namespace std;

int main(){
    Carro c(4,4,100.9);
    c.print();

    Carro outroCarro(0,0,0.0);
    int recebido=0;
    cout << "Informe a quantidade de portas:" << endl;
    cin >> recebido;
    outroCarro.setPortas(recebido);
    cout << "Informe a quantidade de rodas:" << endl;
    cin >> recebido;
    outroCarro.setRodas(recebido);
    cout << "Informe a quilometragem rodada:" << endl;
    cin >> recebido;
    outroCarro.setQuilometragem((float) recebido);

    cout << "\nCarro novo!" << endl;
    outroCarro.print();
    return 0;
}