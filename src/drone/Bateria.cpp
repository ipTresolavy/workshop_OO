#include "Bateria.hpp"

Bateria::Bateria(int mah, int tempoDeCarregamento)
{
    this->cargaTotal = mah;
    this->tempoTotal = tempoDeCarregamento;
}

Bateria::~Bateria(){};

bool Bateria::carregar(int tempo)
{
    if((carga) < (cargaTotal))
    {
        if((carga = carga + (cargaTotal * tempo)/(tempoTotal)) > cargaTotal)
        {
            (carga) = (cargaTotal);
            setCarregavel(false);
        }
        return true;
    }
    else
        cout << "Carga já está no máximo" << endl;
    return false;
}

bool Bateria::usar(int tempo)
{

    if(getCarga() > 0 && (carga = (carga) - (cargaTotal*tempo)/(tempoTotal)) > 0U) 
        return true;
    else
    {
        this->carga = 0U; 
        return false;
    }
}

int Bateria::calculaTempoDeVoo()
{
    return ((this->tempoTotal)*((this->carga)/(this->cargaTotal)));
}

int Bateria::getCarga()
{
    return (this->carga);
}

int Bateria::getTempoDeCarregamento()
{
    return (this->tempoTotal);
}

int Bateria::getMah()
{
    return (this->cargaTotal);
}

bool Bateria::getUso()
{
    if(this->uso)
        return true;
    else
        return false;
}

bool Bateria::getCarregavel()
{
    if(this->carregavel)
        return true;
    else
        return false;
}

void Bateria::setUso(bool uso)
{
    this->uso = uso;
}

void Bateria::setCarregavel(bool carregavel)
{
    this->carregavel = carregavel;
}

void Bateria::status()
{
    cout << "Bateria com capacidade " << this->cargaTotal << 
            " e tempo de carregamento " << this->tempoTotal << "\n";
    
    cout << "Com carga atual: " << this->carga << "\n";
    
    cout << "Tempo de voo disponivel: " << calculaTempoDeVoo() << "\n";
    
    cout << "Esta sendo usada: ";

    if(getUso())
        cout << "sim" << "\n";
    else 
        cout << "não" << "\n";
    
    cout << "Pode ser carregada no momento: ";

    if(getCarregavel())
        cout << "sim" << endl;
    else 
        cout << "não" << endl;
}