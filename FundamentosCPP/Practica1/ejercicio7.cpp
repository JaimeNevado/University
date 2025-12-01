#include <iostream>

using namespace std;

int main(){

    int mes;
    cout << "Introduzca número de mes: ";
    cin >> mes;
    if (mes > 12 || mes <= 0){
        cout << "Mes incorrecto" << endl;
        return 0;
    }
    switch (mes){
        case 1:
            cout << "Este mes tiene 31 días" << endl;
            break;
        case 2:
            cout << "Este mes tiene 28 días" << endl;
            break;
        case 3:
            cout << "Este mes tiene 31 días" << endl;
            break;
        case 5:
            cout << "Este mes tiene 31 días" << endl;            
            break;
        case 7:
            cout << "Este mes tiene 31 días" << endl;
            break;
        case 8:
            cout << "Este mes tiene 31 días" << endl;
            break;
        case 10:
            cout << "Este mes tiene 31 días" << endl;
            break;
        case 12:
            cout << "Este mes tiene 31 días" << endl;
            break;
        default:
            cout << "Este mes tiene 30 días" << endl;
    }
    return 0;
}