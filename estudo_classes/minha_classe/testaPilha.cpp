#include <iostream>
#include "minhapilha.h"

using namespace std;

int main(){
    TipoItem letra;
    Pilha pilha;
    TipoItem itemPilha;

    cout << "Adicione uma string."<<endl;
    cin.get(letra);
    while(letra != '\n'){
        pilha.insere(letra);
        cin.get(letra);
    }

    cout << endl << "Imprimindo os itens da pilha!" << endl;
    pilha.imprime();

    cout << endl << "Removendo itens da pilha!" << endl;
    while(!pilha.estaVazio()){
        itemPilha=pilha.remove();
        cout << itemPilha;
    }
    cout << endl;
}