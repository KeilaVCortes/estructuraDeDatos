/*
19/01/14
Ejercicio recursividad
Ejercicio 4 y 5
*/

#include<iostream>
#include<string>
using namespace std;


int sumaDigitos(int numero);
string invertir(string numero, int tam);

int main(){
    int n;
    string nu;
    
    cout << "pon un numero" << endl;
    cin >> n;
    cin >> nu;
    int tam = nu.length();
    cout << sumaDigitos(n) << endl;
    cout << invertir(nu, tam+1 ) << endl;
    return 0;
}

//Ejercicio 4
//suma los digitos de un numero
int sumaDigitos(int numero){
    int resul;
    resul = numero % 10;
    numero = numero /10;
    if(numero == 0){
        return resul;
    }else{
        return resul + sumaDigitos(numero); 
    }
}


//Ejercicio 5
//invierte los digitos de un numero
string invertir(string numero, int tam){
    string inverso;
    inverso = numero[tam];
    if (tam == 0){
        return inverso;
    }else{
        return inverso += invertir(numero, tam-1);
    }
}