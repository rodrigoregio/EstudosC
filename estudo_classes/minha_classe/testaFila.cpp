#include "fila.h"
#include <iostream>

using namespace std;

Fila fila;
char letra;
char letraFila;

void insere(){
    cout << "Entre com uma string e pressione Enter." << endl;
    cin.get(letra);
    while(letra != '\n' and !fila.estaCheia()){
        fila.insere(letra);
        cin.get(letra);
    }
}
void remove(){
    int quantidade=0;
    cout << "Informe quantos itens quer remover:" << endl;
    cin >> quantidade;
    for(int i=0;i<quantidade;i++){
        letraFila=fila.remove();
        cout << letraFila;
    }
    cout << endl;
}

int main(){
    int resp=0;
    while(resp > 0){
        cout<<"O que deseja fazer??\n1 - Inserir letras\n2 - remover letras\n3 - Sair" << endl;
        cin >> resp;
        switch(resp){
            case 1:
                insere();
                break;
            case 2:
                remove();
                break;
            default:
                resp=99;
        }
    }
}
