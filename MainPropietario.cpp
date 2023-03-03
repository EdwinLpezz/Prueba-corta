#include "Propietario.cpp"
#include <iostream>
using namespace std;
main(){
	string n,nom,ape,dir,fn;
	int tel;
	double c;
	
	cout<<"Ingresar Nombres: ";
	cin>>nom;
	cout<<"Ingresar Nit: ";
	cin>>n;
	cout<<"Ingresar Apellidos: "; 
	cin>>ape;
	cout<<"Ingresar Direccion: ";
	cin>>dir;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fn;
	cout<<"Ingresar Telefono: ";
	cin>>tel;
	cout<<"Ingresar CUI: ";
	cin>>c;
	//isntancia de un objeto
	Propietario obj = Propietario(nom, ape, dir, fn, tel, n, c);
	obj.mostrar();
	
	Propietario obj = Propietario();
	obj.setNit(n);
	obj.setNombres(nom);
	obj.setApellidos(ape);
	obj.setDireccion(dir);
	obj.setFechaNacimiento(fn);
	obj.setTelefono(tel);
	obj.setCui(c);
	//obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Fecha Nacimiento: "<<obj.getfecha_nacimiento()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
	cout<<"CUI: "<<obj.getcui()<<endl;
	
}
