#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int vetor[5], num;

    for (int i=0; i < 5; i+=1) {

      num = rand() % 11;
      vetor[i] = num;

      cout<<vetor[i]<<" ";

    }
      cout<<endl;
      for (int i=4; i >=0 ; i-=1) {

       cout<<vetor[i]<< " ";

    }
    return 0;
}
