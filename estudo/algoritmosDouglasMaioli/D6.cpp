/*
Crie um algoritmo em C++, em que o usuário
informa os gastos com a alimentação de 5 famílias,
calcula a media de gastos e informe a cada familia
se gastou abaixo, acima ou na media.

Meu desafio: fazer desse vetor um vetor dinamico
 */
#include <iostream>
#include <stddef.h>
using namespace std;
const int TAMANHO = 6;
const int TOLERANCIA = 15;

/* Calcula o valor da media ***************************************************************************/
float media(float vetor[TAMANHO]){
    float soma=0;
    for (int i = 0 ; i < (TAMANHO - 1) ; i ++ ){
        soma+=vetor[i];
    }
    float media=soma/(TAMANHO-1);
    return media;
}

/* Compara se o valor da familia está na media (com a tolerancia)*************************************/
void isOnMedia(float vetor[TAMANHO]){
    for(int i = 0 ; i < (TAMANHO - 1) ; i++){
        cout << i+1 << "º Familia gastou R$" << vetor[i] << endl;
        if( (vetor[i] < (vetor[TAMANHO-1] - TOLERANCIA))){
            cout << "Parabéns, o gasto foi abaixo da media... 8D" << endl;
        } else if(vetor[i] > (vetor[TAMANHO-1] + TOLERANCIA)){
            cout << "Seu gasto foi acima da média, vá fazer umas aulas sobre economia!! :(" << endl;
        } else {
            cout << "Bom, o gasto foi na média... :)" << endl;
        }
    }
}

int main(){
    //Criação de variaveis ********************************************
    //float vetor[TAMANHO] = {180,290.9,324,90,544};//criação de vetor já atribuido
    float vetor[TAMANHO];//criação de vetor sem atribuição
    float mediaVet=0.0;
    int soma=0;
    
    //Leitura dos dados do usuário*************************************
    /*for(int i = 0 ; i < (TAMANHO - 1) ; i++){
        cout << "Informe o " << (i+1) << "º elemento: " << endl;
        cin >> vetor[i];
    }*/
    
    //soma dos indices do vetor ***************************************
    mediaVet= media(vetor);
    vetor[TAMANHO-1] = mediaVet;
    cout << "Média do vetor: " << mediaVet << endl;
    isOnMedia(vetor);
    return 0;
}