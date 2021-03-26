#include <iostream>
#include <stddef.h>
using namespace std;
typedef struct{
    unsigned int bv;
    char processo[10];
} particao;
particao RAM[10];

// inicializa partições
void inicializaParticoes(){
    for(int i=0;i<10;i++){
        RAM[i].bv=0;
    }
}

// ler partições
void lerParticao(particao RAM[10]){
    cout << "Exibindo processos da RAM\n" << endl;
    for(int i=0;i<10;i++){
        cout << "RAM[" << i+1 << "] = [" << RAM[i].bv << " | " << RAM[i].processo << "]" << endl;
    }
}

// elimina processos de partições
void eliminarProcessos(particao RAM[10], int posicao){
    if(RAM[posicao].bv == 1){
        RAM[posicao-1].bv=0;
        cout << "A partição [" << posicao << "] foi liberada!" << endl;
    }else{
        cout << "A posição informada já está livre!!" << endl;
    }
}

// alocação de processos nas partições vazias.
void alocaVazias(particao RAM[10]){
    for(int i=0;i<10;i++){
        if(RAM[i].bv == 0){
            cout << "Encontrei uma partição livre!!\nDigite um processo:" << endl;
            cin >> RAM[i].processo;
            RAM[i].bv=1;
        }else{
            cout << "Ainda não encontrei uma partição vazia, estou procurando!" << endl;
        }
        cout << "Acabaram as partições vazias!! para esvaziar uma partição elimine um processo." << endl;
    }
}
int main(){
    int cont=1;
    do{
        //Todo: Implementar o codigo da função principal...
    } while (cont>0);
    
}
