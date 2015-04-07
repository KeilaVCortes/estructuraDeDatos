#include <iostream>
#include <string>

class Empresa{
    private:
        std::string nombre;
        int numero;
    public:
        std::string getNombre();
        int getNumero();
        Empresa() : Empresa("", 0){}
        Empresa(std::string _nombre, int _numero) : nombre(_nombre), numero(_numero){}
        bool operator  == (const Empresa & empresa);
        bool operator  != (const Empresa & empresa);
};