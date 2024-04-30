#include <iostream>
using namespace std;

 int main (){
 	
 	int Pilihan, jml_barang, harga, total, bayar, diskon;
 	string item;
 	
 	cout<<"                     SELAMAT DATANG DI TOSERBA METHONAM         " <<endl;
     cout<<"             UNTUK MEMBELI BARANG SILAHKAN INPUT NO YANG TERSEDIA " <<endl;
     cout<<"                  UNTUK MASUK KE KASIR SILAHKAN INPUT NO 51     " << endl;
     
     
 	cout<<"                        ===========SELAMAT==========="<<endl;
 	cout<<"                        ==========BERBELANJA=========" <<endl;
     
 	cout<<"                             BARANG YANG TERSEDIA    "<<endl<<endl;
     
 	cout<<"1  - Minuman Soda      = Rp 7.000    "<< "27 - Margarin            = Rp 7.500"<<endl;
 	cout<<"2  - Minuman Manis     = Rp 5.000    "<< "28 - Gula                = Rp 18.000"<<endl;
 	cout<<"3  - Makanan Ringan    = Rp 3.000    "<< "29 - Garam               = Rp 4.000"<<endl;
 	cout<<"4  - Mie               = Rp 3.500    "<< "30 - Kopi                = Rp 5.000"<<endl;
 	cout<<"5  - Sayur             = Rp 3.000    "<< "31 - Kecap               = Rp 4.000"<<endl;
 	cout<<"6  - Buah              = Rp 20.000   "<< "32 - Susu bubuk          = Rp 3.000"<<endl;
 	cout<<"7  - Ice Cream         = Rp 10.000   "<< "33 - Mainan anak         = Rp 10.000"<<endl;
 	cout<<"8  - Alat Dapur        = Rp 35.000   "<< "34 - Sirup               = Rp 18.000"<<endl;
 	cout<<"9  - Rokok             = Rp 27.000   "<< "35 - Skin care           = Rp 80.000"<<endl;
 	cout<<"10 - Pampers           = Rp 2.500    "<< "36 - Obat                = Rp 50.000"<<endl;
 	cout<<"11 - Sabun             = Rp 4.000    "<< "37 - Deodorant           = Rp 7.000"<<endl;
 	cout<<"12 - Shampo            = Rp 15.000   "<< "38 - Parfum              = Rp 50.000"<<endl;
 	cout<<"13 - Minyak 2 liter    = Rp 18.000   "<< "39 - Pewangi pakaian     = Rp 5.000"<<endl;
 	cout<<"14 - Beras 10Kg        = Rp 128.000  "<< "40 - Detergen.           = Rp 20.000"<<endl;
 	cout<<"15 - Roti              = Rp 7.000    "<< "41 - Pensil              = Rp 2.000"<<endl;
 	cout<<"16 - Permen            = Rp 7.000    "<< "42 - Pulpen              = Rp 5.000"<<endl;
 	cout<<"17 - Coklat            = Rp 10.000   "<< "43 - Penghapus           = Rp 3.000"<<endl;
 	cout<<"18 - Pasta Gigi        = Rp 8.000    "<< "44 - Penggaris           = Rp 5.000"<<endl;
 	cout<<"19 - Sikat Gigi        = Rp 4.000    "<< "45 - Papan ujian         = Rp 15.000"<<endl;
 	cout<<"20 - Sabun Cuci Piring = Rp 3.000    "<< "46 - Stipo               = Rp 7.000"<<endl;
 	cout<<"21 - Pembersih Lantai  = Rp 5.000    "<< "47 - Rautan              = Rp 3.000"<<endl;
 	cout<<"22 - Pewangi Ruangan   = Rp 8.000    "<< "48 - Kertas hvs          = Rp 500"<<endl;
 	cout<<"23 - Hanger            = Rp 15.000   "<< "49 - Kertas double folio = Rp 1.000"<<endl;
 	cout<<"24 - Sapu              = Rp 31.000   "<< "50 - Buku tulis          = Rp 5.000"<<endl;
 	cout<<"25 - Pel               = Rp 20.000   "<< "51 - Selesai Belanja.              "<<endl;
 	cout<<"======================================================================="<<endl<<endl;
 	do{
 		cout<<"Masukkan No Barang Yang Anda Pilih: ";
 		cin>> Pilihan;
 		
 		switch(Pilihan){
 			case 1 :
 				item = "Minuman Soda";
 				harga = 7000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 2 : 
			    item = "Minuman Manis";
 				harga = 5000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break; 
 			case 3 :
 				item = "Makanan Ringan";
 				harga = 3000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 4 :
 				item = "Mie";
 				harga = 3500;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 5 :
 				item = "Sayur";
 				harga = 3000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 6 :
 				item = "Buah";
 				harga = 20000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 7 :
 				item = "Ice cream";
 				harga = 10000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 8 :
 				item = "Alat dapur";
 				harga = 35000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 9 :
 				item = "Rokok";
 				harga = 27000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 10 :
 				item = "Pampers";
 				harga = 2500;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 11 :
 				item = "Sabun";
 				harga = 4000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 12 :
 				item = "Shampo";
 				harga = 15000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 13 :
 				item = "Minyak";
 				harga = 18000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 14 :
 				item = "Beras";
 				harga = 128000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 15 :
 				item = "Roti";
 				harga = 7000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 16 :
 				item = "Permen";
 				harga = 7000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 17 :
 				item = "Coklat";
 				harga = 10000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 18 :
 				item = "Pasta gigi";
 				harga = 8000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 19 :
 				item = "Sikat gigi";
 				harga = 4000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 20 :
 				item = "Sabun cuci piring";
 				harga = 3000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 21 :
 				item = "Pembersih lantai";
 				harga = 5000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 22 :
 				item = "Pewangi ruangan";
 				harga = 8000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 23 :
 				item = "Hanger";
 				harga = 15000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 24 :
 				item = "Sapu";
 				harga = 31000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 25 :
 				item = "Pel";
 				harga = 20000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 26 :
 				item = "Telur";
 				harga = 28000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 27 :
 				item = "Margarin";
 				harga = 7500;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 28 :
 				item = "Gula";
 				harga = 18000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 29 :
 				item = "Garam";
 				harga = 4000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 30 :
 				item = "Kopi";
 				harga = 5000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 31 :
			    item = "Kecap";
 				harga = 4000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 32 :
 				item = "Susu bubuk";
 				harga = 3000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 33 :
 				item = "Mainan anak";
 				harga = 10000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 34 :
 				item = "Sirup";
 				harga = 18000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 35 :
 				item = "Skin care";
 				harga = 80000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 36 :
 				item = "Obat";
 				harga = 50000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 37 :
 				item = "Deodorant";
 				harga = 7000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 38 :
 				item = "Parfum";
 				harga = 50000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 39 :
 				item = "Pewangi pakaian";
 				harga = 5000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 40 :
 				item = "Detergen";
 				harga = 20000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 41 :
 				item = "Pensil";
 				harga = 2000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 42 :
 				item = "Pulpen";
 				harga = 5000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 43 :
			 item = "Penghapus";
 				harga = 3000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break; 
 			case 44 :
 				item = "Penggaris";
 				harga = 5000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 45 :
 				item = "Papan ujian";
 				harga = 15000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 46 :
 				item = "Stipo";
 				harga = 7000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 47 :
 				item = "Rautan";
 				harga = 3000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 48 :
 				item = "Kertas hvs";
 				harga = 500;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 49 :
 				item = "Kertas double folio";
 				harga = 1000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 50 :
 				item = "Buku tulis";
 				harga = 5000;
 				cout<< "Jumlah Barang : ";
 				cin>> jml_barang;
 				total += harga * jml_barang;
 				cout<< jml_barang << " " << item << " = Rp " << harga * jml_barang << endl << endl;
 				break;
 			case 51 :
			    cout<<endl<<endl;
                cout<<"====STRUK BELANJA===="<<endl;
				cout<<"Jumlah Bayar = " <<total<<endl;
				
				if(total >= 100000){
					diskon= 0.06* total;
				}	else if(total >= 50000){
					diskon= 0.04* total;
				}   else if(total >= 25000){
					diskon= 0.02* total;
				} else {
					diskon = 0;
				} 
 				cout << "Diskon        = "<<diskon<<endl;
 				cout << "Total Bayar   = "<<total-diskon << endl;
 				cout << "Bayar         = ";
 				cin >> bayar;
 				cout << "Kembalian     = " << (bayar - (total-diskon)) <<endl<<endl;
 				break;
 			default :
			    cout << "Mohon Input Nomor Yang Terdapat Di Daftar Barang!"<<endl<<endl;
			    break;
		
		 }
	 } while (Pilihan!= 51);
	 cout<< "TERIMA KASIH TELAH BERBELANJA DI SINI! "<<endl;
 	 
 	 return 0;
 }

    