#include <iostream>
using namespace std;

// deklarasi
class Dokter;
class Penyakit;
class Obat;
void connectObatToPenyakit(Penyakit* penyakit, Obat obat[]);
void connectPenyakitToDokter(Dokter* dokter, Penyakit penyakit[]);
void header();
void tampilkanLayanan();
void tampilkanPembayaran();
void tampilkanKamar();
void tampilkanPenyakit(Dokter *dokter, int index);
void tampilkanDokter(Dokter *dokter);
void tampilkanObat(Dokter *dokterInap, int index, int index2);
void rawatPasien(Dokter *dokter, int *hargaInap, int *hargaDokter, int *hargaObat, int *totalHarga, bool inap);


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

int main() {
    Dokter dokterInap[3] = {Dokter("Dokter Kulit", 300000), Dokter("Dokter Penyakit Dalam", 400000), Dokter("Dokter Umum", 200000)};
    Dokter dokterJalan[3] = {Dokter("Dokter Umum", 100000), Dokter("Dokter Gigi", 200000), Dokter("Dokter Telinga", 250000)};
    // dokter kulit (dokter inap)
    Penyakit penyakitKulit[2] = {Penyakit("Herpes"), Penyakit("Infeksi Kulit")};
    Obat obatHerpes[3] = {Obat("Acyclovir", 40000), Obat("Famiciclovir", 25000), Obat("Penciclovir", 35000)};
    Obat obatInfeksiKulit[3] = {Obat("Nyastin", 20000), Obat("Fluconazole", 15000), Obat("Ketoconazole", 40000)};
    // dokter penyakit dalam (dokter inap)
    Penyakit penyakitDalam[2] = {Penyakit("Tuberkolosis"), Penyakit("Stroke")};
    Obat obatTuberkolosis[3] = {Obat("Pyrazinamide", 100000), Obat("Amikacin", 50000), Obat("Ciprofloxacin", 70000)};
    Obat obatStroke[3] = {Obat("Tensicap", 40000), Obat("Pradaxa", 70000), Obat("Cholestor", 50000)};
    // dokter umum (dokter inap)
    Penyakit penyakitUmum[2] = {Penyakit("Demam Berdarah"), Penyakit("Malaria")};
    Obat obatDemamBerdarah[3] = {Obat("Paracetamol", 40000), Obat("Kalnex", 30000), Obat("Vermint", 45000)};
    Obat obatMalaria[3] = {Obat("Doxycycline", 30000), Obat("Primaquine", 20000), Obat("Doxicor", 15000)};
    // dokter umum (dokter jalan)
    Penyakit penyakitUmumJalan[2] = {Penyakit("Demam"), Penyakit("Batuk")};
    Obat obatDemam[3] = {Obat("Sanmol", 10000), Obat("Paracetamol", 12000), Obat("Panadol", 10000)};
    Obat obatBatuk[3] = {Obat("OBH", 10000), Obat("Siladex", 17000), Obat("Komix", 13000)};
    // dokter gigi (dokter jalan)
    Penyakit penyakitGigi[2] = {Penyakit("Gigi Berlubang"), Penyakit("Sariawan")};
    Obat obatGigiBerlubang[3] = {Obat("Aloclair", 10000), Obat("Sanmol Forte", 12000), Obat("Paracetamol", 10000)};
    Obat obatSariawan[3] = {Obat("Kuldon", 10000), Obat("Hexador", 17000), Obat("Aloclair", 10000)};
    // dokter telinga (dokter jalan)
    Penyakit penyakitTelinga[2] = {Penyakit("Otitis Eksterna"), Penyakit("Otitis Media")};
    Obat obatEksterna[3] = {Obat("Ciprodex", 10000), Obat("Vosol HC", 12000), Obat("Tazicef", 10000)};
    Obat obatMedia[3] = {Obat("Paracetamol", 10000), Obat("Ibuprofen", 17000), Obat("Amoxan", 10000)};


    // menghubungkan class dokter kulit (dokter inap)
    connectObatToPenyakit(&penyakitKulit[0], obatHerpes);
    connectObatToPenyakit(&penyakitKulit[1], obatInfeksiKulit);
    connectPenyakitToDokter(&dokterInap[0], penyakitKulit);
    // menghubungkan class dokter penyakit dalam (dokter inap)
    connectObatToPenyakit(&penyakitDalam[0], obatTuberkolosis);
    connectObatToPenyakit(&penyakitDalam[1], obatStroke);
    connectPenyakitToDokter(&dokterInap[1], penyakitDalam);
    // menghubungkan class dokter umum (dokter inap)
    connectObatToPenyakit(&penyakitUmum[0], obatDemamBerdarah);
    connectObatToPenyakit(&penyakitUmum[1], obatMalaria);
    connectPenyakitToDokter(&dokterInap[2], penyakitUmum); 
    // menghubungkan class dokter umum (dokter jalan)
    connectObatToPenyakit(&penyakitUmumJalan[0], obatDemam);
    connectObatToPenyakit(&penyakitUmumJalan[1], obatBatuk);
    connectPenyakitToDokter(&dokterJalan[0], penyakitUmumJalan); 
    // menghubungkan class dokter gigi (dokter jalan)
    connectObatToPenyakit(&penyakitGigi[0], obatGigiBerlubang);
    connectObatToPenyakit(&penyakitGigi[1], obatSariawan);
    connectPenyakitToDokter(&dokterJalan[1], penyakitGigi); 
    // menghubungkan class dokter telinga (dokter jalan)
    connectObatToPenyakit(&penyakitTelinga[0], obatEksterna);
    connectObatToPenyakit(&penyakitTelinga[1], obatMedia);
    connectPenyakitToDokter(&dokterJalan[2], penyakitTelinga); 

    // variable harga
    int hargaInap = 0, hargaDokter = 0, hargaObat = 0, totalHarga = 0;
    string jenisLayanan, ulang = "y";
    bool bpjs, inap;
    // variable registrasi
    string namaPasien, umurPasien, jenisKelaminPasien;
    
    header();
    cout << "Masukkan Nama\t\t\t= ";
    getline(cin, namaPasien);
    cout << "Masukkan Umur [angka]\t\t= ";
    getline(cin, umurPasien);
    cout << "Masukkan Gender [pria/wanita]\t= ";
    getline(cin, jenisKelaminPasien);

    while(ulang == "y"){
        pilihLayanan:
            tampilkanLayanan();
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

        cout << "=========================" << endl;
        cout << "===      DATA DIRI    ===" << endl;
        cout << "=========================" << endl;
        cout << "Nama\t= " << namaPasien << endl;
        cout << "Umur\t= " << umurPasien << " tahun" << endl;
        cout << "Gender\t= " << jenisKelaminPasien << endl;

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

    cout << "\nProgram Selesai 5";
    return 0;
}

void rawatPasien(Dokter *dokter, int *hargaInap, int *hargaDokter, int *hargaObat, int *totalHarga, bool inap){
    string kamar, penyakit;
    int lamaInap, totalHargaObat = 0;
    int pilihDokter;

    // mencari harga inap
    if(inap){
        pilihKamar:
            tampilkanKamar();
            cout << "Pilih [1 - 2]\t\t= ";
            cin >> kamar;
        
        //guard
        if(kamar != "1" && kamar != "2") goto pilihKamar;

        masukkanLamaInap:
            cout << "Lama Inap [angka]\t= ";
            cin >> lamaInap;
            cout << endl;

        //guard
        if(lamaInap <= 0) goto masukkanLamaInap;

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
    if(pilihDokter != 1 && pilihDokter != 2 && pilihDokter != 3){
        goto pilihDokter;
    }

    const int indexDokter = pilihDokter - 1;
    if(inap) *hargaDokter = dokter[indexDokter].harga * lamaInap;
    else *hargaDokter = dokter[indexDokter].harga;

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

    for(int i = 0; i < 3; i++){
        totalHargaObat += dokter[indexDokter].penyakit[indexPenyakit] -> obat[i] ->harga;
    }
    *hargaObat = totalHargaObat;
    tampilkanObat(dokter, indexDokter, indexPenyakit);
}

void connectObatToPenyakit(Penyakit* penyakit, Obat obat[]) {
    for(int i = 0; i < 3; i++) {
        penyakit->tambahObat(&obat[i], i);
    }
}

void connectPenyakitToDokter(Dokter* dokter, Penyakit penyakit[]){
    for(int i = 0; i < 2; i++) {
        dokter->tambahPenyakit(&penyakit[i], i);
    }
}

void header(){
    cout << "=========================" << endl;
    cout << "== PROGRAM RUMAH SAKIT ==" << endl;
    cout << "=========================" << endl;
    cout << "==== by kel. wilbert ====" << endl;
    cout << "=========================" << endl;
    cout << "====  Masukkan Data  ====" << endl;
    cout << "=========================" << endl << endl;
}

void tampilkanLayanan(){
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
        cout << (i+1) << ". " << dokter[i].name << endl;
    }
    cout << "=======================" << endl << endl;
}

void tampilkanPenyakit(Dokter *dokter, int index){
    cout << "==========================" << endl;
    cout << ">>>   Pilih Penyakit   <<<" << endl;
    cout << "==========================" << endl;
    for(int i = 0; i < 2; i++){
        cout << (i+1) << ". " << dokter[index].penyakit[i] -> name << endl;
    }
    cout << endl;
}

void tampilkanObat(Dokter *dokterInap, int indexDokter, int indexPenyakit){
    cout << "=============================" << endl;
    cout << ">>>   Daftar Obat   <<<" << endl;
    cout << "=============================" << endl;
    for(int i = 0; i < 3; i++){
        cout << (i+1) << ". " << dokterInap[indexDokter].penyakit[indexPenyakit] -> obat[i] -> name << " -";
        cout << " Rp. " << dokterInap[indexDokter].penyakit[indexPenyakit] -> obat[i] -> harga << endl;
    }
}