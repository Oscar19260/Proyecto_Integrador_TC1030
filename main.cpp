#include <iostream>
#include "credencial.h"

using namespace std;

int main(){

    string r;

    cout<<"************************ Proyecto Integrador TC1030 ************************"<<endl;
    cout<<"Oscar Enrique Delgadillo Ochoa"<<endl;
    cout<<"A01705935"<<endl;
    cout<<"Este codigo va a imprimir informacion que se utiliza en credenciales"<<endl;
    cout<<"los tipos de credenciales que hay son: "<<endl;
    cout<<"a) Estudiantes"<<endl;
    cout<<"b) Maestros"<<endl;
    cout<<"c) Empleados"<<endl;
    cout<<"Los datos se van a guardar en un archivo .txt"<<endl;
    cout<<"Selecciona el tipo de credencial que quieres observar"<<endl;
    cin>>r;

    Persona *vector[3];

    if (r == "a" || r == "a)"){
        cout<<"Selecionaste Estudiantes"<<endl;
        string i,m,n,cr,c,f;
        cout<<"\nEscuela: ";
        cin>>i;
        cout<<"Matricula: ";
        cin>>m;
        cout<<"Nombre (separado por guiones): ";
        cin>>n;
        cout<<"Carrera: ";
        cin>>cr;
        cout<<"Campus: ";
        cin>>c;
        cout<<"Fecha de nacimiento (dd/mm/aaaa): ";
        cin>>f;
        vector[0] = new Estudiante(i,m,n,c,f,cr);
        vector[0]->status();
        vector[0]->imprimir_info();
    }

    else if (r == "b" || r == "b)"){
        cout<<"Selecionaste Maestros"<<endl;
        string i,m,n,c,f,r;
        cout<<"\nEscuela: ";
        cin>>i;
        cout<<"Matricula: ";
        cin>>m;
        cout<<"Nombre (separado por guiones): ";
        cin>>n;
        cout<<"Campus: ";
        cin>>c;
        cout<<"Fecha de nacimiento (dd/mm/aaaa): ";
        cin>>f;
        cout<<"Rango (Planta o Catedra): ";
        cin>>r;
        vector[1] = new Maestro(i,m,n,c,f,r);
        vector[1]->status();
        vector[1]->imprimir_info();
    }

    else if (r == "c" || r == "c)"){
        cout<<"Selecionaste Empleados"<<endl;
        string i,m,n,c,f;
        unsigned ns,of;
        cout<<"\nEscuela: ";
        cin>>i;
        cout<<"Matricula: ";
        cin>>m;
        cout<<"Nombre (separado por guiones): ";
        cin>>n;
        cout<<"Campus: ";
        cin>>c;
        cout<<"Fecha de nacimiento (dd/mm/aaaa): ";
        cin>>f;
        cout<<"Numero de seguridad social: ";
        cin>>ns;
        cout<<"Oficina: ";
        cin>>of;
        vector[2] = new Empleado(i,m,n,c,f,ns,of);
        vector[2]->status();
        vector[2]->imprimir_info();
    }

    else{
        cout<<"Esa opcion no esta disponible"<<endl;
    }
    return 0;

}
