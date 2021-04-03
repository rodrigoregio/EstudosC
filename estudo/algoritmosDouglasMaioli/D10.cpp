/*
 * Crie um algoritmo em C++ que tenha uma função
 * que recebe dois ponteiros e troque o valor de
 * referencia dos dois
 */
#include <iostream>
using namespace std;
void troca(int *a, int *b){
    int *auxiliar=new int;
    *auxiliar=*a;
    *a=*b;
    *b=*auxiliar;
}
int main(){
    int *p1=new int;
    *p1=5;
    int *p2=new int;
    *p2=10;
    cout << "Valores ponteiros:\nP1: " << *p1 << " e " << p1 << "\nP2: " << *p2 << " e " << p2 << endl;
    troca(p1,p2);
    cout << "\n" << endl;
    cout << "Novos valores\nValores ponteiros:\nP1: " << *p1 << " e " << p1 << "\nP2: " << *p2 << " e " << p2 << endl;
    return 0;
}