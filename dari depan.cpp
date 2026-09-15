#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

int main () {
    string nama[5] = {
        "Andi",
        "budi",
        "citra",
        "deni",
        "eka"
    };

    int nilai[5][3] = {
        {80,75,85},
        {90,80,85},
        {75,90,80},
        {85,85,90},
        {70,80,85}
    };
    int dataNilai[2][5][3] = {
        {
            {80,75,85},
            {90,80,85},
            {75,90,80},
            {85,85,90},
            {70,80,75}
        },
        {
            {85,80,90},
            {75,85,90},
            {90,90,85},
            {80,75,80},
            {95,85,90}
        }
    };
    int pilihan;
    do{
        cout << "\n==========================\n";
        cout << "   PROGRAM DATA NILAI SISWA\n";
        cout << "==========================";
        cout << "1. tampilkan array 1 dimensi\n";
        cout << "2. tampilkan array 2 dimensi\n";
        cout << "3. hitung rata rata siswa\n";
        cout << "4. tampilkan array 3 dimensi\n";
        cout << "5. hitung rata rata setiap kelas\n";
        cout << "6. keluar\n";
        cout << "==========================";
        cout << "pilih menu : ";
        cin >> pilihan;

        if(pilihan == 1){
            cout << "\n--- ARRAY 1 DIMENSI ---\n";

            for (int i = 0 ; i < 5; i++){
                cout<< "Nama siswa ke-" << i+1
                    << " : " << nama[i] << endl;
            }
        }
        else if (pilihan == 2){
            cout << "\n--- array 2 dimensi ---\n";
             
            cout << left
                <<setw(10) <<"nama"
                <<setw(15) <<"informatika"
                <<setw(15) << "matematika"
                <<setw(10) << "b. indonesia"
                <<endl;
           
            cout << "==========================================\n";

            for (int i = 0; i < 5; i++) {
              
            cout << left << setw(10) << nama[i];

            for (int j = 0; j < 3; j++) {
            cout << setw(15) <<nilai[i][j];
            }

            cout << endl;
            }
        }
        else if (pilihan == 3) {

        cout << "\n--- RATA-RATA NILAI SISWA ---\n";

        for (int i = 0; i < 5; i++){
           int jumlah = 0;
            for(int j=0;j < 3; j++){
                jumlah += nilai[i][j];
            }   
            float rata = (float)jumlah / 3;
                cout<< nama[i]
                    << "-> Jumlah ="<< jumlah
                    << ", Rata-rata ="
                    << fixed << setprecision(2)
                    << rata << endl;
            }
        }
        else if (pilihan==4){
            cout << "\n--- Array 3 Dimensi ---\n";
            for  ( int kelas = 0; kelas < 2; kelas++) {
                cout<< "\nKELAS VII "
                    << (kelas == 0 ? "A" : "B") << endl;
                cout<< "---------------------------------\n";
                for (int siswa = 0; siswa < 5; siswa++){
                    cout << nama[siswa] << " : ";
                    for (int mapel = 0; mapel < 3; mapel++){
                        cout << dataNilai[kelas][siswa][mapel]
                             << " ";
                    }
                    cout << endl;
                }
            }
        }
        else if (pilihan==5){
            cout << "\n--- Rata rata setiap kelas ---\n";
            for (int kelas=0; kelas < 2; kelas++){
                int total=0;
                for (int siswa = 0; siswa<5; siswa++){
                    for (int mapel=0; mapel < 3; mapel++){
                    total += dataNilai[kelas][siswa][mapel];
                    }
                }
                float rata = (float)total/(5*3);
                cout << "Kelas VII "
                     << (kelas == 0 ? "A":"B")
                     << " = "
                     << fixed <<setprecision(2)
                     << rata << endl;
            }
        }
        else if (pilihan==6){
            cout << "\nPilihan tidak tersedia.\n";
        }
        else {
            cout << "pilihan tidak tersedia\n";
        }
    }while(pilihan!=6);
    return 0;
}
