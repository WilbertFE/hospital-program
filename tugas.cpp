#include <iostream>
using namespace std;

int main (){
    int pilihan;
    
    cout << "***************************" << endl;
    cout << "*** Program Rumah Sakit ***" << endl;
    cout << "***************************" << endl << endl;

    cout << "--Pilih Menu--" << endl;
    cout << "1. Konsultasi" << endl;
    cout << "2. Pengobatan Ringan" << endl;
    cout << "3. Rawat Inap" << endl << endl;
    cout << "Pilihan anda : ";
    cin >> pilihan;

    if(pilihan == 1){
        string nama, gender;
        int umur;

        cout << "*** Isi Formulir Berikut ***" << endl;
        
        cout << "Nama : ";
        cin >> nama;

        cout << "Umur : ";
        cin >> umur;

        cout << "Jenis Kelamin : ";
        cin >> gender;

    } else if (pilihan == 2){
        cout << "Pengobatan satu hari";
    } else if (pilihan == 3) {
        cout << "Pengobatan rawat inap";
    } else {
        cout << "Pilihan hanya 1-3";
    }

}
