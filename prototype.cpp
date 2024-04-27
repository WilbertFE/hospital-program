#include <iostream>
using namespace std;

// deklarasi
class Dokter;
class Penyakit;
class Obat;

class Dokter {
    public:
        string name;
        int harga;
        Penyakit* penyakit[2]; 

        Dokter(string name, int harga){
            Dokter::name = name;
            Dokter::harga = harga;
        }
        void tambahPenyakit(Penyakit* penyakit, int index){
            Dokter::penyakit[index] = penyakit;
        }
};

class Penyakit {
    public:
        string name;
        Obat* obat[3];

        Penyakit(string name){
            Penyakit::name = name;
        }
        void tambahObat(Obat* obat, int index){
            Penyakit::obat[index] = obat;
        }
};

class Obat {
    public: 
        string name;
        int harga;

        Obat(string name, int harga){
            Obat::name = name;
            Obat::harga = harga;
        }
};

int main(){
    Dokter dokterInap[1] = {Dokter("Dokter Kulit", 400000)};
    Penyakit penyakitKulit[2] = {Penyakit("Herpes"), Penyakit("Infeksi Kulit")};
    Obat obatHerpes[3] = {Obat("Acyclovir", 40000), Obat("Famiciclovir", 25000), Obat("Penciclovir", 35000)};
    Obat obatInfeksiKulit[3] = {Obat("Nyastin", 20000), Obat("Fluconazole", 15000), Obat("Ketoconazole", 40000)};

    for(int i = 0; i < 3; i++){
        penyakitKulit[0].tambahObat(&obatHerpes[i], i);
    }
    for(int i = 0; i < 3; i++){
        penyakitKulit[1].tambahObat(&obatInfeksiKulit[i], i);
    }
    for(int i = 0; i < 2; i++){
        dokterInap[0].tambahPenyakit(&penyakitKulit[i], i);
    }

    const Dokter dokterKulit = dokterInap[0];

    cout << dokterKulit.penyakit[1] -> obat[2]->harga;
    

    cout << "\nProgram Selesai";
    return 0;
}