#pragma once

class Cliente{
private:
    char apellido[50];
    char nombre[50];
    char dni[15];
    char celular[15];
    bool estadoCliente;
public:

    void cargarCliente();
    void mostrarCliente();


    ///SETTERS-----------------------------------------------------
    void setApellido(const char *_apellido);
    void setNombre(const char *_nombre);
    void setDNI(const char *_dni);
    void setCelular(const char *_celular);
    void setEstadoCliente(bool _estadoC);

    ///GETTERS-----------------------------------------------------
    const char* getApellido();
    const char* getNombre();
    const char* getDNI();
    const char* getCelular();
    bool getEstadoCliente();

};
