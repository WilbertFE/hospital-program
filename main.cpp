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

void header(){
    cout << "=========================" << endl;
    cout << "== PROGRAM RUMAH SAKIT ==" << endl;
    cout << "=========================" << endl;
    cout << "==== by kel. wilbert ====" << endl;
    cout << "=========================" << endl;
    cout << ">>>   Jenis Layanan   <<<" << endl;
    cout << "=========================" << endl;
    cout << "====  1. Rawat Inap  ====" << endl;
    cout << "====  2. Rawat Jalan ====" << endl;
    cout << "=========================" << endl << endl;
}

void tampilkanJenisPembayaran(){
    cout << "============================" << endl;
    cout << ">>>   Jenis Pembayaran   <<<" << endl;
    cout << "============================" << endl;
    cout << "====      1. Umum       ====" << endl;
    cout << "====      2. BPJS       ====" << endl;
    cout << "============================" << endl << endl;
}

void rawatInapUmum(){
    cout << "Rawat Inap Umum";
}

void rawatInapBPJS(){
    cout << "Rawat Inap BPJS";
}



int main(){
    // variable data inap
    Dokter dokterInap[3] = {Dokter("Dokter Kulit", 300000), Dokter("Dokter Penyakit Dalam", 400000), Dokter("Dokter Umum", 200000)};
    Penyakit penyakitKulit[2] = {Penyakit("Herpes", "Acyclovir - Rp. 40000", "Famiciclovir - Rp. 25000", "Penciclovir - Rp. 35000", 100000), Penyakit("Infeksi Kulit", "Nyastin - Rp. 20000", "Fluconazole - Rp. 15000", "Ketoconazole - Rp. 40000", 75000)};
    // variable harga
    int hargaInap = 0, hargaDokter = 0, hargaObat = 0, totalHarga = 0;
    // variable umum
    string jenisLayanan, ulang = "y";

   while(ulang == "y"){
    pilihJenisLayanan:
        header();
        cout << "Pilih [angka] = ";
        getline(cin, jenisLayanan);

    if(jenisLayanan == "1"){
        string jenisPembayaran;
        pilihJenisPembayaran: 
            tampilkanJenisPembayaran();
            cout << "Pilih [angka] = ";
            getline(cin, jenisPembayaran);
        
        if(jenisPembayaran == "1"){
            rawatInapUmum();
        } else if (jenisPembayaran == "2"){
            rawatInapBPJS();
        } else {
            goto pilihJenisPembayaran;
        }
    } else if (jenisLayanan == "2"){
        cout << "Rawat Jalan";
    } else {
        goto pilihJenisLayanan;
    }
    ulang = "n";
   }



    cout << "\nProgram Selesai";
    return 0;
}

