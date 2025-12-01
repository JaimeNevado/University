#include <iostream>

using namespace std;

int main(){
    float precio = 0;
    float precioFinal = 0;
    int unidades = 0;
    cout << "Número de unidades adquiridad: ";
    cin >> unidades;
    precio = unidades * 100;
    precioFinal = precio + (precio * 0.12);
    if (precioFinal > 300){
        precioFinal = precioFinal - (precioFinal * 0.05);
        cout << "Se aplica un descuento del 5%" << endl;
    }
    cout << "El precio total a pagar es: " << precioFinal << " euros" << endl;
    return 0;
}