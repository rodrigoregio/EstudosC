#include "fila.h"
#include <iostream>

using namespace std;

Fila::Fila(){
    inicio=0;
    fim=0;
    estrutura=new TipoItem[CAPACIDADE];
}
Fila::~Fila(){
    delete [] estrutura;
}
bool Fila::estaVazia() const{
    return (inicio == fim);
}
bool Fila::estaCheia() const{
    return ((fim - inicio) == CAPACIDADE);
}
void Fila::insere(TipoItem item){
    if(!estaCheia()){
        estrutura[fim % CAPACIDADE]=item;
        fim++;
    }else{
        throw "A fila está cheia!";
    }
}
TipoItem Fila::remove(){
    if(!estaVazia()){
        inicio++;
        return estrutura[(inicio-1)%CAPACIDADE];
    }else{
        throw "A fila está vazia!";
    }
}
void Fila::imprime() const{
    cout << "Fila: ";
    for(int i=0;i<fim;i++){
        cout << estrutura[i%CAPACIDADE];
    }
    cout << endl;
}

int Fila::itensNaFila() const{// retorna a quantidade de itens na fila
    return (fim-inicio);
}