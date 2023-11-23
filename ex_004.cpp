#include <iostream>

using namespace std;

int main(){

    int matriz[4][4]{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14 ,15, 16}
    };

    int soma = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i > j){
                soma = soma + matriz[i][j];
            }
        }
    }

    cout << "Soma dos elementos abaixo da da diagonal principal: " << soma << endl;

    return 0;
}