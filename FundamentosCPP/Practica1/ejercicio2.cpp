#include<iostream>
using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Escribe el primer numero: ";
    cin >> num1;
    cout << "Escribe el segundo numero: ";
    cin >> num2;
    cout << "Escribe el tercer numero: ";
    cin >> num3;

    if(num1>num2 && num1>num3){
        cout << "El numero mayor es " << num1;
    }else if(num2>num1 && num2>num3){
        cout << "El numero mayor es " << num2;
    }else if(num3>num1 && num3>num2){
        cout << "El numero mayor es " << num3;
    }else{
        cout << "No hay mayor";
    }
    return 0;
}