#include "tipo_item.h"
const int CAPACIDADE=10;
class Fila{
    public:
        Fila();//constroi
        ~Fila();//destroi
        bool estaVazia() const;
        bool estaCheia() const;
        void imprime() const;
        int itensNaFila() const;

        void insere(TipoItem);
        TipoItem remove();
    private:
        int inicio;
        int fim;
        TipoItem* estrutura;
};
//este é o TAD ou "tipo abstrato de dado"...