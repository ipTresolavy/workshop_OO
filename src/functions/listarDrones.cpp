#include "../functionPrototypes_and_vectors.hpp"

void listarDrones(void)
{
    extern vector<Drone*> *drones;

    for(unsigned int i = 0; i < drones->size(); ++i)
        cout << "\n\t\b" << i+1 << ". " << (drones->at(i))->getNome() << "\n" << endl;
}