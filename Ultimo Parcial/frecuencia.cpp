/*
    revisar la frecuencia de una lista
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    vector<int> V(1000);
    generate(V.begin(), V.end(), [](){return rand() %100;}); 
    for(auto i: V){
        cout << i << endl;
    }
    
    
    return 0;
}

