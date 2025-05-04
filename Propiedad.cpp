#include <iostream>
#include "Propiedad.h"
#include "cstring"
using namespace std;




    ///SETTERS--------------------------------------------------------
    void Propiedad::setCodInmueble(int cod) { codInmueble = cod; }
    void Propiedad::setTipoPropiedad(int tipo) { tipoPropiedad = tipo; }
    void Propiedad::setCalle(const char* c) { strcpy(calle, c); }
    void Propiedad::setNumero(const char* n) { strcpy(numero, n); }
    void Propiedad::setAntiguedad(int a) { antiguedad = a; }
    void Propiedad::setSuperficieM2(float s) { superficieM2 = s; }
    void Propiedad::setHabitaciones(int h) { habitaciones = h; }
    void Propiedad::setPrecioVenta(float p) { precioVenta = p; }
    void Propiedad::setPrecioAlquiler(float p) { precioAlquiler = p; }
    void Propiedad::setDniDuenio(const char* d) { strcpy(dniDuenio, d); }
    void Propiedad::setEstadoPropiedad(bool estado) { estadoPropiedad = estado; }

    ///GETTERS---------------------------------------------------------
    int Propiedad::getCodInmueble() { return codInmueble; }
    int Propiedad::getTipoPropiedad() { return tipoPropiedad; }
    const char* Propiedad::getCalle() { return calle; }
    const char* Propiedad::getNumero() { return numero; }
    int Propiedad::getAntiguedad() { return antiguedad; }
    float Propiedad::getSuperficieM2() { return superficieM2; }
    int Propiedad::getHabitaciones() { return habitaciones; }
    float Propiedad::getPrecioVenta() { return precioVenta; }
    float Propiedad::getPrecioAlquiler() { return precioAlquiler; }
    const char* Propiedad::getDniDuenio() { return dniDuenio; }
    bool Propiedad::getEstadoPropiedad() { return estadoPropiedad; }

