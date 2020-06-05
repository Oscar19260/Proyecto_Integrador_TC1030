#include <iostream>
#include "credencial.h"

using namespace std;

int main(){

    cout<<"************************ Proyecto Integrador TC1030 ************************"<<endl;
    // cout<<"Oscar Enrique Delgadillo Ochoa"<<endl;
    // cout<<"A01705935"<<endl;
    cout<<"Este codigo va a imprimir informacion que se utiliza en credenciales"<<endl;
    cout<<"los tipos de credenciales que hay son: "<<endl;
    cout<<"a) Estudiantes"<<endl;
    cout<<"b) Maestros"<<endl;
    cout<<"c) Empleados"<<endl;
    cout<<"los datos se van a guardar en un archivo .txt"<<endl;

    Persona *vector[3];
    vector[0] = new Estudiante("ITESM","Oscar Delgadillo Ochoa","26/12/2001","A01705935","QRO","IRS");
    vector[1] = new Maestro("ITESM","Benjamin Valdez","19/03/1986","M00156746","QRO","Planta");
    vector[2] = new Empleado("ITESM","Luisa Mendez","02/08/1990","E01696078","CCM",72795608040,118);

    vector[0]->status();
    vector[0]->leer_info();
    vector[0]->imprimir_info();

    vector[1]->status();
    vector[1]->leer_info();
    vector[1]->imprimir_info();

    vector[2]->status();
    vector[2]->leer_info();
    vector[2]->imprimir_info();

    return 0;
}
