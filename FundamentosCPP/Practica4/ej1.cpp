#include <iostream>
#include <array>

using namespace std;

const int N = 4;
const int M = 5;

typedef array<int, M>TVector;
typedef array<TVector, N>TMat;

void getMaximo(int &x, int &y, int &max, TMat m){
    max = m[0][0];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (m[i][j] > max){
                max = m[i][j];
                x = i;
                y = j;
            }
        }
    }

}

void pedirDatos(TMat &m){
    cout << "Introduzca por filas una matriz " << N << " x " << M << ":" << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> m[i][j];
        }
    }
}

int main(){
    TMat m;
    int x = 0;
    int y = 0;
    int max = 0;
    pedirDatos(m);
    getMaximo(x, y, max, m);
    
    cout << "El mayor de la matriz es: " << max << " que aparece en la posicion: " 
    << "[" << x << "]" << "[" << y << "]" << endl;
    
    return 0;
}




