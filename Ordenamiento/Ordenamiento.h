/*
Margot Duek
05/02/15
Ordenamiento

- Ordenacion interna : es en memoria RAM
- Ordenacion externa : es en disco

Iterativos
    - Burbuja
    - insercion
    - Seleccion
Rescursivo
    - QuickSort
    - MergeSort
    
................................................................................

Apuntadores a funciones o funcion Lamda o inline o anonima:
    Es cuando como parametro ponemos una funcion, esto solo se usa cuando solo
    vamos a usar esa funcion una vez, para asi cuando sale de esta funcion deja
    de ocupar memoria
    Para hacerla se pone [](parametros){funcion}
*/


#include<iostream>

template<class T>
class Ordenamiento{
    public:
        static void burbuja(T [], int, bool(*)(T , T));
        static void insercion(T [], int, bool(*)(T ,T));
        static void seleccion(T [], int, bool(*)(T, T));
        
        static bool asc(T ,T);
        static bool desc(T, T);
        
};


template<class T>
bool Ordenamiento<T>::asc(T a, T b){
    return a > b;
}

template<class T>
bool Ordenamiento<T>::desc(T a, T b){
    return a < b;
}

template<class T>
void Ordenamiento<T>::burbuja(T v[], int n, bool compara(T, T)){
    T temp;
    for(int i = 0 ; i < n ; i++){
        for( int j = n-1; j > n; j--){
            if(compara(v[j-1], v[j])){
                temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
            }
        }
    }
}

template<class T>
void Ordenamiento<T>::insercion(T v[], int n, bool compara(T, T)){
    T index;
    int j = i-1;
    while (j >= 0 && compara(v[j], index)){
        v[j+1] = v[j];
        j--;
    }
    v[j+1]= index;
}

template<class T>
void Ordenamiento<T>::seleccion(T v[], int n, bool compara (T, T)){
    int minimo = 0;
    for(int j = i+1; j < n; j++){
        if(compara(v[minimo], v[j])){
            minimo = j;
        }
    }
    temp = v[minimo];
    v[minimo] = v[i];
    v[i] = temp;
}












