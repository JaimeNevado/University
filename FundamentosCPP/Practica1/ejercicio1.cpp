#include <iostream>

using namespace std;

int main(){

    int num;
    cout << "Ingrese un número " << endl;
    cin >> num;
    if (num < 0){
        cout << "SI es negativo";
    } else {
        cout << "NO es negativo";
    }
    return 0;
}