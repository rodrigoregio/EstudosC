#include <iostream>
using namespace std;
int main(){
    int a=5000;
    cout << "Testando se em C++ tem o variavel /= x \n";
    while (a > 10){
        a/=2;
        cout << "O valor de A eh: " << a << "\n";
    }
    cout << "Se deu certo você vera esta mensagem...\n";
}