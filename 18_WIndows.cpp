#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double x, akar, pangkat;
    cout << "Masukan nilai x: ";
    cin >> x;

    akar=sqrt(x);
    pangkat=pow(x, 2);

cout << "Akar dari " << x <<  " = " << akar << endl;
cout << "Pangkat dari " << x << " = " << pangkat << endl;

    system("PAUSE");
    return 0;
}