#ifndef CLASES_Y_RELACIONES_SIMULADOR_H
#define CLASES_Y_RELACIONES_SIMULADOR_H

#include <iostream>
#include <vector>
#include "Carga.h"

using namespace std;

class Simulador {
private:
    int dimH[6] = {0, 3, 6, 9, 12, 15};
    int dimW[7] = {0, 4, 8, 12, 16, 20, 24};
    vector <Carga> cargas;

public:
    Simulador() {};
    void generarCargas();
    void imprimirVoltajes();
};


#endif //CLASES_Y_RELACIONES_SIMULADOR_H
