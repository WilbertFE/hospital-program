#include <iostream>
using namespace std;

int main (){
    double L, a, t;

    cout << "Menghitung luas segitiga\n===============================" << endl;
    cout << "Masukkan alas \t= ";
    cin >> a;
    cout << "Masukkan tinggi \t= ";
    cin >> t;

    L = (a * t) / 2;

    cout << "Luas segitiga yang diketahui : " << endl;
    cout << "alas\t=" << a << "cm" << endl;
    cout << "tinggi\t=" << t << "cm" << endl;
    cout << "adalah : " << endl;
    cout << "L = (a x t) / 2";
     

    return 0;
}

