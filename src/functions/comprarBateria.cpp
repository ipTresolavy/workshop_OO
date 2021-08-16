#include "../functionPrototypes_and_vectors.h"

bool comprarBateria(void)
{
    int carga;
    int tempoDeCarregamento;

    cout << "\nDigite a carga da bateria (mAh): ";
    cin >> carga;
    if(carga >= 0)
    {
        cout << "Digite o tempo de carregamento: ";;
        cin >> tempoDeCarregamento;

        if(tempoDeCarregamento >= 0)
        {
            baterias->push_back(new Bateria(carga, tempoDeCarregamento));
            cout << endl;
            return true;
        }
        else
            cout << "\nTempo de carregamento: Houve um erro na inserção de valores ou o valor inserido foi negativo" << endl;
        
        cout << endl;
    }
    else
        cout << "\nCarga: Houve um erro na inserção de valores ou o valor inserido foi negativo" << endl;

    return false;
}