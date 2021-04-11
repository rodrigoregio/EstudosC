#ifndef CARRO_H
#define CARRO_H

class Carro{
    private:
        int portas;
        int rodas;
        float quilometragem;
    public:
        Carro(int portas=0, int rodas=0, float quilometragem=0.0);
        int getPortas() const;
        void setPortas(int portas);
        int getRodas() const;
        void setRodas(int rodas);
        float getQuilometragem()const;
        void setQuilometragem(float km);
        void print()const;
};
#endif