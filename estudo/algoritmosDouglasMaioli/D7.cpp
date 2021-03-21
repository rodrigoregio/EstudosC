/*
 * Crie um algoritmo em CPP, em que o usuario
 * informa a dimensão da matriz e os elementos
 * de duas matri\zes (ambas de mesma dimensão,
 * informada anteriormente) e o algoritmo mostra
 * a soma das duas matrizes.
 */

#include <iostream>
using namespace std;
/*
 * Função que calcula a soma de matrizes com dimensão X e Y
 * param vetA Um vetor chamado vetA
 * param vetB Outro vetor chamado vetB
 * param tamanhoX quantidade de linhas que o vetor C, e os outros informados antriormente, possuirá
 * param tamanhoY quantidade de colunas que o vetor C, e os outros informados antriormente, possuirá
 * return vetC Vetor criado com a soma dos itens dos vetores A e B
 * 
 * Pergunta a algum professor, porque a impossibilidade de fazer essa função na linha vinte e um em C++?
 * pergunto pois queria passar duas matrizes a funcção, o tamanho das matrizes são informadas pelo usuario
 * Sei que tem algo a ver com os vetores dinamicamente alocados e os vetores estaticamente alocados.
 *
void somaMatriz(int vetA[tamX][tamY], int vetB[tamX][tamY]){  //onde é tam era pra ser o tamanho informado pelo usuario.
    int vetC[tamX][tamY];
    for(int  i = 0; i < tamX; i++){
        for (int j=0; j < tamY; j++){
            vetC[i][j] = vetA[i][j] + vetB[i][j];
        }
    }
}
*/
int main(){
    int tamanhoX, tamanhoY;
    cout << "Informe o tamanho das:" << endl;
    cout << "Informe a quantidade de linhas" << endl;
    cin >> tamanhoX;
    cout << "Informe a quantidade de Colunas" << endl;
    cin >> tamanhoY;
    int vetorUm[tamanhoX][tamanhoY];
    int vetorDois[tamanhoX][tamanhoY];
    
    /************************************Recebendo Matriz 1******************************************************/
    cout << "Matriz A: " << endl;
    for(int i=0;i<tamanhoX;i++){
        for(int j=0;j<tamanhoY;j++){
            cout << "Informe o elemento da linha " << (i + 1) << " coluna " << (j + 1) << ":" << endl;
            cin >> vetorUm[i][j];
        }
    }
    cout << endl;
    cout << endl;
    /************************************Recebendo Matriz 2******************************************************/
    cout << "Matriz B: " << endl;
    for(int i=0;i<tamanhoX;i++){
        for(int j=0;j<tamanhoY;j++){
            cout << "Informe o elemento da linha " << (i + 1) << " coluna " << (j + 1) << ":" << endl;
            cin >> vetorDois[i][j];
        }
    }
    cout << endl;
    cout << endl;
    /************************************Exibindo Matriz 1*******************************************************/
    cout << "Matriz A: " << endl;
    for(int i = 0; i < tamanhoX; i++){
        for(int j=0; j<tamanhoY;j++){
            if(vetorUm[i][j] < 10){
                cout << "0" << vetorUm[i][j] << " ";
            }else{
                cout  << vetorUm[i][j] << " ";
            }
        }
        cout << endl;
    }
    /************************************Exibindo Matriz 2*******************************************************/
    cout << "Matriz B: " << endl;
    for(int i = 0; i < tamanhoX; i++){
        for(int j = 0; j < tamanhoY; j++){
            if(vetorDois[i][j] < 10){
                cout << "0" << vetorDois[i][j] << " ";
            }else{
                cout  << vetorDois[i][j] << " ";
            }
        }
        cout << endl;
    }

    /************************************Calculando Matriz 3******************************************************/
    int vetC[tamanhoX][tamanhoY];
    for(int  i = 0; i < tamanhoX; i++){
        for (int j=0; j < tamanhoY; j++){
            vetC[i][j] = vetorUm[i][j] + vetorDois[i][j]; 
        }
    }
    /************************************Exibindo Matriz 3*******************************************************/
        cout << "Matriz C: " << endl;
    for(int i = 0; i < tamanhoX; i++){
        for(int j = 0; j < tamanhoY; j++){
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
