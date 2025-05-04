#include <iostream>
#include "claseCliente.h"
#include "ArchivoCliente.h"
#include <cstring>
#include <string.h>
using namespace std;

    ArchivoCliente::ArchivoCliente(const char *nombreArch){
        strcpy(nombreArchivo, nombreArch);
        tamanioRegistro=sizeof(Cliente);
        pArchivo=nullptr;
    }

    ///------------------------------------------------------------

    int ArchivoCliente::altaCliente(){
        Cliente cliente;
        pArchivo=fopen(nombreArchivo,"ab");

        if(pArchivo==nullptr){
           return -1;
        }

        cliente.cargarCliente();
        int resultado=fwrite(&cliente, tamanioRegistro,1,pArchivo);


        fclose(pArchivo);
        return resultado;
    }

    ///------------------------------------------------------------

    bool ArchivoCliente::listado(){
        Cliente cliente;
        pArchivo=fopen(nombreArchivo,"rb");

        if(pArchivo==nullptr){
           return false;
        }

        while(fread(&cliente, tamanioRegistro,1,pArchivo)==1){
            if(cliente.getEstadoCliente()){
                cliente.mostrarCliente();
            }
        }
        fclose(pArchivo);
        return true;
    }

    ///------------------------------------------------------------

    Cliente ArchivoCliente::buscarPorDni(char *_dni){
        Cliente cliente;
        pArchivo=fopen(nombreArchivo,"rb");

        if(pArchivo==nullptr){
            cout <<"NO SE PUDO ABRIR EL ARCHIVO"<<endl;
            return cliente;
        }

        while(fread(&cliente, tamanioRegistro,1,pArchivo)==1){
            if(strcmp(cliente.getDNI(),_dni)==0){
                cliente.mostrarCliente();
            }
        }
        fclose(pArchivo);




    }

