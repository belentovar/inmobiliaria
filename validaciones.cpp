#include "validaciones.h"

bool esNumero(const char *texto, int tamanio){
    for (int i=0; i<tamanio; i++){
        if(!isdigit(texto[i])) return false;
    }
    return true;
}

bool esTexto(const char *texto, int tamanio){
    for (int i=0; i<tamanio; i++){
        if(!isalpha(texto[i]) && !isspace(texto[i])) return false;
    }
    return true;
}

bool esCadenaVacia(const char *texto){
    if (texto[0] == '\0') {
        return true;
    }
    return false;
} 