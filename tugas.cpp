#include <iostream>
using namespace std;

int main (){
    const string daftarPenyakit[3] = {"Demam", "Batuk", "Pilek"};
    string nama, jenisKelamin, ulang;
    int umur, penyakit;

    cout << "*************************" << endl;
    cout << "** PROGRAM RUMAH SAKIT **" << endl;
    cout << "*************************" << endl;

    cout << "Silahkan Isi Formulir Berikut : " << endl;

    cout << "Nama Lengkap \t\t\t :";
    getline(cin, nama);
    cout << "Umur (angka) \t\t\t :";
    cin >> umur;

    cin.ignore();
    cout << "Jenis Kelamin (pria/wanita) \t :";
    getline(cin, jenisKelamin);


    cout << "*************************" << endl;
    cout << "** PILIH PENYAKIT ANDA **" << endl;
    cout << "*************************" << endl << endl;

    for(int i = 0; i < sizeof(daftarPenyakit) / sizeof(*daftarPenyakit); i++){
        cout << (i+1) << ". " << daftarPenyakit[i] << endl;
    }
    cout << "Penyakit Anda (nomor) : ";
    cin >> penyakit;

    cout << "*************************" << endl;
    cout << "** INI DATA ANDA **" << endl;
    cout << "*************************" << endl; 
    
    cout << "Apakah Anda Ingin Mengulangnya [y/n] : ";
    cin >> ulang;



    return 0;   
}
