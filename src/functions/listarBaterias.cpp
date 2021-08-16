#include "../functionPrototypes.hpp"

void listarBaterias(void)
{
    extern vector<Bateria*> *baterias;

    for(unsigned int i = 0; i < baterias->size(); ++i)
    {
        cout << "\n\t\b" << i+1 << ".\n\tCarga total: " << (baterias->at(i))->getMah() << "mAh (" << (baterias->at(i))->getCarga() <<"mAh carregados)\n";
        cout << "\tTempo total de carregamento: " << (baterias->at(i))->getTempoDeCarregamento() << " horas (" << (baterias->at(i))->calculaTempoDeVoo() <<" horas de voo)\n" << endl;
    }
}