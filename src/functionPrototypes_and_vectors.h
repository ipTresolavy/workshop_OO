#ifndef VECTORS_AND_FUNCTIONS
#define VECTORS_AND_FUNCTIONS

#include "drone/Bateria.hpp"
#include "drone/Drone.hpp"
#include "drone/S1000.hpp"
#include <iostream>
#include <vector>

using namespace std;

bool comprarBateria(void);
void criaBateria(void);
void comprarUmS1000(void);
void montarDroneGenerico(void);
void usarDrone(int drone);
void carregarBateria(void);
void listarDrones(void);
void listarBaterias(void);

vector<Bateria*> *baterias = new vector<Bateria*>();
vector<Drone*> *drones = new vector<Drone*>();

#endif