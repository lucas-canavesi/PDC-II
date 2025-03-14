#include <iostream>

using namespace std;

int main()
{
    int vetor[5];

    for (int i=0; i < 5; i+=1){

      cout << "Entre com o valor "<< i + 1 <<" :" <<endl;
      cin >> vetor[i];
      cout << endl;

    }
    for (int i=0; i < 5; i+=1){

      cout << "O valor armazenado no indice " << i << " e: " << vetor[i] << endl;;

    }
    return 0;
}
