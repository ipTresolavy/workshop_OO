#include "functionPrototypes_and_vectors.h"
#include "drone/Bateria.hpp"
#include "drone/Drone.hpp"
#include "drone/S1000.hpp"
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    unsigned short choice;

    cout << "\n\t1. Comprar bateria" << "\n";
    cout << "\t2. Comprar um S1000" << "\n";
    cout << "\t3. Montar um drone genérico" << "\n";
    cout << "\t4. Usar os drones existentes" << "\n";
    cout << "\t5. Carregar baterias disponíveis" << "\n";
    cout << "\t6. Listar drones existentes" << "\n";
    cout << "\t7. Listar baterias existentes" << "\n";
    cout << "\t8. Sair" << "\n";
    cout << "Escolha uma opção: ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
        case 1:
            comprarBateria();           
            break;
        case 2:
            comprarUmS1000();
            break;
        case 3:
            montarDroneGenerico();
            break;
        case 4:
            listarDrones();
            cout << "\nEscolha um dos drones existentes listados acima: ";
            cin >> choice;
            if(((drones->at(choice-1))->getBateria())->getCarga() != 0)
                usarDrone(choice);
            else
                cout << "\nA bateria deste drone ainda não foi carregada!" << endl;
            choice = 0; //prevents accidental exit
            break;
        case 5:
            carregarBateria();
            break;
        case 6:
            listarDrones();
            break;
        case 7:
            listarBaterias();
            break;
        case 8:
            cout << "\nSaindo..." << endl;
            break;
    }

    if(choice != 8)
        main();
    
    return 0;
}



