#ifndef BATERIA_H
#define BATERIA_H

#include <iostream>
using namespace std;

class Bateria 
{
    public:
        Bateria(int mah, int tempoDeCarregamento);
        ~Bateria();
        bool carregar(int tempo);
        bool usar(int tempo);
        int calculaTempoDeVoo();

        int getCarga();
        int getTempoDeCarregamento();
        int getMah();
        bool getUso();
        bool getCarregavel();

        void setUso(bool uso);
        void setCarregavel(bool carregavel);
        void status();
    
    private:
        unsigned int cargaTotal;
        unsigned int tempoTotal;

        unsigned int carga = 0U;
        bool uso = false;
        bool carregavel = true;
};

#endif
