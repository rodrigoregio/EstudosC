#include <iostream>
#include "carro.h"

using namespace std;
//getters
int Carro::getPortas()const{
    return portas;
}
int Carro::getRodas()const{
    return rodas;
}
float Carro::getQuilometragem()const{
    return quilometragem;
}

//setters

void Carro::setPortas(int qtdePortas){
    portas=qtdePortas;
}
void Carro::setRodas(int r){
    rodas=r;
}
void Carro::setQuilometragem(float km){
    quilometragem=km;
}

//equivalente ao toStringJava

void Carro::print()const{
    cout << "Meu carro tem:\n" << Carro::getPortas() << " portas, " << Carro::getRodas() << " rodas e " << Carro::getQuilometragem() << " quilometros rodados" << endl;
}

//Método construtor
Carro::Carro(int p,int r,float q):portas(p),rodas(r),quilometragem(q){

}