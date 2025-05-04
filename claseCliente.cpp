#include <iostream>
#include <cstring>
#include "claseCliente.h"
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
    void Cliente::setApellido(const char *_apellido) {strcpy(apellido, _apellido);}
    void Cliente::setNombre(const char *_nombre) {strcpy(nombre, _nombre);}
    void Cliente::setDNI(const char *_dni) {strcpy(dni, _dni);}
    void Cliente::setCelular(const char *_celular) {strcpy(celular, _celular);}
    void Cliente::setEstadoCliente(bool _estadoC) {estadoCliente=_estadoC;}

    ///GETTERS-----------------------------------------------------
    const char* Cliente::getApellido() {return apellido;}
    const char* Cliente::getNombre() {return nombre;}
    const char* Cliente::getDNI() { return dni;}
    const char* Cliente::getCelular() {return celular;}
    bool Cliente::getEstadoCliente() {return estadoCliente;}

