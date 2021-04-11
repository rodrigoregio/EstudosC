#include "fila.h"
#include <iostream>

using namespace std;

Fila fila;
char letra;
char letraFila;

void insere(){
    cout << "Entre com uma string e pressione Enter." << endl;
    char *letras=new char[10];
    cin >> letras;
    //cin.get(letras);
    int i=0;
    while(letras[i] != '\n' and !fila.estaCheia()){
        fila.insereItem(letras[i]);
        //cin.get(letra[i]);
        i++;
    }
    cout << "Inseridos com sucesso!" << endl;
}
void remove(){
    int quantidade=0;
    cout << "Informe quantos itens quer remover:" << endl;
    cin >> quantidade;
    for(int i=0;i<quantidade;i++){
        letraFila=fila.removeItem();
        cout << letraFila;
    }
    cout << endl;
    cout << "Itens da fila: " << fila.itensNaFila() << endl;
}
void impressao(){
    fila.imprime();
}
int main(){
    int resp=1;
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
            case 3:
                impressao();
                break;
            default:
                resp=0;
        }
    }
}
