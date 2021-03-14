#include <iostream>
float teste_estatico(){
    int notas[4];
    int soma=0;
    std::cout << "Informe as notas a partir da semana 3 até a semana 6" << std::endl;
    for(int i=0;i<4;i++){
        std::cout << "Informe a nota da semana " << (i+3) << std::endl;
        std::cin >> notas[i];
        soma += notas[i];
    }
    int media=soma/4;
    std::cout << "A media das notas foi: " << media << "\nA soma das medias foi: " << soma;
    return media;
}
int teste_dinamico(){
    int* notas=new int[4];
    int soma=0;
    std::cout << "Informe as notas a partir da semana 3 até a semana 6" << std::endl;
    for(int i=0;i<4;i++){
        std::cout << "Informe a nota da semana " << (i+3) << std::endl;
        std::cin >> notas[i];
        soma += notas[i];
    }
    std::cout << "A media das notas foi: " << (soma/4) << std::endl;
    std::cout << "A soma das medias foi: " << soma << std::endl;
    delete [] notas;
    return (soma/4);
}
int main(){
    std::cout << "Embora que de forma diferente, ambos devem dar o mesmo resultado.\n(claro se forem imputados os mesmos valores :)" << std::endl;
    std::cout << teste_estatico() << std::endl;
    std::cout << teste_dinamico() << std::endl;
    return 0;
}