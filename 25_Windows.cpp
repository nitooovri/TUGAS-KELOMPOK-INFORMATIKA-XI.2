#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char teks1[10], teks2[10];
    int jlhdepan, jlhkel, jlhhuruf;

    cout << "Masukan nama depan anda: ";
    cin >> teks1;
    cout << "Masukan nama keluarga anda: ";
    cin >> teks2;

    jlhdepan=strlen(teks1);
    jlhkel=strlen(teks2);
    jlhhuruf=jlhdepan+jlhkel;

cout << "Nama lengkap anda: " << teks1 << " " << teks2 << endl;
cout << "jumlah huruf nama anda: " << jlhhuruf << " huruf" << endl;

    system("PAUSE");
    return 0;
}