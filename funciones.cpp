#include <iostream>
#include "funciones.h"
#include "claseCliente.h"
#include "ArchivoCliente.h"
using namespace std;


void menuPrincipal(){

    int op=-1;
    while(op!=0){
        system("cls");
        cout<<"-------ABML INMUEBLES-------"<<endl;
        cout<<"1- MENU PROPIETARIOS"<<endl;
        cout<<"2- MENU INMUEBLES"<<endl;
        cout<<"0- FIN DEL PROGRAMA"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"OPCION: ";cin>>op;

        switch(op){
            case 1:
                menuPropietarios();
                break;
            case 2:
                menuInmuebles();
                break;
            case 0:
                return;
                break;
            default:
                cout<<"ERROR AL INGRESAR UNA OPCION"<<endl;
            break;
        }
        system("pause");
    }
}

///---------------------------------------------------------------------///

void menuPropietarios(){
    int op=-1;
    ArchivoCliente cliente;
    while(op!=0){
        system("cls");
        cout<<"***************ABML INMUEBLES***************"<<endl;
        cout<<"1- ALTA"<<endl;
        cout<<"2- BAJA"<<endl;
        cout<<"3- MODIFICAR DATOS"<<endl;
        cout<<"4- LISTADO"<<endl;
        cout<<"5- BUSCAR CLIENTE POR DNI"<<endl;
        cout<<"6- BUSCAR TODAS LAS PROPIEDADES DEL CLIENTE"<<endl;
        cout<<"7- LISTAR INACTIVOS"<<endl;
        cout<<"0- FIN DEL PROGRAMA"<<endl;
        cout<<"********************************************"<<endl;
        cout<<"OPCION: ";cin>>op;

        switch(op){
            case 1:
                cliente.altaCliente();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                cliente.listado();
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 0:
                return;
                break;
            default:
                cout<<"ERROR AL INGRESAR UNA OPCION"<<endl;
            break;
        }
        system("pause");
    }
}

///---------------------------------------------------------------------///

void menuInmuebles(){
    int op=-1;
    while(op!=0){
        system("cls");
        cout<<"**********ABML INMUEBLES**********"<<endl;
        cout<<"1- ALTA"<<endl;
        cout<<"2- BAJA"<<endl;
        cout<<"3- MODIFICAR PRECIO"<<endl;
        cout<<"4- LISTADO"<<endl;
        cout<<"5- BUSCAR POR CALLE"<<endl;
        cout<<"6- BUSCAR POR RANGO DE PRECIOS"<<endl;
        cout<<"7- REACTIVAR PROPIEDAD"<<endl;
        cout<<"0- FIN DEL PROGRAMA"<<endl;
        cout<<"*********************************"<<endl;
        cout<<"OPCION: ";cin>>op;

        switch(op){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 0:
                return;
                break;
            default:
                cout<<"ERROR AL INGRESAR UNA OPCION"<<endl;
            break;
        }
        system("pause");
    }
}
