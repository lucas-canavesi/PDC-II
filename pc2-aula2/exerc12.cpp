#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));

    int matriz [3][5],numAleatorio,numPar,numImpar,quantNumPar=0,quantNumImpar=0;


    for (int i = 0; i < 3; ++i){

      for (int j = 0; j < 5; ++j){

        numAleatorio = rand()%11;
        matriz[i][j] = numAleatorio;
        cout<<matriz[i][j]<<"           ";

      }
     cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"Os numeros pares sao: "<<endl;

      for (int i = 0; i < 3; ++i){

      for (int j = 0; j < 5; ++j){

        if (matriz[i][j] % 2 == 0 & matriz[i][j] != 0){
          quantNumPar += 1;
          numPar = matriz[i][j];
          cout<<numPar<<" ";

        }
      }
    }
    cout<<endl;
    cout<<"Quantidade de numeros impares: "<<quantNumPar<<endl;
    cout<<endl;
    cout<<"Numeros impares: "<<endl;
    for (int i = 0; i < 3; ++i){

      for (int j = 0; j < 5; ++j){

      if (matriz[i][j] % 2 != 0 & matriz[i][j] != 0) {
          quantNumImpar += 1;
          numImpar = matriz[i][j];
          cout<<numImpar<<" ";

        }
      }
    }
    cout<<endl;
    cout<<"Quantidade de numeros impares: "<<quantNumImpar<<endl;
    cout<<endl;
    return 0;
}
