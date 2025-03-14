#include <iostream>

using namespace std;

int main()
{

    int vetor[5] ;

    for (int i=0; i < 5; i+=1) {

     vetor[i] = i + 1;
     cout << "Posicao: " << i << " = " << vetor[i] << endl;

    }

    return 0;
}
