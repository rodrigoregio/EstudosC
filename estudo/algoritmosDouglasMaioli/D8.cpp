/*
 * Crie um algoritmo em C++, que o usuario informa o
 * tamanho de um vetor, e seus elementos. O algoritmo
 * deve imprimir o vetor e logo após perguntar se o
 * usuário deseja ver outro vetor. Utilize o delete
 */

#include <iostream>
using namespace std;

void mostraVetor(int *vetor, int tam){
    cout << endl;
    cout << "[" << vetor[0];
    for(int i=1; i<tam;i++){
        cout << ", " << vetor[i];
    }
    cout << "]" << endl;
    cout << endl;
}

int main(){
    int tamanho=0;
    cout << "Informe o tamanho do vetor:" << endl;
    cin >> tamanho;
    do{
        int *vetor;
        if(tamanho > 0){
            vetor= new int[tamanho];
            for (int i = 0; i < tamanho; i++){
                cout << "Informe o elemento " << (i+1) << ":" << endl;
                cin >> vetor[i];
            }
        }
        mostraVetor(vetor, tamanho);
        delete [] vetor;
        cout << "Informe o tamanho do vetor:" << endl;
        cin >> tamanho;
    }while(tamanho > 0);
    cout << "Foi informado um tamanho 0, o programa será encerrado!!\nAté mais :)" <<endl;
    return tamanho;
}