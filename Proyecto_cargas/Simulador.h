#ifndef PROYECTO_CARGAS_SIMULADOR_H
#define PROYECTO_CARGAS_SIMULADOR_H


#include <iostream>
#include <vector>
#include "Carga.h"

using namespace std;

class Simulador {
private:
    int dimH[21]={};
    int dimW[21]={};
    vector <Carga> cargas;

public:
    Simulador() {};
    void generarCargas();
    void imprimirVoltajes();
    void llenarCasillas();
};

#endif //PROYECTO_CARGAS_SIMULADOR_H
