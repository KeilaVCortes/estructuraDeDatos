#include "../LinkedList.h"
#include <string>

int main(){
    
    LinkedList<int> lista;
    LinkedList<int> res;
    
    
    lista.insertBack(5);
    lista.insertBack(2);
    lista.insertBack(7);
    lista.insertBack(2);
    lista.insertBack(5);
    lista.insertBack(5);
    lista.insertBack(1);
    
    
    
    for(int i = 0; i < lista.size(); ++i){
        for(int j = 1; j < lista.size(); ++j){
            //std::cout << "i " << lista.at(i)->getInfo();
            //std::cout << " j" << lista.at(j)->getInfo() << std::endl;
            if(lista.at(i)->getInfo() == lista.at(j)->getInfo()){
                res.insertBack(lista.at(i)->getInfo());
                
            }
            lista.remove(lista.at(i));
            
        }

    }
    
    std::cout << res;
    
    
    //delete lista;
    //delete res;
    
    return 0;
}