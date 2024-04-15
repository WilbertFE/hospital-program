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

      Dokter(string namaDokter, int hargaJasaDokter){
        nama = namaDokter;
        hargaJasa = hargaJasaDokter;
      }
};





int main(){
    // variable data inap
    Dokter dokterInap[3] = {Dokter("Dokter Kulit", 300000), Dokter("Dokter Penyakit Dalam", 400000), Dokter("Dokter Umum", 200000)};
    Penyakit penyakitKulit[2] = {Penyakit("Herpes", "Acyclovir - Rp. 40000", "Famiciclovir - Rp. 25000", "Penciclovir - Rp. 35000", 100000), Penyakit("Infeksi Kulit", "Nyastin - Rp. 20000", "Fluconazole - Rp. 15000", "Ketoconazole - Rp. 40000", 75000)};

    // Hubungkan class Dokter dan Class Penyakit

    int hargaInap = 0;
    int hargaDokter = 0;
    int hargaObat = 0;
    // variable umum
    int jenisLayanan;
    int totalHarga;
    string nama, umur, jenisKelamin;

    

    cout << "=========================" << endl;
    cout << "== PROGRAM RUMAH SAKIT ==" << endl;
    cout << "=========================" << endl;
    cout << "==== by kel. wilbert ====" << endl;
    cout << "=========================" << endl << endl;

    cout << "=== SILAHKAN ISI DATA ===" << endl;
    cout << "Nama \t\t= ";
    getline(cin, nama);
    cout << "Umur [angka] \t= ";
    getline(cin, umur);
    cout << "Jenis Kelamin \t= ";
    getline(cin, jenisKelamin);

    // spasi
    cout << endl;
    
    cout << "***   Jenis Layanan   ***" << endl;
    cout << "1. Rawat Inap\n2. Rawat Jalan" << endl << endl;
    cout << "Pilih [angka] = ";
    cin >> jenisLayanan;

    // spasi
    cout << endl;

    if(jenisLayanan == 1){
        // variable kamar
        int kamar, lamaMenginap;
        // variable dokter
        int dokter;

        cout << "======================" << endl;
        cout << "== PILIH KAMAR ANDA ==" << endl;
        cout << "======================" << endl;
        cout << "==  1. Kamar VVIP   ==" << endl;
        cout << "==  1. Kamar Biasa  ==" << endl;
        cout << "======================" << endl << endl;

        cout << "Pilih Kamar [angka] \t= ";
        cin >> kamar;
        cout << "Lama Menginap [angka] \t= ";
        cin >> lamaMenginap;

        // spasi
        cout << endl;

        if(kamar == 1 && lamaMenginap > 0){
            hargaInap = 1000000 * lamaMenginap;
        } else if (kamar == 2 && lamaMenginap > 0){
            hargaInap = 500000 * lamaMenginap;
        } else {
            cout << "Ada kesalahan, silahkan mulai ulang program";
            return 0;
        }

        cout << "=======================" << endl;
        cout << "== PILIH DOKTER ANDA ==" << endl;
        cout << "=======================" << endl;

        for(int i = 0; i < sizeof(dokterInap) / sizeof(*dokterInap); i++){
            cout << (i+1) << ". " << dokterInap[i].nama << endl;
        }
        // spasi
        cout << endl;

        cout << "Pilih Dokter = ";
        cin >> dokter;

        // guard
        if(!(dokter > 0 && dokter < 4)){
            cout << "Ada kesalahan, silahkan mulai ulang program";
            return 0;
        }
        hargaDokter = dokterInap[dokter - 1].hargaJasa;

        // spasi 
        cout << endl;

        cout << "=========================" << endl;
        cout << "== PILIH PENYAKIT ANDA ==" << endl;
        cout << "=========================" << endl;

        if(dokter == 1){
            // variable penyakit
            int penyakit;

            for(int i = 0; i < sizeof(penyakitKulit) / sizeof(*penyakitKulit); i++){
                cout << (i+1) << ". " << penyakitKulit[i].nama << endl;
            }
            // spasi 
            cout << endl;

            cout << "Pilih Penyakit = ";
            cin >> penyakit;

            // spasi 
            cout << endl;

            // guard
            if(!(penyakit > 0 && penyakit < 3)){
                cout << "Ada kesalahan, silahkan mulai ulang program";
                return 0;
            }
            
            cout << "=========================" << endl;
            cout << "== OBAT PENYAKIT ANDA ==" << endl;
            cout << "=========================" << endl;


            for(int i = 0; i < sizeof(penyakitKulit[penyakit - 1].obat) / sizeof(*penyakitKulit[penyakit - 1].obat); i++){
                cout << (i+1) << ". " << penyakitKulit[penyakit - 1].obat[i] << endl;
            }
            hargaObat = penyakitKulit[penyakit - 1].totalHargaObat;
            // spasi
            cout << endl;
        }
    } else if(jenisLayanan == 2){
        cout << "Rawat Jalan";
    } else {
        cout << "Ada kesalahan, silahkan mulai ulang program";
        return 0;
    }

    totalHarga = hargaInap + hargaDokter + hargaObat;

    cout << "====================" << endl;
    cout << "== DATA DIRI ANDA ==" << endl;
    cout << "====================" << endl;
    
    cout << "Nama \t\t= " << nama << endl;
    cout << "Umur \t\t= " << umur << " tahun" << endl;
    cout << "Jenis Kelamin \t= " << jenisKelamin << endl;
    cout << "Harga Inap \t= " << hargaInap << endl;
    cout << "Harga Jasa \t= " << hargaDokter << endl;
    cout << "Harga Obat \t= " << hargaObat << endl;
    cout << "Total \t\t= " << totalHarga << endl;


    cout << "\nProgram Selesai";
    return 0;
}