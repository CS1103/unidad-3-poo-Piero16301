#ifndef PROYECTO_CARGAS_CARGA_H
#define PROYECTO_CARGAS_CARGA_H


class Carga {

private:
    double carga;
    double posX;
    double posY;

public:
    Carga(double carga, double posX, double posY);
    double calcularPotencial(double distX, double distY);
};


#endif //PROYECTO_CARGAS_CARGA_H
