#include "Person.cpp"
#include <iostream>
using namespace std;

class Propietario : Person{
  
  private : string nit;
  	double cui;
  
  public :
  Propietario(){
  }
  Propietario(string nom,string ape,string dir,string fn,int tel,string n, double c) : Person(nom,ape,dir,fn,tel){ 
  nit = n;
  cui = c;
  }
// METODOS
  //set (modificar)
  void setNit(string n){nit = n;}
  void setCui(double c){cui = c;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
  void setTelefono(int tel){telefono = tel;}
  //get (mostrar)
  string getNit(){	return nit;}
  double getCui(){ return cui;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFechaNacimiento(){ return fecha_nacimiento;}
  int getTelefono(){	return telefono;}
  
	// metodo
	void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<endl;
}
};
