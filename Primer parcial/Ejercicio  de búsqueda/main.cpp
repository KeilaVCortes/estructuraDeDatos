#include "BusquedaGenerica.h"
#include "Vehiculo.h"

int main(){
    int tamanio = 3;
    Vehiculo taller[tamanio];
    
    taller[0] = Vehiculo("123", 0, 0);
    taller[1] = Vehiculo("321", 0, 0);
    taller[2] = Vehiculo("987", 0, 0);
    
    cout << "placa: ";
    string placa;
    cin >> placa;
    int pos =  BusquedaGenerica<Vehiculo>::busquedaSecuencialPosicion(taller, tamanio, placa, [] (Vehiculo coche, string placa){return coche.getPlaca() == placa;});
    cout << taller[pos] << endl;
    
    
    return 0;
}