#include "Vehiculo.h"

Vehiculo::Vehiculo(){
    
}

Vehiculo::Vehiculo(string p, int cs, int c):placa(p), contServicio(cs), costo(c){

}

int Vehiculo::getCosto(){
    return costo;
}

string Vehiculo::getPlaca(){
    return placa;
}

int Vehiculo::getContServicio(){
    return contServicio;
}

ostream& operator << (ostream& os, Vehiculo coche)
{
	os << "Numero de placa: " << coche.getPlaca() << endl;
	os << "Cantidad de servicios: " << coche.getContServicio() << std::endl;
	os << "Costo total de los servicios: " << coche.getCosto() << std::endl;
	/*os << "Servicios: " << std::endl;
	os << "Tipo 1: " << coche.getCont1() << std::endl;
	os << "Tipo 2: " << coche.getCont2() << std::endl;
	os << "Tipo 3: " << coche.getCont3() << std::endl;
	*/
	return os;

}