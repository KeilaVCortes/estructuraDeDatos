
#include <iostream>
#include <string>
#include <ostream>


class Libro{
    private:
        std::string nombre;
        int paginas;
        int altura;

    public:
        Libro() {}
        Libro(std::string _nombre, int _paginas, int _altura)
        : nombre(_nombre), paginas(_paginas), altura(_altura){}

        int getPaginas();
        std::string getNombre();
        int getAltura();
      
};
