#include <iostream>
#include <stddef.h>
using namespace std;
typedef struct{
    unsigned int bv;
    char processo;
} particao;

// inicializa partições
void inicializaParticoes(particao RAM[10]){
    for(int i=0;i<10;i++){
        RAM[i].bv=0;
        RAM[i].processo=' ';
    }
    cout << "Partições inicializadas!" << endl;
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
        RAM[posicao-1].processo=' ';
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
    }
    cout << "Acabaram as partições vazias!! para esvaziar uma partição elimine um processo." << endl;
}
int main(){
    particao processosMemoria[10];
    int cont=1;
    do{
        //Todo: Implementar o codigo da função principal...
        cout << "O que deseja fazer?\n" <<
            "1 - inicializar as partiçoes\n" <<
            "2 - alocar processos nas partições\n" <<
            "3 - ler processos alocados nas partições\n" <<
            "4 - eliminar processos alocados nas partições\n" <<
            "0 - sair do programa" << endl;
        cin >> cont;
        if(cont ==1){
            inicializaParticoes(processosMemoria);
        }
        if(cont == 2){
            alocaVazias(processosMemoria);
        }
        if(cont == 3){
            cout << endl;
            lerParticao(processosMemoria);
            cout << endl;
        }
        if(cont == 4){
            int posicao;
            cout << "Informe o processo que irá ser encerrado:" << endl;
            cin >> posicao;
            eliminarProcessos(processosMemoria,posicao);
        }
    } while (cont>0);
    cout << "Você escolheu 0, estou encerrando o sistema..." << endl;

}
