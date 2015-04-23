#include <iostream>
#include "../LinkedList.h"
using namespace std;


int main()
{
    LinkedList<int> principal;
    Stack<int> res;

    principal.push(1);
    principal.push(5);
    principal.push(3);
    principal.push(3);
    principal.push(5);
    principal.push(5);
    principal.push(9);
    principal.push(7);
    principal.push(9);

    while (!principal.empty())
    {
        int aux = principal.pop()->getInfo();
        res.push(aux);

        Stack<int> pilaAux;
        while (!principal.empty()){
            int aux2 = principal.pop()->getInfo();
            if (aux != aux2)
            {
                pilaAux.push(aux2);
            }
        }
        //principal.clear();
        while (!pilaAux.empty()){
            principal.push(pilaAux.pop()->getInfo());
        }
        cout << "RES: " << principal<< endl;

    }
    cout << res;






}