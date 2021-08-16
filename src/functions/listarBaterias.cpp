#include "../functionPrototypes_and_vectors.h"



void listarBaterias(void)
{
    for(unsigned int i = 0; i < baterias->size(); ++i)
    {
        cout << "\n\t\b" << i+1 << ".\n\tCarga total: " << (baterias->at(i))->getMah() << "\n";
        cout << "\tTempo total de carregamento: " << (baterias->at(i))->getTempoDeCarregamento() << "\n" << endl;
    }
}