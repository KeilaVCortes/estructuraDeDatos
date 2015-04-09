#include <iostream>
#include <string>

using namespace std;

string dec2bin(int dec, int aux, string res);

int main(){
    
    int dec = 7;
    int aux = 0;
    string s = "";
    
    
    cout << dec2bin(dec,aux,s);
  
    
    
    return 0;
}

string dec2bin(int dec, int aux, string res){
    cout << res<< endl;
    if(dec == 1 || dec == 0){
        return "1" + res;
    }else if (aux == 0){
        if(aux == 1){
            res += "1";
        }else{
            res += "0";
        }
        return dec2bin(dec/2, dec%2, res);
    }
}