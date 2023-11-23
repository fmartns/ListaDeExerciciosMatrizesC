#include <iostream>

using namespace std;

int main(){

    float escola[5][3]{
        {0001, 10, 10},
        {0002, 8, 7},
        {0003, 9, 8},
        {0004, 5, 6},
        {0005, 6, 5}
    };
    
    float medias[5];

    for(int i = 0; i < 5; i++){
        medias[i] = escola[i][1]*0.3 + escola[i][2]*0.7;
    }
    
    for(int i = 0; i < 5; i++){
        cout << "Matricula: " << escola[i][0] << endl;
        cout << "Media: " << medias[i] << endl;
    }

    float maiorMedia = 0;

    for(int j = 0; j < 5; j++){
        if(medias[j] > maiorMedia){
            maiorMedia = medias[j];
        }
    }

    cout << "Maior media da turma foi: " << maiorMedia << endl;

    float mediaTrabalhos = 0;

    for(int i = 0; i < 5; i++){
        mediaTrabalhos = mediaTrabalhos + escola[i][2];
    }

    mediaTrabalhos = mediaTrabalhos / 5;

    cout << "Media dos trabalhos: " << mediaTrabalhos << endl;

    

    return 0;
}