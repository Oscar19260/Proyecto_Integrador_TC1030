#ifndef CREDENCIAL_H
#define CREDENCIAL_H

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

// Declaramos clase padre Persona
class Persona{
	protected: // Atributos
		string escuela;
        string matricula;
		string nombre;
		string campus;
		string fecha_n;

	public: // Metodos
	    Persona(): escuela(""),matricula(""),nombre(""),campus(""),fecha_n(""){}; // Constructor por default
		Persona(string, string, string, string, string);
		virtual void imprimir_info() = 0; // Constructor
		virtual void status() = 0; // Se aplica polimorfismos
};

// Constructor de Persona
Persona::Persona(string esc, string ma, string nom, string camp, string cumple){
    escuela = esc;
    matricula = ma;
    nombre = nom;
    campus = camp;
    fecha_n = cumple;
}


/////////////////////////////////// _Clase Hija_ ///////////////////////////////////////////////////////
// Declaramos Estudiante clase hija de Persona
class Estudiante: public Persona{
    private: // Atributos
        string carrera;

    public: // Metodos
        Estudiante(string,string,string,string,string,string);
        void imprimir_info(); // Estudiante sobreescritura
        void status() {cout<<"Status: ALUMNO\n";}
};

// Constructor de Estudiante
Estudiante::Estudiante(string esc, string nom, string cumple, string ma, string camp, string car): Persona(esc, nom, cumple, ma, camp){
    carrera = car;
}

/*
La función imprimir_info() obtiene la información de las variables
y genera un archivo .txt
*/
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
// Declaramos Maestro clase hija de Persona
class Maestro: public Persona{
    private: // Atributos
        string rango;

    public: // Metodos
        Maestro(string,string,string,string,string,string); // Constructor
        void imprimir_info(); // Maestro sobreescritura
        void status() {cout<<"Status: PROFESOR\n";}
};

// Constructor de Maestro
Maestro::Maestro(string esc, string nom, string cumple, string ma, string camp, string r): Persona(esc, nom, cumple, ma, camp){
    rango = r;
}

/*
La función imprimir_info() obtiene la información de las variables
y genera un archivo .txt
*/
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

    infom<<"\nParte de atras \n";
    infom<<"Fecha de nacimiento: "<<fecha_n<<endl;
    infom<<"Rango: "<<rango<<endl;

    infom.close();
}


/////////////////////////////// _Clase Hija_ ///////////////////////////////////////////
// Declaramos Empleado clase hija de Persona
class Empleado: public Persona{
    private: // Atributos
        unsigned n_ss;
        unsigned oficina;

    public: // Metodos
        Empleado(string,string,string,string,string,unsigned,unsigned); // Constructor
        void imprimir_info(); // Empleado sobreescritura
        void status() {cout<<"Status: EMPLEADO\n";}
};

// Constructor de Empleado
Empleado::Empleado(string esc, string nom, string cumple, string ma, string camp, unsigned nss, unsigned of): Persona(esc, nom, cumple, ma, camp){
    n_ss = nss;
    oficina = of;
}

/*
La función imprimir_info() obtiene la información de las variables
y genera un archivo .txt
*/
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
