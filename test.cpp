#include <iostream>

using namespace std;

class Penyakit {
    public: 
      string nama;
      string obat[3];
      int totalHargaObat;
      
      Penyakit(string namaPenyakit, string obat1, string obat2, string obat3, int total){
        nama = namaPenyakit;
        obat[0] = obat1;
        obat[1] = obat2;
        obat[2] = obat3;
        totalHargaObat = total;
      }
};

class Dokter {
    public: 
      string nama;
      int hargaJasa;
      Penyakit* daftarPenyakit[2];

      Dokter(string namaDokter, int hargaJasaDokter){
        nama = namaDokter;
        hargaJasa = hargaJasaDokter;
      }
      void tambahPenyakit(Penyakit* penyakit, int index){
            daftarPenyakit[index] = penyakit;
      }
};






int main(){ 
    // variable data inap
    Dokter dokterInap[3] = {Dokter("Dokter Kulit", 300000), Dokter("Dokter Penyakit Dalam", 400000), Dokter("Dokter Umum", 200000)};
    Penyakit penyakitKulit[2] = {Penyakit("Herpes", "Acyclovir - Rp. 40000", "Famiciclovir - Rp. 25000", "Penciclovir - Rp. 35000", 100000), Penyakit("Infeksi Kulit", "Nyastin - Rp. 20000", "Fluconazole - Rp. 15000", "Ketoconazole - Rp. 40000", 75000)};

    // Hubungkan class Dokter dan Class Penyakit
    for(int i = 0; i < 2; i++){
        dokterInap[0].tambahPenyakit(&penyakitKulit[i], i);
    }

    cout << dokterInap[0].daftarPenyakit[0] -> nama << endl;
    cout << dokterInap[0].daftarPenyakit[1] -> nama << endl;

    return 0;
}