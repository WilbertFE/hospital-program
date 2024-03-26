#include <iostream>
using namespace std;

int main (){
    string aktivitas;
    string tempat;
    int umur;

    cout << "Apa aktivitas anda : ";
    getline(cin, aktivitas);

    cout << "Dimana anda " << aktivitas << " : ";
    getline(cin, tempat);

    cout << "Usia berapa anda : ";
    cin >> umur;

    cout << "Anda sedang " << aktivitas << " di " << tempat << endl;
    cout << "Anda berumur " << umur << " tahun";


    return 0;
}

