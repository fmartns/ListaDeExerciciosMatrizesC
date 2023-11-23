#include <iostream>
#include <cmath>

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
            if(i < j){
                matriz[i][j] = 2*i + 7*j * 2;
            }
            else if(i == j){
                matriz[i][j] = 3 * pow(i, 2) * 1;
            }
            else if(i > j){
                matriz[i][j] = 4 * pow(i, 3) - 5 * pow(j, 2) + 1;
            }
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}