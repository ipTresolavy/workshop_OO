#include "../functionPrototypes_and_vectors.h"

void carregarBateria(void)
{
    unsigned int duration;
    cout << "\nInsira a duração de tempo durante a qual desejas carregas as baterias (horas): ";
    cin >> duration;

    for(unsigned int i = 0; i < baterias->size(); ++i)
    {
        if((baterias->at(i))->carregar(duration))
            cout << "\nBateria " << (i+1U) << " carregada" << endl;
    }
}