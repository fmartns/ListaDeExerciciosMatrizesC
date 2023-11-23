#include <iostream>

using namespace std;

int main(){

    int linhas;
    cout << "Defina o numero de linhas: ";
    cin >> linhas;

    int colunas;
    cout << "Defina o numero de colunas: ";
    cin >> colunas;

    int matriz[linhas][colunas];

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j <= colunas; j++){
            matriz[i][j] = ( i + 5 * j) % (i + j);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}