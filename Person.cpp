#include <iostream>
using namespace std;
class Person{
	
	protected : string nombres, apellidos, direccion,fecha_nacimiento;
	int telefono;
	
	protected : 
	
	Person(){
	}
	Person(string nom, string ape, string dir, string fn, int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fecha_nacimiento = fn;
		telefono = tel;
	}
	
	void mostrar();
};
