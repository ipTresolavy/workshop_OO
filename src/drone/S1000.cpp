#include "S1000.hpp"

S1000::S1000(string nome, Bateria* bateria, double posicao) : Drone(nome, bateria, posicao)
{}

S1000::~S1000(){};

bool S1000::mapear()
{
    if(((bateria->calculaTempoDeVoo()) >= 10) && (decolado))
    {
        cout << "Mapeando..." << "\n";
        cout << "----\\ ----\\ |   | |   |" << "\n";
        cout << "|   / |   | |   | |   |" << "\n";
        cout << "|---\\ |---/ |   | |---|" << "\n";
        cout << "|   | | \\   |   | |   |" << "\n";
        cout << "|   | |  \\  |   | |   |" << "\n";
        cout << "|---/ |   \\ \\---/ |   |" << "\n";
        cout << "Mapeamento feito!" << endl;
        return true;
    }
    else
        cout << "O " << this->nome << " não consegue mapear" << endl;
    return false;
}