#ifndef CREDENCIAL_H
#define CREDENCIAL_H

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

class Persona{
	protected: // Atributos
		string escuela;
		// Datos Personales
		string nombre;
		string fecha_n;
        // Datos Escolares
        string matricula;
		string campus;

	public: // Metodos
	    Persona();
		Persona(string, string, string, string, string); //Constructor
		virtual string leer_info(); // Se aplica polimorfismos
		virtual void imprimir_info() = 0;
		virtual void status() = 0; // Se aplica polimorfismos
};

//Constructor de Persona
Persona::Persona(string esc, string nom, string cumple, string ma, string camp){
    escuela = esc;
    nombre = nom;
    fecha_n = cumple;
    matricula = ma;
    campus = camp;
}

string Persona::leer_info(){
    cout<<"\nEscuela: "<<escuela<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Campus: "<<campus<<endl;
    cout<<"Fecha de nacimiento (dd/mm/aaaa): "<<fecha_n<<endl;
}

/////////////////////////////////// _Clase Hija_ ///////////////////////////////////////////////////////
class Estudiante: public Persona{
    private: // Atributos
        string carrera;

    public: // Metodos
        Estudiante(string,string,string,string,string,string); //Constructor
        string leer_info(); // Estudiante sobreescritura
        void imprimir_info(); // Estudiante sobreescritura
        void status() {cout<<"\nStatus: ALUMNO";}
};

//Constructor de Estudiante
Estudiante::Estudiante(string esc, string nom, string cumple, string ma, string camp, string car): Persona(esc, nom, cumple, ma, camp){
    carrera = car;
}

string Estudiante::leer_info(){ // Estudiante sobreescritura
    cout<<"\nEscuela: "<<escuela<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Fecha de nacimiento (dd/mm/aaaa): "<<fecha_n<<endl;
    cout<<"Campus: "<<campus<<endl;
	cout<<"Carrera: "<<carrera<<endl;
}

void Estudiante::imprimir_info(){ // Estudiante sobreescritura
    ofstream infoa;
    infoa.open("Infoa.txt",ios::out);

    if(infoa.fail()){
        cout<<"No se creo el archivo";
        exit(1);
    }
    infoa<<"Parte de adelante \n";
    infoa<<"Escuela: "<<escuela<<endl;;
    infoa<<"Matricula: "<<matricula<<endl;
    infoa<<"Nombre: "<<nombre<<endl;
    infoa<<"Carrera: "<<carrera<<endl;
    infoa<<"Campus: "<<campus<<endl;

    infoa<<"\nParte de atras \n";
    infoa<<"Fecha de nacimiento: "<<fecha_n<<endl;

    infoa.close();
}

/////////////////////////////// _Clase Hija_ ///////////////////////////////////////////
class Maestro: public Persona{
    private: // Atributos
        string rango;

    public: // Metodos
        Maestro(string,string,string,string,string,string); //Constructor
        string leer_info(); // Maestro sobreescritura
        void imprimir_info(); // Maestro sobreescritura
        void status() {cout<<"\nStatus: PROFESOR";}
};

//Constructor de Maestro
Maestro::Maestro(string esc, string nom, string cumple, string ma, string camp, string r): Persona(esc, nom, cumple, ma, camp){
    rango = r;
}

string Maestro::leer_info(){ // Maestro sobreescritura
    cout<<"\nEscuela: "<<escuela<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Campus: "<<campus<<endl;
    cout<<"Fecha de nacimiento (dd/mm/aaaa): "<<fecha_n<<endl;
	cout<<"Rango: "<<rango<<endl;
}

void Maestro::imprimir_info(){
    ofstream infom;
    infom.open("Infom.txt",ios::out);

    if(infom.fail()){
        cout<<"No se creo el archivo";
        exit(1);
    }
    infom<<"Parte de adelante \n";
    infom<<"Escuela: "<<escuela<<endl;
    infom<<"Matricula: "<<matricula<<endl;
    infom<<"Nombre: "<<nombre<<endl;
    infom<<"Campus: "<<campus<<endl;
    infom<<"Rango: "<<rango<<endl;

    infom<<"\nParte de atras \n";
    infom<<"Fecha de nacimiento: "<<fecha_n<<endl;

    infom.close();
}


/////////////////////////////// _Clase Hija_ ///////////////////////////////////////////
class Empleado: public Persona{
    private: // Atributos
        unsigned n_ss;
        unsigned oficina;

    public: // Metodos
        Empleado(string,string,string,string,string,unsigned,unsigned); //Constructor
        string leer_info(); // Empleado sobreescritura
        void imprimir_info(); // Empleado sobreescritura
        void status() {cout<<"\nStatus: EMPLEADO";}
};

//Constructor de Empleado
Empleado::Empleado(string esc, string nom, string cumple, string ma, string camp, unsigned nss, unsigned of): Persona(esc, nom, cumple, ma, camp){
    n_ss = nss;
    oficina = of;
}

string Empleado::leer_info(){ // Empleado sobreescritura
    cout<<"\nEscuela: "<<escuela<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Campus: "<<campus<<endl;
    cout<<"Fecha de nacimiento (dd/mm/aaaa): "<<fecha_n<<endl;
	cout<<"Numero de seguridad social: "<<n_ss<<endl;
	cout<<"Oficina: "<<oficina<<endl;
}

void Empleado::imprimir_info(){
    ofstream infoe;
    infoe.open("Infoe.txt",ios::out);

    if(infoe.fail()){
        cout<<"No se creo el archivo";
        exit(1);
    }
    infoe<<"Parte de adelante \n";
    infoe<<"Escuela: "<<escuela<<endl;
    infoe<<"Matricula: "<<matricula<<endl;
    infoe<<"Nombre: "<<nombre<<endl;
    infoe<<"Campus: "<<campus<<endl;

    infoe<<"\nParte de atras \n";
    infoe<<"Fecha de nacimiento: "<<fecha_n<<endl;
    infoe<<"NSS: "<<n_ss<<endl;
    infoe<<"Oficina: "<<oficina<<endl;

    infoe.close();
}



#endif
