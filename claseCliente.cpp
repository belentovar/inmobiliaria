#include <iostream>
#include <cstring>
#include "claseCliente.h"
#include "validaciones.h"

using namespace std;

    void Cliente::cargarCliente(){
    cin.ignore();
    cout<<"INGRESE APELLIDO DEL CLIENTE: ";cin.getline(apellido,50);
    setApellido(apellido);
    cout<<"INGRESE NOMBRE DEL CLIENTE: ";cin.getline(nombre, 50);
    setNombre(nombre);
    cout<<"INGRESE EL DNI DEL CLIENTE: ";cin.getline(dni,16);
    setDNI(dni);
    cout<<"INGRESE EL CELULAR DEL CLIENTE: ";cin.getline(celular,16);
    setCelular(celular);
    estadoCliente=true;
    }

    void Cliente::mostrarCliente(){
        cout<<"APELLIDO DEL CLIENTE: "<<getApellido()<<endl;
        cout<<"NOMBRE DEL CLIENTE: "<<getNombre()<<endl;
        cout<<"DNI DEL CLIENTE: "<<getDNI()<<endl;
        cout<<"CELULAR DEL CLIENTE: "<<getCelular()<<endl;
        cout<<endl;

        ///PRUEBA DE ESTADO----
        ///cout<<"ESTADO DEL CLIENTE"<<getEstado()<<endl;
    }

    ///SETTERS-----------------------------------------------------
    void Cliente::setApellido(const char *_apellido) {
        if(!esTexto(_apellido, strlen(_apellido))) {
            strcpy(apellido, "Apellido invalido");
            return;
        }
        
        if(_apellido != nullptr && strlen(_apellido) <= 50){ 
            strcpy(apellido, _apellido);
        } else {
            strcpy(apellido, "Apellido invalido");
        }
    }

    void Cliente::setNombre(const char *_nombre) {
        if(!esTexto(_nombre, strlen(_nombre))) {
            strcpy(nombre, "Nombre invalido");
            return;
        }
        
        if(_nombre != nullptr && strlen(_nombre) <= 50){ 
            strcpy(nombre, _nombre);
        } else {
            strcpy(nombre, "Nombre invalido");
        }
    }

    void Cliente::setDNI(const char *_dni) {
        if(!esNumero(_dni, strlen(_dni))) {
            strcpy(dni, "DNI invalido");
            return;
        }

        if(_dni != nullptr && strlen(_dni) <= 12){ 
            strcpy(dni, _dni);
        } else {
            strcpy(dni, "DNI invalido");
        }
    }

    void Cliente::setCelular(const char *_celular) {
        if(!esNumero(_celular, strlen(_celular))) {
            strcpy(celular, "error");
            return;
        }

        if(_celular != nullptr && strlen(_celular) <= 15){ 
            strcpy(celular, _celular);
        } else {
            strcpy(celular, "error");
        }
    }

    void Cliente::setEstadoCliente(bool _estadoC) {
        estadoCliente = _estadoC;
    }

    ///GETTERS-----------------------------------------------------
    const char* Cliente::getApellido() {return apellido;}
    const char* Cliente::getNombre() {return nombre;}
    const char* Cliente::getDNI() { return dni;}
    const char* Cliente::getCelular() {return celular;}
    bool Cliente::getEstadoCliente() {return estadoCliente;}

