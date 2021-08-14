#include "drone/Bateria.hpp"
#include "drone/Drone.hpp"
#include "drone/S1000.hpp"
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

enum choices{one = 1, two, three, four, five, six, seven, eight}choice;

vector<Bateria*> *baterias = new vector<Bateria*>();

void comprarBateria(int mah, int tempoDeCarregamento);

int main()
{
    cout << "\t1. Comprar bateria" << "\n";
    cout << "\t2. Comprar um S1000" << "\n";
    cout << "\t3. Montar um drone genérico" << "\n";
    cout << "\t4. Usar os drones existentes" << "\n";
    cout << "\t5. Carregar baterias disponíveis" << "\n";
    cout << "\t6. Listar drones existentes" << "\n";
    cout << "\t7. Listar baterias existentes" << "\n";
    cout << "\t8. Sair" << endl;

    scanf("%d", (int*)choice);

    switch(choice)
    {
        case one:
            break;
        case two:
            break;
        case three:
            break;
        case four:
            break;
        case five:
            break;
        case six:
            break;
        case seven:
            break;
        case eight:
            break;
    }

    if(choice != eight)
        main();
    
    return 0;
}