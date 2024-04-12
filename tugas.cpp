#include <iostream>
using namespace std;

int main (){
    // variable formulir
    const string daftarPenyakit[3] = {"Demam", "Batuk", "Pilek"};
    string nama, jenisKelamin, ulang = "y";
    int umur, penyakit;
    // variabel dokter
    const string daftarDokter[3] = {"Dr. Taiyo", "Dr. Sri", "Dr. Theo"};
    string dokter;

    cout << "*************************" << endl;
    cout << "** PROGRAM RUMAH SAKIT **" << endl;
    cout << "*************************" << endl;

    while(ulang == "y"){
    cout << "Silahkan Isi Formulir Berikut" << endl;

    cout << "Nama Lengkap \t\t\t : ";
    getline(cin, nama);
    cout << "Umur (angka) \t\t\t : ";
    cin >> umur;

    cin.ignore();

    cout << "Jenis Kelamin (pria/wanita) \t : ";
    getline(cin, jenisKelamin);

    cout << endl;

    cout << "*************************" << endl;
    cout << "** PILIH PENYAKIT ANDA **" << endl;
    cout << "*************************" << endl;

    for(int i = 0; i < sizeof(daftarPenyakit) / sizeof(*daftarPenyakit); i++){
        cout << (i+1) << ". " << daftarPenyakit[i] << endl;
    }
    cout << "Penyakit Anda (angka) : ";
    cin >> penyakit;

    cout << "*************************" << endl;
    cout << "** INI DATA ANDA **" << endl;
    cout << "*************************" << endl; 

    cout << "Nama \t\t : " << nama << endl;
    cout << "Umur \t\t : " << umur << " tahun" << endl;
    cout << "Jenis Kelamin \t : " << jenisKelamin << endl; 
    cout << "Penyakit \t : " << daftarPenyakit[penyakit] << endl;

    cin.ignore();
    cout << "Apakah Anda Ingin Mengulang [y/n] : ";
    getline(cin, ulang);

    cout << endl << endl;
    }

    switch (penyakit)
    {
    case 1 :
        cout << "*************************" << endl;
        cout << "** PILIH DOKTER ANDA **" << endl;
        cout << "*************************" << endl;
        for(int i = 0; i < sizeof(daftarDokter) / sizeof(*daftarDokter); i++){
            cout << (i+1) << ". " << daftarDokter[i] << endl;
        }
        cout << "Pilih Dokter (angka) : ";
        getline(cin, dokter);
        break;
    
    default:
        break;
    }

    cout << "Program Selesai";
    return 0;   
}
