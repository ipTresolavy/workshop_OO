#include "../functionPrototypes_and_vectors.h"

void comprarUmS1000(void)
{
    double pos;

    cout << "\nInsira a posição inicial do S1000: ";
    cin >> pos;
    cout << "\n" << endl;
    
    baterias->push_back(new Bateria(22000, 40));
    drones->push_back(new S1000("S1000",baterias->back(),pos));
}