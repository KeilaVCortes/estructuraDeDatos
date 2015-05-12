/*
Clase Persona


*/

#include <iostream>
#include <string>
#include <ostream>
#include <list>

class Persona {
private:
    std::string nombre;
    std::string apellidos;
    int tiempoRelacion;
    int tiempoSoledad;
    std::list<Persona> amigos;
    
public:
    Persona() : Persona("", "") {}
    Persona(std::string _nombre, std::string _apellidos) : nombre(_nombre), apellidos(_apellidos){}
   
    std::string getNombre();
    std::string getApellido();
    Persona relacionMasEstable();
  
    
    
    bool operator >(Persona & persona);
    bool operator <(Persona & persona);
    bool operator  == (Persona & persona);
    
    void agregarAmigo(Persona persona);
    void imprimeLista();
    int getSizeList();
    std::list<Persona> getLista();
    
    friend std::ostream & operator << (std::ostream & os, const Persona & persona);
    
};



std::string Persona::getApellido(){
    return apellidos;
}

std::string Persona::getNombre(){
    return nombre;
}

void Persona::imprimeLista(){
    for(auto mar : amigos){
        std::cout << mar << std::endl;    
    }
    
}
 
int Persona::getSizeList(){
    return amigos.size();
}

std::list<Persona> Persona::getLista(){
    return amigos;
}

bool Persona::operator >(Persona & persona)
{
    if (apellidos > persona.apellidos) {
        
        return true;
    }
    else if (apellidos == persona.apellidos) {
    
        if (nombre < persona.nombre) {
            return true;
        }
        else {
            return false;
        }
    }
    
    return false;
}
/*
bool Persona::operator <(Persona & persona)
{
    return edad < persona.edad;
}
*/
std::ostream & operator << (std::ostream & os,  const Persona & persona)
{
    os << persona.nombre << "  "<< persona.apellidos << "\n Tiempo de Relacion: " << persona.tiempoRelacion << "\n Tiempo de Soledad: " << persona.tiempoSoledad << std::endl;
    
    return os;
}

bool Persona::operator  == (Persona & persona){
    if(persona.nombre == nombre && persona.apellidos == apellidos){
        return true;
    }else {
        return false;
    }
}


void Persona::agregarAmigo(Persona persona){
    amigos.push_back(persona);
}