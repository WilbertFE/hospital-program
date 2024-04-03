#include <iostream>
using namespace std;

int main (){
    int pil;

    cout << "Pilih jenis kelamin\n1. Laki-laki\n2. Perempuan" << endl;
    cout << "Masukkan pilihan = ";
    cin >> pil;

    if(pil == 1){
        cout << "Jenis kelamin saya adalah laki-laki" << endl;
    } else if(pil == 2){
        cout << "Jenis kelamin saya adalah perempuan" << endl;
    } else {
        cout << "Pilihan yang tersedia hanya [1, 2]" << endl;
    }

    cout << "Just commit";


    return 0; 
}