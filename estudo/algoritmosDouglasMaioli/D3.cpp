/**
 * Crie um Algoritmo em C++, que tenha uma função
 * que calculao fatorial de um número inteiro
 * positivo, informado pelo usuário.
 */
#include <iostream>
using namespace std;
int fat(int x){
    int a=x-1;
    int res=x;
    while(a > 0){
        res=res*a;
        a-=1;
        //cout << res << endl;
    }
    return res;
}
int main(){
    int num=0;
    while(num<=1){
        cout << "Informe um numero inteiro e positivo:" << endl;
        cin >> num;
    }
    cout << "O fatorial do numero é: " << fat(num) << endl;
    return 0;
}
