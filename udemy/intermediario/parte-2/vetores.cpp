#include <iostream>

using namespace std;

int main()
{
    int vetor[100]; 

    for(int i = 0; i < 100; i++)
    {
        vetor[i] = i;
        cout << vetor[i] << endl;
    }

    int vetor_2[] = {1, 2, 3, 4};
    cout << "Ultimo elemento do vertor_2: " << vetor_2[3] << endl;

    return 0;
}