#include <iostream>
using namespace std;

int main (){
    string nama, umur, jenisKelamin, semuaPenyakit[] = {"Batuk", "Pilek", "Masuk Angin", "Demam", "Sakit Gigi"}, penyakit;

    cout << "=================================" << endl;
    cout << "Program Pendaftaran Rumah Sakit" << endl;
    cout << "=================================" << endl;

    cout << "Masukkan nama anda : ";
    getline(cin, nama);

    cout << "Masukkan umur anda [tahun] : ";
    getline(cin, umur);

    cout << "Masukkan jenis kelamin anda [pria/wanita] : ";
    getline(cin, jenisKelamin);

    cout << "==================" << endl;
    cout << "Daftar Penyakit : " << endl;
    cout << "==================" << endl;

    for(int i = 0; i < 5; ++i){
        cout << i + 1 << ". " << semuaPenyakit[i] << endl;
    }
    cout << "==================" << endl;

    cout << "Pilih penyakit anda : ";
    getline(cin, penyakit);

    cout << penyakit;




    


    return 0;
}

