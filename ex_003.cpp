#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int linhas = 2;
    int colunas = 2;
    
    int matrizA[linhas][colunas] = {
        {3, 3},
        {3, 3}
    };

    int matrizB[linhas][colunas] = {
        {1, 1},
        {1, 1}
    };


    int matrizC[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}