#include <iostream>
#include <string> // untuk konversi string ke integer
#include <cctype> // untuk mengecek input adalah angka
using namespace std;

// deklarasi 
class Penyakit;
class Dokter;
void header();
void tampilkanPembayaran();
void tampilkanKamar();
void tampilkanDokter(Dokter *dokter);
void tampilkanPenyakit(Dokter *dokter, int index);
void tampilkanObat(Dokter *dokterInap, int index, int index2);
void rawatPasien(Dokter *dokter, int *hargaInap, int *hargaDokter, int *hargaObat, int *totalHarga, bool inap);

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

class Penyakit {
    public: 
      string nama;
      string obat[3];
      int totalHargaObat;
      
      Penyakit(string namaPenyakit, string obat1, string obat2, string obat3, int totalHargaObat){
        nama = namaPenyakit;
        obat[0] = obat1;
        obat[1] = obat2;
        obat[2] = obat3;
        Penyakit::totalHargaObat = totalHargaObat;
      }
};

int main(){
    
    // class variable
    Dokter dokterInap[3] = {Dokter("Dokter Kulit", 300000), Dokter("Dokter Penyakit Dalam", 400000), Dokter("Dokter Umum", 200000)};
    Penyakit penyakitKulit[2] = {Penyakit("Herpes", "Acyclovir - Rp. 40000", "Famiciclovir - Rp. 25000", "Penciclovir - Rp. 35000", 100000), Penyakit("Infeksi Kulit", "Nyastin - Rp. 20000", "Fluconazole - Rp. 15000", "Ketoconazole - Rp. 40000", 75000)};
    Penyakit penyakitDalam[2] = {Penyakit("Tuberkulosis", "Pyrazinamide - Rp. 100000", "Amikacin - Rp. 50000", "Ciprofloxacin - Rp. 70000", 220000), Penyakit("Stroke", "Tensicap - Rp. 40000", "Pradaxa - Rp. 70000", "Cholestor - Rp. 50000", 160000)};
    Penyakit penyakitUmum[2] = {Penyakit("Demam Berdarah", "Paracetamol - Rp. 40000", "Kalnex - Rp. 30000", "Vermint - Rp. 45000", 105000), Penyakit("Malaria", "Doxycycline - Rp. 30000", "Primaquine - Rp. 20000", "Doxicor - Rp. 15000", 65000)};
    Dokter dokterJalan[3] = {Dokter("Dokter Umum", 100000), Dokter("Dokter Gigi", 200000), Dokter("Dokter Telinga", 250000)};
    Penyakit penyakitUmum2[2] = {Penyakit("Demam", "Sanmol - Rp. 10000", "Paracetamol - Rp. 12000", "Panadol - Rp. 10000", 32000), Penyakit("Batuk", "OBH - Rp. 20000", "Siladex - Rp. 10000", "Komix - Rp. 7000", 37000)};
    Penyakit penyakitGigi[2] = {Penyakit("Gigi Berlubang", "Aloclair - Rp. 10000", "Sanmol Forte - Rp. 10000", "Paracetamol - Rp. 12000", 32000), Penyakit("Sariawan", "Kuldon - Rp. 10000", "Hexadol - Rp. 5000", "Alocair - Rp. 10000", 25000)};
    Penyakit penyakitTelinga[2] = {Penyakit("Otitis Eksterna", "Ciprodex - Rp. 20000", "Vosol HC - Rp. 25000", "Tazicef - Rp. 15000", 60000), Penyakit("Otitis Media", "Paracetamol - Rp. 12000", "Ibuprofen - Rp. 12000", "Amoxsan - Rp. 10000", 34000)};
    // Menghubungkan class Dokter dengan class Penyakit
    for(int i = 0; i < sizeof(penyakitKulit) / sizeof(*penyakitKulit); i++){
        dokterInap[0].tambahPenyakit(&penyakitKulit[i], i);
    }
    for(int i = 0; i < sizeof(penyakitDalam) / sizeof(*penyakitDalam); i++){
        dokterInap[1].tambahPenyakit(&penyakitDalam[i], i);
    }
    for(int i = 0; i < sizeof(penyakitUmum) / sizeof(*penyakitUmum); i++){
        dokterInap[2].tambahPenyakit(&penyakitUmum[i], i);
    }
    for (int i = 0; i < sizeof(penyakitUmum2) / sizeof(*penyakitUmum2); i++){
        dokterJalan[0].tambahPenyakit(&penyakitUmum2[i], i);
    }
    for (int i = 0; i < sizeof(penyakitGigi) / sizeof(*penyakitGigi); i++){
        dokterJalan[1].tambahPenyakit(&penyakitGigi[i], i);
    }
    for (int i = 0; i < sizeof(penyakitTelinga) / sizeof(*penyakitTelinga); i++){
        dokterJalan[2].tambahPenyakit(&penyakitTelinga[i], i);
    }

    //variable
    int hargaInap = 0, hargaDokter = 0, hargaObat = 0, totalHarga = 0;
    string jenisLayanan, ulang = "y";
    bool bpjs, inap;
    

   while(ulang == "y"){
    pilihLayanan:
        header();
        cout << "Pilih [1 - 2] = ";
        cin >> jenisLayanan;
        cout << endl;

    if(jenisLayanan == "1" || jenisLayanan == "2"){
        string jenisPembayaran;

        if(jenisLayanan == "1") inap = true;
        else inap = false;

        pilihPembayaran: 
            tampilkanPembayaran();
            cout << "Pilih [1 - 2] = ";
            cin >> jenisPembayaran;
            cout << endl;
        
        if(jenisPembayaran == "1") bpjs = false;
        else if(jenisPembayaran == "2") bpjs = true;
        else goto pilihPembayaran;

        if(jenisLayanan == "1"){
            rawatPasien(dokterInap, &hargaInap, &hargaDokter, &hargaObat, &totalHarga, inap);
        } else {
            rawatPasien(dokterJalan, &hargaInap, &hargaDokter, &hargaObat, &totalHarga, inap);
        }
    } else {
        goto pilihLayanan;
    }

    totalHarga = hargaInap + hargaDokter + hargaObat;

    cout << "+++++++++++++++++++++++++++" << endl;
    cout << "Harga Inap\t= " << "Rp. " << hargaInap << endl;
    cout << "Harga Jasa\t= " << "Rp. " << hargaDokter << endl;
    cout << "Harga Obat\t= " << "Rp. " << hargaObat << endl;
    cout << "Total Harga\t= " << "Rp. " << totalHarga << endl;
    cout << "+++++++++++++++++++++++++++" << endl;

    if(bpjs) cout << "Harus Dibayar\t= " << "Lunas Oleh BPJS" << endl << endl;
    else cout << "Harus Dibayar\t= " << "Rp. " << totalHarga << endl << endl;
    
    cout << "Ulang Program [y/n] = ";
    cin >> ulang;
    cout << endl;
   }


    cout << "\nProgram Selesai";
    return 0;
}

void rawatPasien(Dokter *dokter, int *hargaInap, int *hargaDokter, int *hargaObat, int *totalHarga, bool inap){
    string kamar, pilihDokter, penyakit;
    int lamaInap;

    // mencari harga inap
    if(inap){
        pilihKamar:
            tampilkanKamar();
            cout << "Pilih [1 - 2]\t\t= ";
            cin >> kamar;
        
        //guard
        if(kamar != "1" && kamar != "2") goto pilihKamar;
        
        cout << "Lama Inap [angka]\t= ";
        cin >> lamaInap;
        cout << endl;

        if(kamar == "1") *hargaInap = 1000000 * lamaInap;
        else *hargaInap = 500000 * lamaInap;
    }

    // mencari harga dokter
    pilihDokter: 
        tampilkanDokter(dokter);
        cout << "Pilih [1 - 3] = ";
        cin >> pilihDokter;
        cout << endl;

        // guard
    if(pilihDokter != "1" && pilihDokter != "2" && pilihDokter != "3"){
        goto pilihDokter;
    }

    const int indexDokter = stoi(pilihDokter) - 1;
    *hargaDokter = dokter[indexDokter].hargaJasa;

    // mencari harga obat
    pilihPenyakit: 
        tampilkanPenyakit(dokter, indexDokter);
        cout << "Pilih [1 - 2] = ";
        cin >> penyakit;
        cout << endl;

        // guard
    if(penyakit != "1" && penyakit != "2"){
        goto pilihPenyakit;
    }
    const int indexPenyakit = stoi(penyakit) - 1;
    *hargaObat = dokter[indexDokter].daftarPenyakit[indexPenyakit] -> totalHargaObat;
    tampilkanObat(dokter, indexDokter, indexPenyakit);
}

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

void tampilkanPembayaran(){
    cout << "============================" << endl;
    cout << ">>>   Jenis Pembayaran   <<<" << endl;
    cout << "============================" << endl;
    cout << "====      1. Umum       ====" << endl;
    cout << "====      2. BPJS       ====" << endl;
    cout << "============================" << endl << endl;
}

void tampilkanKamar(){
    cout << "=======================" << endl;
    cout << ">>>   Jenis Kamar   <<<" << endl;
    cout << "=======================" << endl;
    cout << "====    1. VVIP    ====" << endl;
    cout << "====    2. Biasa   ====" << endl;
    cout << "=======================" << endl << endl;
}

void tampilkanDokter(Dokter *dokter){
    cout << "========================" << endl;
    cout << ">>>   Pilih Dokter   <<<" << endl;
    cout << "=======================" << endl;
    for(int i = 0; i < 3; i++){
        cout << (i+1) << ". " << dokter[i].nama << endl;
    }
    cout << "=======================" << endl << endl;
}

void tampilkanPenyakit(Dokter *dokter, int index){
    cout << "==========================" << endl;
    cout << ">>>   Pilih Penyakit   <<<" << endl;
    cout << "==========================" << endl;
    for(int i = 0; i < 2; i++){
        cout << (i+1) << ". " << dokter[index].daftarPenyakit[i] -> nama << endl;
    }
    cout << endl;
}

void tampilkanObat(Dokter *dokterInap, int index, int index2){
    cout << "=============================" << endl;
    cout << ">>>   Daftar Obat   <<<" << endl;
    cout << "=============================" << endl;
    for(int i = 0; i < 3; i++){
        cout << (i+1) << ". " << dokterInap[index].daftarPenyakit[index2] -> obat[i] << endl;
    }
}