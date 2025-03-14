#include <iostream>
#include <random>

using namespace std;

int main()
{

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distrib(1, 10);

    int vetor[5],somaVetor=0, maior=vetor[0],menor=11,num;

    for (int i = 0; i < 5; i+=1) {

      int randomNumber= distrib(gen);
      num = randomNumber;
      vetor[i] = num;
      cout << vetor[i]<<endl;
      somaVetor = somaVetor+vetor[i];

      if (vetor[i] >= maior) {

        maior = vetor[i];

      }
      else if (menor >= vetor[i]) {

        menor = vetor[i];

      }

    }

    cout<<endl;
    cout<<"A soma dos valores armazenados no vetor e: "<< somaVetor<<endl;
    cout << "O maior numero do vetor e: "<<maior<<". O menor e: "<<menor<<endl;

    return 0;
}
