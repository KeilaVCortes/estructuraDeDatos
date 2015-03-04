
#include "Registro.h"
using namespace std;

int main(){
    int tpersonitas = 3;
    int contp = 1;
    int tregistrillos = 3;
    int contr = 1;
    int tvehiculillos = 3;
    int contv = 1;
    
    Persona personas[tpersonitas];
    Registro registros[tregistrillos];
    Vehiculo vehiculos[tvehiculillos];
    
    
    cout << "que quieres hacer:\n 1: comprar/vender\n 2: ver todas las ventas \n 3: ver ventas por persona"<< endl;
    int op;
    cin>> op;
    
    switch(op){
        case 1:
            if(contv < tvehiculillos){
                cout << "pon el vehiculo";
                //Vehiculo ve;
                string ve;
                cin >> ve;
                cout << "\n quien eres?" ;
                //Persona per;
                //cin >> per;
                cout << "\ncuanto cuesta?" ;
                //int cue;
                //cin >> cue;
                
            }
        break;
    }
    
}
