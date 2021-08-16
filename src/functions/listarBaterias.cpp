#include "../functionPrototypes_and_vectors.hpp"

void listarBaterias(void)
{
    extern vector<Bateria*> *baterias;

    for(unsigned int i = 0; i < baterias->size(); ++i)
    {
        cout << "\n\t\b" << i+1 << ".\n\tCarga total: " << (baterias->at(i))->getMah() << "(" << (baterias->at(i))->getCarga() <<")\n";
        cout << "\tTempo total de carregamento: " << (baterias->at(i))->getTempoDeCarregamento() << "(" << (baterias->at(i))->calculaTempoDeVoo() <<")\n" << endl;
    }
}