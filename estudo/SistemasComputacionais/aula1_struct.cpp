#include <iostream>
using namespace std;
struct mamifero {
    char especie[50];
    int patas;
    char s0m[50];
};
struct inseto{
    char especie[50];
    int asas;
    int patas;
    bool emiteSom;
};
/*typedef struct inseto Inseto;
typedef struct mamifero Mamifero;*/

void criaInseto(){
    struct inseto ins;
    cout << "Informe a especie do inseto:" << endl;
    cin >> ins.especie;
    cout << "Informe a quantidade de asas do inseto:" << endl;
    cin >> ins.asas;
    cout << "Informe a quantidade de patas do inseto:" << endl;
    cin >> ins.patas;
    cout << "Informe se o inseto emite som: [s/n]" << endl;
    char emite;
    
    do{
        cin >> emite;
        if(emite == 's'){
            ins.emiteSom=true;
        }else {
            ins.emiteSom=false;
        }
    }while (emite == 's' || emite == 'n');
    
    cout << "***************************************************" << endl << "Imprimindo dados do inseto:" << endl;
    cout << "Especie do inseto: " << ins.especie << endl;
    if(ins.asas > 0){
        cout << "O inseto é voador e possui " << ins.asas << " asas" << endl;
    } else {
        cout << "O inseto não é voador." << endl;
    }
    cout << "O inseto possui " << ins.patas << " patas." << endl;
    if(ins.emiteSom){
        cout << "O inseto emite sons..." << endl;
    } else {
        cout << "O bicho é silencioso, pode estar atrás de você..." << endl;
    }
}
void criaMamifero(){
    struct mamifero mam;
    cout << "Informe a especie do mamifero (em letras minusculas):" << endl;
    cin >> mam.especie;
    if(mam.especie == "vaca" || mam.especie == "boi"){
        mam.s0m[0]='M';
        mam.s0m[1]='u';
        mam.s0m[2]='u';
        mam.s0m[3]='u';
        mam.s0m[4]='u';
        mam.s0m[5]='u';
        mam.s0m[6]='u';
        mam.s0m[7]=' ';
        mam.s0m[8]=' ';
        mam.s0m[9]=' ';
        mam.s0m[10]='M';
        mam.s0m[11]='u';
        mam.s0m[12]='u';
        mam.s0m[13]='u';
        mam.s0m[14]='u';
        mam.s0m[15]='u';
        mam.s0m[16]='u';
        mam.patas=4; 
    }else if(mam.especie == "cachorro" || mam.especie == "cadela"){
        mam.s0m[0]='A';
        mam.s0m[1]='u';
        mam.s0m[2]=' ';
        mam.s0m[3]='A';
        mam.s0m[4]='u';
        mam.s0m[5]=' ';
        mam.s0m[6]='a';
        mam.s0m[7]='u';
        mam.s0m[8]=' ';
        mam.s0m[9]='A';
        mam.s0m[10]='u';
        mam.s0m[11]=' ';
        mam.s0m[12]='A';
        mam.s0m[13]='u';
        mam.s0m[14]=' ';
        mam.s0m[15]='a';
        mam.s0m[16]='u';
        mam.patas=4;
    }else{
        cout << "Ah, não sei imitar o som nem a quantidade de patas, pode me informar?" << endl;
        cout << "Informe a quantidade de patas:" << endl;
        cin >> mam.patas;
        cout << "Informe o som que ele emite:" << endl;
        cin >> mam.s0m;
    }

    cout << "***************************************************" << endl << "Imprimindo dados do mamifero:" << endl;
    cout << "O bicho é um(a) : " << mam.especie << endl;
    cout << "O bicho emite o som parecido com: " << mam.s0m << endl;
    cout << "O bicho tem " << mam.patas << " patas." << endl;
}
int main(){
    int a=1;
    do{
        char bicho=' ';
        cout << "Informe o tipo de bicho que deseja criar e visualizar: [m:mamifero / i:inseto]" << endl;
        cin >> bicho;
        if(bicho == 'm' || bicho == 'M'){
            criaMamifero();
            a=1;
        } else if(bicho == 'i' || bicho == 'I') {
            criaInseto();
            a=1;
        }else{
            a=0;
        }
    }while(a >= 1);
}