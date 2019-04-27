#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "Carga.h"
#include "Simulador.h"

#ifdef CATCH_CONFIG_MAIN

using namespace std;

//int main() {
    /*//Vector que va a almacenar las cargas
    vector <Carga> cargas;
    //Declaracion de las cargas
    int numCargas;
    cout << "Cargas a ingresar: ";
    cin >> numCargas;
    for (int j = 0; j < numCargas; j++) {
        double q,x,y;
        cout << "Ingrese la carga de q" << j+1 << ": "; cin >> q;
        cout << "Ingrese la posicion en X de q" << j+1 << ": "; cin >> x;
        cout << "Ingrese la posicion en Y de q" << j+1 << ": "; cin >> y;
        Carga carga(q,x,y);
        cargas.push_back(carga);
    }
    //Punto de efecto de las cargas
    double x,y;
    cout << "Ingrese el punto de efecto en X: "; cin >> x;
    cout << "Ingrese el punto de efecto en Y: "; cin >> y;
    //Sumamos el potencial de las cargas
    double vTotal = 0;
    for (int i = 0; i < cargas.size(); i++) {
        vTotal = vTotal + cargas[i].calcularPotencial(x,y);
    }
    //Imprimir el resultado
    cout << "\nEl potencial total es: " << vTotal << " voltios." << '\n';*/

    /*Simulador simulador;

    simulador.llenarCasillas();
    simulador.generarCargas();
    simulador.imprimirVoltajes();

    return 0;
}*/

#endif