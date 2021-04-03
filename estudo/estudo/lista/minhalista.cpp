#include <iostream>
using namespace std;
class minhalista{
private:
    int valor;
    int *nextItem;
public:
    int getValor(){
        return valor;
    }
    int getNextItem(){
        return *nextItem;
    }
    void setValor(int valor){
        this->valor=valor;
    }
    void setNextInt(int *nextItem){
        this->valor=valor;
    }
}