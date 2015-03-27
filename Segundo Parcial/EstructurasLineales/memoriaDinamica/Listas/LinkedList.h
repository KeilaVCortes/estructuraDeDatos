#pragma once
#include "Node.h"

template<class T>
class LinkedList{
    Node<T> * _first = nullptr;
    int _size = 0;
    
    class Iterator{
        LinkedList<T> * _data;
        int _position;
        public:
            Iterator(LinkedList<T> * _adata, int _aposition) : _data(_adata),
            _position(_aposition){}
            
            Node<T> operator *() const {return *(_data->at(_position));}
            const Iterator & operator ++() {++_position; return *this; }
            bool operator != (const Iterator & it) const { return _position != it._position; }
    };
    
    public:
        LinkedList(){}
        virtual ~LinkedList();
        Node<T> * first();
        int size();
        bool empty();
        
        void insert(T, int);
        void insert(Node<T> *, int);
        void insertFront(T);
        void insertFront(Node<T> *);
        void insertBack(T);
        void insertBack(Node<T> *);
        
        Node<T> * remove(int);
        Node<T> * removeFront();
        Node<T> * removeBack();
        
        void clear();
        
        Node<T> * at(int);
        int at(Node<T> *);
        
        template<typename Tn>
        friend std::ostream & operator << (std::ostream &, LinkedList<Tn> &);
        
        Iterator beguin() {return { this, 0}; } //Lista de inicialicacion de c++ 11
        Iterator end() {return {this, _size}; }
        
        Node<T> * operator [] (const int);
}; 



template <class T>
LinkedList<T>::~LinkedList(){
    clear();
}


template <class T>
Node<T> * LinkedList<T>::first(){
    return _first;
}


template <class T>
int LinkedList<T>::size(){
    return _size;
}


template <class T>
bool LinkedList<T>::empty(){
    return _size == 0;
}


template <class T>
void LinkedList<T>::insert(T element, int position){
    /*si posicion < 0  se incerta la inicio
    Si posicion > _size se incerta al final
    en cualquier otro caso se incerta en la posicion dada
    */
    Node<T> * newnode = new Node<T>(element);
    //lista vacia:
    if (empty() || position <= 0){
       
        newnode->setNext(_first);
        _first = newnode;
    }else{
        /*Cuando se incerta en cualquier posicion que no es el inicio*/
        if (position > _size){
            position = _size;
        }
        Node<T> * tmp = at(position -1);
       
        newnode->setNext(tmp->getNext());
        tmp->setNext(newnode);
    }
    
    /*Incrementa el tamaño de la lista*/
    ++_size;
    
}


template <class T>
void LinkedList<T>::insert(Node<T> * node, int position){
    
}
template <class T>
void LinkedList<T>::insertFront(T element){
    insert(element, 0);
}
template <class T>
void LinkedList<T>::insertFront(Node<T> * node){
    insert(node, 0);
}
template <class T>
void LinkedList<T>::insertBack(T element){
    insert(element, _size);
}


template <class T>
void LinkedList<T>::insertBack(Node<T> * node){
    insert(node, _size);
}


template <class T>
Node<T> * LinkedList<T>::remove(int position){
    if (empty()){
        return nullptr;
    }
    Node<T> * removenode;
    if (position == 0){
        removenode = _first;
        _first = _first->getNext();
    }else{
        Node<T> * prev = at(position-1); 
        removenode = prev->getNext();
        prev->setNext(removenode->getNext());
    }
    
    removenode->setNext(nullptr);
    --_size;
    return removenode;
}


template <class T>
Node<T> * LinkedList<T>::removeFront(){
    return remove(0);
}


template <class T>
Node<T> * LinkedList<T>::removeBack(){
    return remove(_size -1);
}

template <class T>
void LinkedList<T>::clear(){
    Node<T> * tmp = _first;
    while (tmp != nullptr){
        _first = _first->getNext();
        tmp->setNext(nullptr);
        delete tmp;
        tmp = _first;
    }
    _size = 0;
    _first = nullptr;
}


template <class T>
Node<T> * LinkedList<T>::at(int position){
    if (empty() || (position < 0 || position >= _size)) {
        return nullptr;
    }
    
    int pos = 0;
    Node<T> * tmp = _first;
    while (tmp != nullptr && pos ++ < position){
        tmp = tmp->getNext();
    }
    return tmp;
}


template <class T>
int LinkedList<T>::at(Node<T> * node){
        if (empty() || node == nullptr) {
        return -1;
    }
    
    int pos = 0;
    Node<T> * tmp = _first;
    while (tmp != nullptr && tmp != node){
        tmp = tmp->getNext();
        pos ++;
    }
    if (pos == _size){
        return -1;
    }
    return pos;
}


template <class T>
std::ostream & operator <<(std::ostream & os, LinkedList<T> & list){
    for (auto node : list ){
        os << node << std::endl;
    }
    return os;
}
    


template <class T>
Node<T> * LinkedList<T>::operator [] (const int position){
    return at(position);
}

