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
string palindromo(string palabra, int i, int tama);

int main(){
    int n;
    string nu;
    string palabra;
    
    cout << "pon un numero" << endl;
    cin >> n;
    cin >> nu;
    cin >> palabra;
    int tama = palabra.length();
    int tam = nu.length();
    cout << sumaDigitos(n) << endl;
    cout << invertir(nu, tam+1 ) << endl;
    cout << palindromo(palabra,1,tama) << endl;
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


//Ejercicio 6
//Revisa si una palabra es palindromo
string palindromo(string palabra, int i, int tama){
    
    if(tama == 2){
        return "es un bifonte";
    }else{
        if(palabra[i] == palabra[tama]){
            return palindromo(palabra, i+1, tama-1);
        }else{
            return "no es palindromo";
        }
    }
}

