#pragma once
class ArchivoCliente{
private:
    char nombreArchivo[25];
    FILE *pArchivo;
    int tamanioRegistro;
public:
    ArchivoCliente(const char *nombreArch="clientes.dat");
    int altaCliente();
    bool listado();


};
