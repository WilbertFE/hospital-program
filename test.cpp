#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        double IPK;

        Mahasiswa(string nama, double IPK){
            Mahasiswa::nama = nama;
            Mahasiswa::IPK = IPK;
        }

        void tampilkanData(){
            cout << nama << endl;
            cout << IPK << endl;
        }
};


int main(int agrc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("Frieren", 9.0);
   
    return 0;
}