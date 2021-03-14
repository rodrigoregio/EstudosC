/**
 * Crie um Algoritmo em C++, em que o usuário
 * informa as notas de três provas de um determinado
 * aluno e também a média de nota da turma toda. O
 * Algoritmo deve calcular a média deste aluno e
 * informar se sua nota é acima da média, abaixo da
 * média ou está na média.
 */
#include <iostream>
using namespace std;

double calculaMedia(double n1, double n2, double n3){
    return ((n1+n2+n3)/3);
}

int isOnMedia(double mediaAluno, double mediaClasse){
    const int TOLERANCIA=2;
    if(mediaAluno >= (mediaClasse+TOLERANCIA)){
        cout << "Acima da média... BD" << endl;
        return 1;
    }else if((mediaAluno < (mediaClasse + TOLERANCIA)) && (mediaAluno > (mediaClasse - TOLERANCIA) )){
        cout << "Na média... :)" << endl;
        return 0;
    } else {
        cout << "Abaixo da media... :( " << endl;
        return -1;
    }
}

int main(){
    double notas[5];
    for(int i=0;i<3;i++){
        cout << "Informe " << (i+1) << "a nota do aluno: " << endl;
        cin >> notas[i];
    }
    cout << "Informe a média da sala: " << endl;
    cin >> notas[3];
    
    notas[4]=calculaMedia(notas[0], notas[1], notas[2]);

    return isOnMedia(notas[4], notas[3]);
}