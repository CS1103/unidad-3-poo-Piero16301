#include <stdlib.h>
#include <time.h>
#include "Simulador.h"

void Simulador::generarCargas() {
    srand(time(NULL));
    int numCargas = 3;
    for (int j = 0; j < numCargas; j++) {
        double q,x,y;
        q = 1 + rand() % (20+1-1);
        x = 0 + rand() % (15+1-0);
        y = 0 + rand() % (24+1-0);
        Carga carga(q,x,y);
        cargas.push_back(carga);
    }
}

void Simulador::imprimirVoltajes() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            double vTotal = 0;
            for (int k = 0; k < cargas.size(); k++) {
                vTotal = vTotal + cargas[k].calcularPotencial(dimH[i],dimW[j]);
            }
            cout << "(" << dimH[i] << "," << dimW[j] << "," << vTotal << ")\n";
        }
    }
}