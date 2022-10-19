#include <iostream>
using namespace std;

string baju[15] = {
		"Baju Koko",
		"Baju Gamis",
		"Baju Batik",
		"Baju Organisasi",
		"Baju Olahraga",
		"Seragam Pramuka",
		"Seragam SMA",
		"Seragam SMP",
		"Seragam SD",
		"Baju Futsal",
		"Baju Voli",
		"Baju Tidur",
		"Baju Riding",
		"Dress",
		"Baju Kemeja"
	};
	
double harga[15] = {
		100000,
		120000,
		50000,
		40000,
		90000,
		75000,
		67000,
		92000,
		110000,
		89000,
		94000,
		90000,
		78000,
		87000,
		80000
	};
	
void showMenu(){
	cout << "\n|===========================================|";
    cout << "\n|           PROGRAM PEMESANAN BAJU          |";
    cout << "\n|===========================================|";
    cout << "\n\nDaftar jenis baju yang dijual :" << endl;
    cout << "-------------------------------------------|" << endl;
    
    for (int i = 0; i < 15; i++){
    	cout << "\t" << i+1 << ". " << baju[i] << " - (Rp" << harga[i] << ")" << endl;
	}
	
	cout << "-------------------------------------------|" << endl;
}

int main(){
	while (true) {
	
		int jumlah_pesan, uang_bayar, kembalian;
		char ulangi;
		
		showMenu();
		
		cout << "Silahkan Lakukan Pemesanan !!!" << endl;
		cout << "-------------------------------------------|" << endl;
		
		cout << "\nMasukkan jumlah baju yang ingin dipesan : ";
		cin >> jumlah_pesan;
		
		string list_baju_pesan[jumlah_pesan];
		double list_harga_pesan[jumlah_pesan];
		
		for (int i = 0; i < jumlah_pesan; i++){
			cout << "\n---------------------------------------------------|" << endl;
			int no_baju;
			int harga_baju;
			
			cout << "\nBaju ke-" << i+1 << "\n" << "(Masukkan nomor baju yang ada pada menu [1..15]) : ";
			cin >> no_baju;
			list_baju_pesan[i] = baju[no_baju-1];
			list_harga_pesan[i] = harga[no_baju-1];
		}
		
		cout << "\n---------------------------------------------------|\n" << endl;
		
		cout << "|--------------------|" << endl;
		cout << "|Deskripsi Pesanan   |" << endl;
		cout << "|--------------------|" << endl;
		
		cout << "\n----------------------------------|" << endl;
		
		for (int i = 0; i < jumlah_pesan; i++){
			cout << "\nPesanan ke-" << i+1 << " : " << list_baju_pesan[i] << endl;
			cout << "\nHarga : Rp" << list_harga_pesan[i] << endl;
			cout << "\n----------------------------------|" << endl;
		}
		
		int total_baju_pesan = jumlah_pesan;
		double total_harga = 0;
		
		for (int i = 0; i < jumlah_pesan; i++){
			total_harga+= list_harga_pesan[i];
		}
		
		cout << "\nTotal Baju dipesan : " << total_baju_pesan << " buah." << endl;
		cout << "\nTotal Harga Pesanan : " << "Rp" << total_harga << endl;
		
		cout << "\n----------------------------------|" << endl;
		
		while(true) {
			cout << "\nPembayaran" << endl;
			cout << "---------------" << endl;
			cout << "Total Harga : Rp" << total_harga << endl;
			cout << "Masukkan Uang Bayar (Rp) : ";
			cin >> uang_bayar;
			
			if (uang_bayar >= total_harga){
				kembalian = uang_bayar - total_harga;
				cout << "Uang Kembalian : Rp" << kembalian << endl;
				cout << "\nPembayaran Berhasil..." << endl;
				break;
			} else {
				cout << "Uang yang dibayarkan kurang !!!" << endl;
				cout << "Pembayaran Gagal..." << endl;
			}
		}
		
		cout << "\n----------------------------------" << endl;
		cout << "Ingin melakukan pemesanan lagi? [y/n] : ";
		cin >> ulangi;
		
		if (ulangi == 'n'){
			break;
		}
	}
	
	cout << "\nPROGRAM SELESAI...\nTERIMA KASIH..." << endl;
	
	return 0; 
}
