#include <iostream>

using namespace std;

int main(){
    int kw = 0;
    float precio = 0;

    cout << "Introduzca el consumo del contador: ";
    cin >> kw;
    if (kw <= 100 && kw >= 0){
        precio = (kw * 0.5) + 1;
    } else if (kw <= 250){
        precio = ((100 * 0.5) + 1) + ((kw - 100) * 0.35);
    } else {
        precio = ((100 * 0.5) + 1) + (150 * 0.35) + ((kw - 250) * 0.25);
    }
    cout << "El importe a pagar es: " << precio << " euros";
    return 0;
}