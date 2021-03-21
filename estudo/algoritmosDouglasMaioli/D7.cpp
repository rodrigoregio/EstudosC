/*
 * Crie um algoritmo em CPP, em que o usuario
 * informa a dimensão da matriz e os elementos
 * de duas matri\zes (ambas de mesma dimensão,
 * informada anteriormente) e o algoritmo mostra
 * a soma das duas matrizes.
 */

/**
 * Função que calcula a soma de matrizes com dimensão X e Y
 * @param vetA Um vetor chamado vetA
 * @param vetB Outro vetor chamado vetB
 * @param tamanhoX quantidade de linhas que o vetor C, e os outros informados antriormente, possuirá
 * @param tamanhoY quantidade de colunas que o vetor C, e os outros informados antriormente, possuirá
 * return vetC Vetor criado com a soma dos itens dos vetores A e B
 */
void somaMatriz(int vetA[][], int vetB[][], int tamanho){
    int vetC[tamanho][tamanho];
    for(int  i = 0; i < tamanho; i++){
        for (int j=0; j < tamanho; j++){
            vetC[i][j] = vetA[i][j] + vetB[i][j]; 
        }
    }
    vetC[tamanho][tamanho];
}
int main(){

    static int tamanho=0;
}