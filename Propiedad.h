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
    void setCodInmueble(int _codigo);
    void setTipoPropiedad(int _tipoInmueble);
    void setCalle(const char* _calle);
    void setNumero(const char* _numero);
    void setAntiguedad(int _antiguedad);
    void setSuperficieM2(float _superficie);
    void setHabitaciones(int _habitaciones);
    void setPrecioVenta(float _precioVenta);
    void setPrecioAlquiler(float _precioAlquiler);
    void setDniDuenio(const char* _dniDuenio);
    void setEstadoPropiedad(bool _estado);

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
