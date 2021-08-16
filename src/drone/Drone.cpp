#include "Drone.hpp"
#include <math.h>

Drone::Drone(string nome, Bateria* bateria, double posicao)
{
    this->nome = nome;
    this->bateria = bateria;
    this->posicao = posicao;
}

Drone::~Drone(){};

void Drone::takeoff(int altura)
{
    if((getBateria())->getCarga() > 0 && bateria->calculaTempoDeVoo() >= altura/60)/*test with "this->"*/
    {
        this->altura = altura;
        bateria->usar((altura/60));
        this->decolado = true;
        bateria->setCarregavel(false);/*test with "this->"*/
    }
}

bool Drone::setPosition(double x, double y)
{
    if(y > 0)
    {
        if(this->decolado)
        {
            if(bateria->calculaTempoDeVoo() >= (sqrt((pow(x - getPosicao(), 2)) + (pow(y - getAltura(), 2))))/60)
            {
                bateria->usar(((sqrt((pow(x - getPosicao(), 2)) + (pow(y - getAltura(), 2))))/60));
                this->posicao = x;
                this->altura = y;
                return true;
            }
        }
        else
            cout << "O " << this->nome << " ainda não foi decolado" << endl;
    }
    else
        cout << "O " << this->nome << " não pode ir a uma altura igual ou abaixo de 0 m" << endl;

    return false;
}

void Drone::land()
{
    this->altura = 0.0;
    this->decolado = false;
    bateria->setCarregavel(true);
}

bool Drone::mapear()
{
    cout << "\nO " << this->nome << " não consegue mapear" << endl;
    return false;
}

void Drone::status()
{
    cout << "Drone " << this->nome << "\n";
    cout << "Bateria com " << bateria->getCarga() << " mAh\n";
    cout << "Drone está na posição (" << this->posicao << ", " << this->altura << ")" << endl;
}

string Drone::getNome()
{
    return this->nome;
}

Bateria* Drone::getBateria()
{
    return this->bateria;
}

double Drone::getPosicao()
{
    return this->posicao;
}

double Drone::getAltura()
{
    return this->altura;
}

bool Drone::getDecolado()
{
    return this->decolado;
}