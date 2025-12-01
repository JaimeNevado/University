#include <iostream>
#include <array>

using namespace std;

const int N = 4;

typedef array<int, N>TVector;
typedef array<TVector, N>TMat;

void escribirMat(TMat m){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
           cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void generarVectores(TVector &v1, TVector &v2, TMat m, int paso){
    for (int i = paso; i < N; i++){
        v1[i] = m[i][paso];
        v2[i] = m[paso][i];
    }
}

bool esSimetrica(TMat m){
    TVector v1;
    TVector v2;
    bool simetrica = true;
    for (int paso = 0; paso < N; paso++){
        generarVectores(v1, v2, m, paso);
        for (int i = 0; i < (N - paso); i++){
            if (v1[i] != v2[i]){
                simetrica = false;
            }
        }
    }
    return simetrica;
}

void pedirDatos(TMat &m){
    cout << "Introduzca por filas una matriz " << N << " x " << N << ":" << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> m[i][j];
        }
    }
}

int main(){    
    //pedirDatos(m);
    
    TMat m = {{
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    }};

    TMat matriz = {{
        {1, 2, 3, 4},
        {2, 5, 6, 7},
        {3, 6, 8, 9},
        {4, 7, 9, 10}
    }};

    if (esSimetrica(matriz)){
        cout << "Es simétrica" << endl;
    } else {
        cout << "NO es simétrica" << endl;
    }
    
    return 0;
}




