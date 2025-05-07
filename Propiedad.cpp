#include <iostream>
#include "Propiedad.h"
#include "cstring"
#include "validaciones.h"

using namespace std;

    ///SETTERS--------------------------------------------------------
    void Propiedad::setCodInmueble(int _codigo) {
        if(_codigo > 0){
            codInmueble = _codigo;
        } else {
            codInmueble = 0;
        }
    }
    void Propiedad::setTipoPropiedad(int _tipoInmueble) {
        if(_tipoInmueble == 1 || _tipoInmueble == 2){ 
            tipoPropiedad = _tipoInmueble;
        } else {
            tipoPropiedad = 0;
        }
    }
    void Propiedad::setCalle(const char* _calle) {
        if(!esTexto(_calle, strlen(_calle))) {
            strcpy(calle, "Calle invalida");
            return;
        }
        
        if(_calle != nullptr && strlen(_calle) <= 50){ 
            strcpy(calle, _calle);
        } else {
            strcpy(calle, "Calle invalida");
        }
    }
    void Propiedad::setNumero(const char* _numero) {
        if(_numero != nullptr && strlen(_numero) <= 6){ 
            strcpy(numero, _numero);
        } else {
            strcpy(numero, "0");
        }
    }
    void Propiedad::setAntiguedad(int _antiguedad) {
        if(_antiguedad >= 0){
            antiguedad = _antiguedad;
        } else {
            antiguedad = 0;
        }
    }
    void Propiedad::setSuperficieM2(float _superficie) {
        if(_superficie > 0){
            superficieM2 = _superficie;
        } else {
            superficieM2 = 0;
        }
    }
    void Propiedad::setHabitaciones(int _habitaciones) {
        if(_habitaciones > 0){
            habitaciones = _habitaciones;
        } else {
            habitaciones = 0;
        }
    }
    void Propiedad::setPrecioVenta(float _precioVenta) {
        if(_precioVenta >= 0){
            precioVenta = _precioVenta;
        } else {
            precioVenta = 0;
        }
    }
    void Propiedad::setPrecioAlquiler(float _precioAlquiler) {
        if(_precioAlquiler >= 0){
            precioAlquiler = _precioAlquiler;
        } else {
            precioAlquiler = 0;
        }
    }
    void Propiedad::setDniDuenio(const char* _dniDuenio) {
        if(!esNumero(_dniDuenio, strlen(_dniDuenio))){
            strcpy(dniDuenio, "DNI invalido");
            return;
        }

        if(_dniDuenio != nullptr && strlen(_dniDuenio) <= 12){ 
            strcpy(dniDuenio, _dniDuenio);
        } else {
            strcpy(dniDuenio, "DNI invalido");
        }
    }
    void Propiedad::setEstadoPropiedad(bool _estado) {
        estadoPropiedad = _estado;
    }

    ///GETTERS---------------------------------------------------------
    int Propiedad::getCodInmueble() {
        return codInmueble;
    }
    int Propiedad::getTipoPropiedad() {
        return tipoPropiedad;
    }
    const char* Propiedad::getCalle() {
        return calle;
    }
    const char* Propiedad::getNumero() {
        return numero;
    }
    int Propiedad::getAntiguedad() {
        return antiguedad;
    }
    float Propiedad::getSuperficieM2() {
        return superficieM2;
    }
    int Propiedad::getHabitaciones() {
        return habitaciones;
    }
    float Propiedad::getPrecioVenta() {
        return precioVenta;
    }
    float Propiedad::getPrecioAlquiler() {
        return precioAlquiler;
    }
    const char* Propiedad::getDniDuenio() {
        return dniDuenio;
    }
    bool Propiedad::getEstadoPropiedad() {
        return estadoPropiedad;
    }
