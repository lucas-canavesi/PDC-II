#include <iostream>
#include <random>

using namespace std;

int main()
{

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distrib(1, 10);

    int vetor[5],somaVetor=0;

    for (int i = 0; i < 5; i+=1) {

      int randomNumber= distrib(gen);
      vetor[i] = randomNumber;
      cout << vetor[i]<<endl;
      somaVetor = somaVetor+vetor[i];

    }
    cout<<endl;
    cout <<"A soma dos valores armazenados no vetor e: "<< somaVetor<<endl ;
    return 0;
}
