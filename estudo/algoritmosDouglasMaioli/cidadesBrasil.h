//nos arquivos .h colocamos somente os metodos e classes com ';'
class carro{
    private:
        int anoFundacao;
        std::string nome[50];
        int habitantes;
        int area;
        float densidadeDemografica;
    public:
        //Construtor
        cidadesBrasil(std::__cxx11::string n,int af,int a,int h,float dd);
        //getters
        int getAnoFundacao();
        int getHabitantes();
        int getArea();
        string getNome();
        float getDensidadeDemografica();
        //setters
        void setAnoFundacao(int ano);
        void setHabitantes(int hab);
        void setArea(int ar);
        void setNome(string nom);
        void setDensidadeDemografica(int dd);
};