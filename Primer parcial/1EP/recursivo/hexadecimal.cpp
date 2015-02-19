#include <iostream>
#include <string>
using namespace std;


/**/

string convierte(int num, int resul, string result);

int main(){
    cout << "numero: "<< endl;
    int num;
    cin >> num;
    string cadena = convierte(num, 0, ".");
    for (int i = cadena.length()-1; i >= 0; i--)
        cout << cadena[i];
    return 0;
}

string convierte(int num, int resul, string result){
    if(num <= 0){
        return result;
    }else{
        resul = num%16;
    
        switch(resul){
            case 1:
                result += "1";
            break;
            case 2:
                result = result + "2";
            break;
            case 3:
                result = result + "3";
            break;
            case 4:
                result += "4";
            break;
            case 5:
                result += "5";
            break;
            case 6:
                result += "6";
            break;
            case 7:
                result += "7";
            break;
            case 8:
                result += "8";
            break;
            case 9:
                result += "9";
            break;
            case 0:
                result += "0";
            break;
            case 10:
                result += "A";
            break;
            case 11:
                result += "B";
            break;
            case 12:
                result += "C";
            break;
            case 13:
                result += "D";
            break;
            case 14:
                result += "E";
            break;
            case 15:
                result += "F";
            break;
            default:
               // result += to_string(resul);
            break;
        }
        //cout << result << endl;
        
        return  convierte((num/16) ,resul , result += " " );
    }
    
}