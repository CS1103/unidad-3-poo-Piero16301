#include "Simulador.h"

#include <stdlib.h>
#include <time.h>
#include "Simulador.h"

void Simulador::generarCargas() {
    srand(time(NULL));
    int numCargas = 4;
    for (int j = 0; j < numCargas; j++) {
        double q,x,y;
        q = 1 + rand() % (30+1-1);
        x = 0 + rand() % (100+1-0);
        y = 0 + rand() % (100+1-0);
        Carga carga(q,x,y);
        cargas.push_back(carga);
    }
}

void Simulador::imprimirVoltajes() {
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            double vTotal = 0;
            for (int k = 0; k < cargas.size(); k++) {
                vTotal = vTotal + cargas[k].calcularPotencial(dimH[i],dimW[j]);
            }
            cout << "(" << dimH[i] << "," << dimW[j] << "," << vTotal << ")\n";
        }
    }
}

void Simulador::llenarCasillas() {
    for (int i = 0; i < 21; i++) {
        dimH[i] = i*5;
    }
    for (int j = 0; j < 21; j++) {
        dimW[j] = j*5;
    }
}