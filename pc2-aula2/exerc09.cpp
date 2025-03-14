#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));

    int matriz [2][2],numAleatorio,somaNum=0;


    for (int i = 0; i < 2; ++i){

      for (int j = 0; j < 2; ++j){

        numAleatorio = rand()%11;
        matriz[i][j] = numAleatorio;
        somaNum += matriz[i][j];
        cout<<matriz[i][j]<<" ";

      }
     cout<<endl;
    }
     cout<<endl;
     cout<<"A soma dos valores da matriz e: "<<somaNum<<endl;
    return 0;
}
