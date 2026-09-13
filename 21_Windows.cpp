#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float pecahan, vround, vceil, vfloor, vtrunc;

    cout << "Masukan bilangan pecahan : ";
    cin >> pecahan;

    vround = round(pecahan);
    vceil = ceil(pecahan);
    vfloor = floor(pecahan);
    vtrunc = trunc(pecahan);

cout << "Hasil pembulatan round: " << vround << endl;
cout << "Hasil pembulatan ceil: " << vceil << endl;
cout << "Hasil pembulatan floor: " << vfloor << endl;
cout << "Hasil pembulatan trunc: " << vtrunc << endl;

    system("PAUSE");
    return 0;
}