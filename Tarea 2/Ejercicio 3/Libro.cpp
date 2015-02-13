#include "Libro.h"

Libro::Libro(){}

Libro::Libro(string titulo, string autor, int paginas, int edicion, string editorial, int anio) : titulo(titulo), autor(autor), paginas(paginas), edicion(edicion), editorial(editorial), anio(anio){
    
}
    
bool Libro::operator<(Libro & libro){
    return  anio < libro.anio;
}

bool Libro::operator>(Libro & libro){
    return  anio > libro.anio;
}

bool Libro::operator==(Libro & libro){
    if(anio == libro.anio && editorial == libro.editorial && autor == libro.autor){
        return true;   
    }else{
        return false;
    }
}

ostream & operator <<(ostream & os, Libro & libro){
    os << libro.titulo << endl;
    return os;
}





/*
        void nuevoLibro(Libro);
        void borrarLibro(Libro);
  */      

