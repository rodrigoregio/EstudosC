#include <iostream>
#include "minhapilha.h"


using namespace std;

Pilha::Pilha(){
    tamanho=0;
    estrutura = new TipoItem[CAPACIDADE];
}
Pilha::~Pilha(){
    delete [] estrutura;
}
bool Pilha::estaVazio() const{
    return (tamanho == 0);
}
bool Pilha::estaCheio() const{
    return (tamanho == CAPACIDADE);
}
void Pilha::insere(TipoItem item){
    if(!estaCheio()){
        estrutura[tamanho]=item;
        tamanho++;
    } else {
        throw "A pilha está cheia, remova alguns itens!";
    }
}

TipoItem Pilha::remove(){
    if(!estaVazio()){
        TipoItem aux = estrutura[tamanho-1];
        tamanho--;
        return aux;
    } else {
        throw "A pilha está vazia! Insira alguns itens!";
    }
}

void Pilha::imprime() const{
    cout<<"Pilha = ";
    for(int i=0;i<tamanho;i++){
        cout<<estrutura[i];
    }
    cout<<endl;
}