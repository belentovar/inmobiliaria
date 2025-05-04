#pragma once

class Propiedad{
private:
    int codInmueble;
    int tipoPropiedad;
    char calle[50];
    char numero[6];
    int antiguedad;
    float superficieM2;
    int habitaciones;
    float precioVenta;
    float precioAlquiler;
    char dniDuenio[12];
    bool estadoPropiedad;

public:



    ///SETTERS------------------------------
    void setCodInmueble(int cod);
    void setTipoPropiedad(int tipo);
    void setCalle(const char* c);
    void setNumero(const char* n);
    void setAntiguedad(int a);
    void setSuperficieM2(float s);
    void setHabitaciones(int h);
    void setPrecioVenta(float p);
    void setPrecioAlquiler(float p);
    void setDniDuenio(const char* d);
    void setEstadoPropiedad(bool estado);

    ///GETTERS------------------------------
    int getCodInmueble();
    int getTipoPropiedad();
    const char* getCalle();
    const char* getNumero();
    int getAntiguedad();
    float getSuperficieM2();
    int getHabitaciones();
    float getPrecioVenta();
    float getPrecioAlquiler();
    const char* getDniDuenio();
    bool getEstadoPropiedad();

};
