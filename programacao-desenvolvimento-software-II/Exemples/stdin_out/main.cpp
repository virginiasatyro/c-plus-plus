#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double pi = 3.1415;

    cout << "Ola DCC :)";
    cout << "O valor de pi eh? ";
    cout << pi;
    cout << endl;
    cout << "E se eu quiser uma precisao menos? ";
    cout << setprecision(1) << pi;
    cout << endl;
    cout << "Pi ao quadrado com precisao 7: " << setprecision(7) << pow(pi, 2);
    cout << endl;
    cout << "Pi ao quadrado com precisao 6: " << setprecision(6) << pow(pi, 2);

    return 0;
}
