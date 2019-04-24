#ifndef CLASES_Y_RELACIONES_CARGA_H
#define CLASES_Y_RELACIONES_CARGA_H


class Carga {

private:
    double carga;
    double posX;
    double posY;

public:
    Carga(double carga, double posX, double posY);
    double calcularPotencial(double distX, double distY);
};


#endif //CLASES_Y_RELACIONES_CARGA_H
