#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int, N> TVector;
typedef array<TVector, N> TMat;

void escribirMat(TMat m) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

bool comprobarDiagonal(TMat matriz) {
    int sumaDiagonal1 = 0;
    int sumaDiagonal2 = 0;
    for (int i = 0; i < N; i++) {
        sumaDiagonal1 += matriz[i][i];
        sumaDiagonal2 += matriz[i][N - i - 1];
    }

    return (sumaDiagonal1 == 65 && sumaDiagonal2 == 65);
}

bool sumaValoresCorrecto(TMat matriz) {
    for (int i = 0; i < N; i++) {
        int sumaFila = 0;
        int sumaColumna = 0;

        for (int j = 0; j < N; j++) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];
        }

        if (sumaFila != 65 || sumaColumna != 65) {
            return false;
        }
    }
    return true;
}

bool comprobarRango(TMat matriz) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] < 1 || matriz[i][j] > 25) {
                return false;
            }
        }
    }
    return true;
}

bool esDobleEstocasticaNormalizada(TMat m) {
    return comprobarRango(m) && sumaValoresCorrecto(m) && comprobarDiagonal(m);
}

int main() {
    TMat matriz = {{
        {15, 8, 1, 24, 17},
        {16, 14, 7, 5, 23},
        {22, 20, 13, 6, 4},
        {3, 21, 19, 12, 10},
        {9, 2, 25, 18, 11}
    }};

    cout << "Matriz:" << endl;
    escribirMat(matriz);

    if (esDobleEstocasticaNormalizada(matriz)) {
        cout << "La matriz es doblemente estocástica normalizada." << endl;
    } else {
        cout << "La matriz NO es doblemente estocástica normalizada." << endl;
    }

    return 0;
}
