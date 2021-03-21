/*
 * Crie um algoritmo em CPP, em que o usuario
 * informa a dimensão da matriz e os elementos
 * de duas matri\zes (ambas de mesma dimensão,
 * informada anteriormente) e o algoritmo mostra
 * a soma das duas matrizes.
 */

#include <iostream>
using namespace std;
/**
 * Função que calcula a soma de matrizes com dimensão X e Y
 * param vetA Um vetor chamado vetA
 * param vetB Outro vetor chamado vetB
 * param tamanhoX quantidade de linhas que o vetor C, e os outros informados antriormente, possuirá
 * param tamanhoY quantidade de colunas que o vetor C, e os outros informados antriormente, possuirá
 * return vetC Vetor criado com a soma dos itens dos vetores A e B
 * 
 * Pergunta ao professor Douglas Maioli, teria como fazer algo como isto??
 * 
void somaMatriz(int vetA[tam][tam], int vetB[tam][tam]){  onde é tamanho era pra ser o tamanho informado pelo usuario.
    int vetC[][];
    for(int  i = 0; i < tamanho; i++){
        for (int j=0; j < tamanho; j++){
            vetC[i][j] = vetA[i][j] + vetB[i][j];
        }
    }
}
*/
int main(){
    int tamanho;
    cout << "Informe o tamanho dos vetores:" << endl;
    cin >> tamanho;
    int vetorUm[tamanho][tamanho];
    int vetorDois[tamanho][tamanho];
    
    /************************************Recebendo Matriz 1******************************************************/
    cout << "Matriz A: " << endl;
    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            cout << "Informe o elemento da linha " << (i + 1) << " coluna " << (j + 1) << ":" << endl;
            cin >> vetorUm[i][j];
        }
    }
    cout << endl;
    cout << endl;
    /************************************Recebendo Matriz 2******************************************************/
    cout << "Matriz B: " << endl;
    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            cout << "Informe o elemento da linha " << (i + 1) << " coluna " << (j + 1) << ":" << endl;
            cin >> vetorDois[i][j];
        }
    }
    cout << endl;
    cout << endl;
    /************************************Exibindo Matriz 1*******************************************************/
    cout << "Matriz A: " << endl;
    for(int i = 0; i < tamanho; i++){
        for(int j=0; j<tamanho;j++){
            cout << vetorUm[i][j] << " ";
        }
        cout << endl;
    }
    /************************************Exibindo Matriz 2*******************************************************/
    cout << "Matriz B: " << endl;
    for(int i = 0; i < tamanho; i++){
        for(int j=0; j<tamanho;j++){
            cout << vetorDois[i][j] << " ";
        }
        cout << endl;
    }

    /************************************Calculando Matriz 3******************************************************/
    int vetC[tamanho][tamanho];
    for(int  i = 0; i < tamanho; i++){
        for (int j=0; j < tamanho; j++){
            vetC[i][j] = vetorUm[i][j] + vetorDois[i][j]; 
        }
    }
    /************************************Exibindo Matriz 3*******************************************************/
        cout << "Matriz C: " << endl;
    for(int i = 0; i < tamanho; i++){
        for(int j=0; j<tamanho;j++){
            if(vetC[i][j] < 10){
                cout << "0" << vetC[i][j] << " ";
            }else{
                cout  << vetC[i][j] << " ";
            }
        }
        cout << endl;
    }
    //somaMatriz(tamanho, vetorUm, vetorDois); chamando a função acima
}
