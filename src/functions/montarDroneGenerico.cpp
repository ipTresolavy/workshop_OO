#include "../functionPrototypes.hpp"

void montarDroneGenerico(void)
{
    string nome;
    double pos;
    int batteryChoice;

    extern vector<Bateria*> *baterias;
    extern vector<Drone*> *drones;

    if(!(baterias->empty()))
    {
        cout << "\nInsira o nome do drone: ";
        cin >> nome;

        cout << "\n";
        listarBaterias();
        cout << "Insira a bateria que deseja usar: ";
        cin >> batteryChoice;

        cout << "\nInsira a posição inicial do drone: ";
        cin >> pos;
        cout << endl;

        drones->push_back(new Drone(nome, baterias->at(batteryChoice-1), pos));
    }
    else
        cout << "Não há baterias disponíveis. Por favor, compre uma bateria" << endl;
    
}