#include <iostream>
#include <string>
#include "../Stack.h"

using namespace std;

void dec2bin(int dec);

int main(){
    
    int dec = 7;
    dec2bin(dec);
    
    

    
    
    return 0;
}

void dec2bin(int dec){

    Stack<int> bin;
    
    
    while (dec > 0){
        int aux = dec%2;
        dec = (dec-aux)/2;
        bin.push(aux);
    }
    
    while (!bin.empty()){
        cout << bin.pop()->getInfo();
    }
}