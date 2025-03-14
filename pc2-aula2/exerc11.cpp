#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));

    int matriz [3][3],numAleatorio,numPar,numImpar,somaPar=0,somaImpar=0;


    for (int i = 0; i < 3; ++i){

      for (int j = 0; j < 3; ++j){

        numAleatorio = rand()%21;
        matriz[i][j] = numAleatorio;
        cout<<matriz[i][j]<<"           ";

      }
     cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"Os numeros pares sao: "<<endl;

      for (int i = 0; i < 3; ++i){

      for (int j = 0; j < 3; ++j){

        if (matriz[i][j] % 2 == 0 & matriz[i][j] != 0){
          somaPar += matriz[i][j];
          numPar = matriz[i][j];
          cout<<numPar<<" ";

        }
      }
    }
    cout<<endl;
    cout<<"A soma dos numeros pares e: "<<somaPar<<endl;
    cout<<endl;
    cout<<"Numeros impares: "<<endl;
    for (int i = 0; i < 3; ++i){

      for (int j = 0; j < 3; ++j){

      if (matriz[i][j] % 2 != 0 & matriz[i][j] != 0) {

          somaImpar+=matriz[i] [j];
          numImpar = matriz[i][j];
          cout<<numImpar<<" ";

        }
      }
    }
    cout<<endl;
    cout<<"A soma dos numeros impares e: "<<somaImpar<<endl;
    cout<<endl;
    return 0;
}



