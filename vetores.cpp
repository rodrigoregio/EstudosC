#include <iostream>
using namespace std;
float teste_estatico(){
    int notas[4];
    int soma=0;
    cout << "Informe as notas a partir da semana 3 até a semana 6" << endl;
    for(int i=0;i<4;i++){
        cout << "Informe a nota da semana " << (i+3) << endl;
        cin >> notas[i];
        soma += notas[i];
    }
    int media=soma/4;
    cout << "A media das notas foi: " << media << "\nA soma das medias foi: " << soma;
    return media;
}
int teste_dinamico(){
    int* notas=new int[4];
    int soma=0;
    cout << "Informe as notas a partir da semana 3 até a semana 6" << endl;
    for(int i=0;i<4;i++){
        cout << "Informe a nota da semana " << (i+3) << endl;
        cin >> notas[i];
        soma += notas[i];
    }
    cout << "A media das notas foi: " << (soma/4) << endl;
    cout << "A soma das medias foi: " << soma << endl;
    delete [] notas;
    return (soma/4);
}
int main(){
    cout << "Embora que de forma diferente, ambos devem dar o mesmo resultado.\n(claro se forem imputados os mesmos valores :)" << endl;
    cout << teste_estatico() << endl;
    cout << teste_dinamico() << endl;
    return 0;
}