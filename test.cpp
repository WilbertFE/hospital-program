#include <iostream>
using namespace std;

int main (){
    int a, hasil;
    cout << "Masukkan bilangan bulat = ";
    cin >> a;

    hasil = a % 2;

    string kondisi = hasil == 1 ? "Ganjil" : "Genap";

    cout << "angka " << a << " adalah bilangan " << kondisi;


    return 0;
}