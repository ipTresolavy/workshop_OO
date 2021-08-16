#include "../functionPrototypes_and_vectors.h"



void listarDrones(void)
{
    for(unsigned int i = 0; i < drones->size(); ++i)
        cout << "\n\t\b" << i+1 << ". " << (drones->at(i))->getNome() << "\n" << endl;
}