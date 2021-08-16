#include "../functionPrototypes_and_vectors.h"

void usarDrone(int drone)
{
    unsigned int choice;
    static double position;
    static double height;

    cout << "\n\t1. Decolar" << "\n";
    cout << "\t2. Ir para uma posição" << "\n";
    cout << "\t3. Pousar" << "\n";
    cout << "\t4. Mapear" << "\n";
    cout << "\t5. Sair" << "\n";
    cout << "Escolha uma opção: ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        if(!((drones->at(drone-1))->getDecolado()))
        {
            cout << "\nInsira a altura desejada: ";
            cin >> height;
            (drones->at(drone-1))->takeoff(height);
        }
        else
            cout << (drones->at(drone-1))->getNome() << " já está decolado\n";
        cout << "\n" <<(drones->at(drone-1))->getNome() << " está na posição " << (drones->at(drone-1))->getPosicao() << "m e a uma altura de " << (drones->at(drone-1))->getAltura() << "m\n";
        break;
    case 2:
        if((drones->at(drone-1))->getDecolado())
        {
            cout << "\nInsira a posição horizontal desejada: ";
            cin >> position;
            cout << "\nInsira a altura desejada: ";
            cin >> height;
            (drones->at(drone-1))->setPosition(position, height);
        }
        else
            cout << (drones->at(drone-1))->getNome() << " ainda não foi decolado\n";
        cout << "\n" << (drones->at(drone-1))->getNome() << " está na posição " << (drones->at(drone-1))->getPosicao() << "m e a uma altura de " << (drones->at(drone-1))->getAltura() << "m\n";
        break;
    case 3:
        if((drones->at(drone-1))->getDecolado())
            (drones->at(drone-1))->land();
        else
            cout << (drones->at(drone-1))->getNome() << " já está pousado\n";
        cout << "\n" << (drones->at(drone-1))->getNome() << " está na posição " << (drones->at(drone-1))->getPosicao() << "m e a uma altura de " << (drones->at(drone-1))->getAltura() << "m\n";
        break;
    case 4:
        (drones->at(drone-1))->mapear();
        break;
    case 5:
        cout << "\nSaindo..." << endl;
        break;
    } 

    if(choice != 5)
        usarDrone(drone);
}
