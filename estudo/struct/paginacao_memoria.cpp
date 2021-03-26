#include <iostream>
#include <stddef.h>
using namespace std;
typedef struct moldura{
    int bv;//bit de validade
    char conteudoRam;
} frame;
typedef struct pagina{
    int bv; //bit de validade do disco
    char conteudoDisco;
    frame *pv;
}page;
frame RAM[5];
page DISCO[25];
int main(){
    //Inicializando a ram
    for(int i=0;i<5;i++){
        RAM[i].bv=0;
    }
    //inicializando o disco
    for(int i=0; i < 25; i++){
        DISCO[i].bv=1;
        DISCO[i].conteudoDisco='a'+i;
        DISCO[i].pv=NULL;
        if((DISCO[i].conteudoDisco == 'r') || (DISCO[i].conteudoDisco == 'o') 
            || (DISCO[i].conteudoDisco == 'd') || (DISCO[i].conteudoDisco == 'i') 
            || (DISCO[i].conteudoDisco == 'g')){
            for(int j=0;j<5;j++){
                if(RAM[j].bv == 0){
                    RAM[j].bv=1;
                    DISCO[i].pv=&RAM[j];
                    RAM[j].conteudoRam=DISCO[i].conteudoDisco;j=5;
                }
            }
        }
    }
    cout << "\nVisualização do Disco\n" << endl;
    for(int i=0;i<25;i++){
        cout << i+1 << "ª pagina [ conteudo: " << DISCO[i].conteudoDisco << "| BV: " << DISCO[i].bv << "| RAM: " << DISCO[i].pv << "]" << endl;
    }
    cout << "\nVisualização da RAM\n" << endl;
    for(int i=0;i<5;i++){
        cout << i+1 << "ª frame [ conteudo: " << RAM[i].conteudoRam << "| BV: " << RAM[i].bv << "]" << endl;
    }
    return 0;
}