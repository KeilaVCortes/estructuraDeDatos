#include <iostream>
#include <string>

class Ciudad{
    std::string nombre = "Sin definir";
    int habitantes = 0;
    
    public:
        Ciudad();
        Ciudad(std::string _nombre, int _habitantes) : nombre(_nombre), habitantes(_habitantes){}
        ~Ciudad() {}
        
        friend std::ostream & operator << (std::ostream &, const Ciudad &);
        
};