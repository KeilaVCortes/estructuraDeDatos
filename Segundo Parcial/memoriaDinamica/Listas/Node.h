#pragma once

template <class T>
class Node{
    T info;
    Node<T> * next = nullptr; //apunta al siguiente lugar 
    
    public:
        Node() {}
        ~Node() { next = nullptr; }
        Node(T _info) : info(_info) {}
    
        T getInfo() const { return info;}
        void setInfo(T value) { info = value; }
        
        Node<T> * getNext() const { return next;}
        void setNext(Node<T> * value) { next = value; }
        
        
        template<typename Tn>
        friend std::ostream & operator << (std::ostream & os, const Node<Tn> & node);
    
};

template <class T>
std::ostream & operator << (std::ostream & os, const Node<T> & node){
    os << node.info;
    return os;
}