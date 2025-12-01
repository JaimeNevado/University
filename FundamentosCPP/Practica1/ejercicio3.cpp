#include <iostream>

using namespace std;

int main(){

    char c;
    cout << "Ingrese un caracter: " << endl;
    cin >> c;
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        cout << "Es letra" << endl;
    } else if (c == '.'){
        cout << "Es punto" << endl;
    } else {
        cout << "Error" << endl;
    }
    return 0;
}