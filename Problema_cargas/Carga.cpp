#include <stdio.h>
#include <math.h>
#include "Carga.h"

Carga::Carga(double carga, double posX, double posY) : carga{carga}, posX{posX}, posY{posY} {}

double Carga::calcularPotencial(double distX, double distY) {
    double Voltaje;
    double Distancia;
    Distancia = sqrt(pow(distX-posX,2)+pow(distY-posY,2));
    Voltaje = (8.99*pow(10,9)*carga)/Distancia;
    return Voltaje;
}