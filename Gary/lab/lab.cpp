#include <iostream>
using namespace std;

int main(){
    
    int edad = 0;
    cout << "ingrese la edad de la persona:  ";
    cin >> edad;

    if(edad < 5){
        cout << " El niño puede entrar gratis";
    
    }else if(edad < 12){
        cout << "Debe de pagar 5 dolares por la entrada";
    }else{
        cout << "Debe de pagar 10 dolares por la entrada";
    }
    cout << "\nMuchas gracias por su visita esperamos que disfrute";
    return 0;

}