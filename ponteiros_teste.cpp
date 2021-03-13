#include <iostream>
using namespace std;

int main(){
    int num1=7;
    int num2=5;
    int *apontan1=&num1;
    cout << "\nValor de num1: " << num1;
    cout << "\nEndereco de num1: " << &num1;
    cout << "\n\nValor de num2: " << num2;
    cout << "\nEndereco de num2: " << &num2;
    cout << "\n\nvalor de apontan1: " << *apontan1;
    cout << "\nEndereco de apontan1: " << &apontan1;
    cout << "\nEndereco do valor apontado de apontan1: " << &*apontan1;
    cout << "\n";
    return 0;
}