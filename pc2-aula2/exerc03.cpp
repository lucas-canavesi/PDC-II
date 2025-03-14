#include <iostream>

using namespace std;

int main()
{
    int vetor[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i+=1) {

      cout << "Indice " << i << " = " << vetor[i] << endl;

    }

    return 0;
}
