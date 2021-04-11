#include "tipo_item.h"

const int CAPACIDADE=100;

class Pilha{
    public:
        Pilha();
        ~Pilha();
        bool estaVazio() const;
        bool estaCheio() const;
        void imprime() const;

        void insere(TipoItem);
        TipoItem remove();
    private:
        int tamanho;
        TipoItem* estrutura;
};