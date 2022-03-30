#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	int pilihan, jumlah, total, tb, ongkir;
	double jarak;
	cout<<"=====Rumah Makan DEPI======="<<endl;
	cout<<"1. Ayam geprek 21000"<<endl;
	cout<<"2. Ayam goreng 17000"<<endl;
	cout<<"3. Udang goreng 19000"<<endl;
	cout<<"4. Cumi goreng 20000"<<endl;
	cout<<"5. Ayam bakar 25000"<<endl;
	
	cout<<"Masukkan pilihan : ";cin>>pilihan;
	cout<<"Masukkan jumlah : ";cin>>jumlah;
	cout<<"Jarak rumah dari restoran (km): ";cin>>jarak;
	
	if(jarak<=3.0){
		cout<<"Anda dikenai ongkir sebanyak Rp15.000"<<endl;
		ongkir = 15000;
	}
	else if(jarak>=3.0){
		cout<<"Anda dikenai ongkir sebanyak Rp25.000"<<endl;
		ongkir = 25000;
	}
	cout<<endl;
	
	if(pilihan==1 ){
		cout<<"Anda telah membeli Ayam geprek sejumlah "<<jumlah<<" dengan harga satuan "<<" Rp21.000"<<endl;
		total = jumlah * 21000 ;
		cout<<"Total : "<<total<<endl;
	}
	else if (pilihan==2 ){
		cout<<"Anda telah membeli Ayam goreng sejumlah "<<jumlah<<" dengan harga satuan "<<" Rp17.000"<<endl;
		total = jumlah * 17000 ;
		cout<<"Total : "<<total<<endl;
	}
	else if (pilihan==3 ){
		cout<<"Anda telah membeli Udang goreng sejumlah "<<jumlah<<" dengan harga satuan "<<" Rp19.000"<<endl;
		total = jumlah * 19000 ;
		cout<<"Total : "<<total<<endl;
	}
	else if (pilihan==4 ){
		cout<<"Anda telah membeli Cumi goreng sejumlah "<<jumlah<<" dengan harga satuan "<<" Rp20.000"<<endl;
		total = jumlah * 20000 ;
		cout<<"Total : "<<total<<endl;
	}
	else if (pilihan==5 ){
		cout<<"Anda telah membeli Ayam bakar sejumlah "<<jumlah<<" dengan harga satuan"<<" Rp25.000"<<endl;
		total = jumlah * 25000 ;
		cout<<"Total : "<<total<<endl;
	}

	if(25000<=total<=50000){
		cout<<"Selamat Anda mendapat potongan ongkir!!"<<endl;
		tb = total - ongkir - 3000;
		cout<<"Total bayar : "<<tb<<endl; 
	}
	else if (50000<=total<=150000){
		cout<<"Selamat Anda mendapat potongan ongkir!!"<<endl;
		tb = total - ongkir - 5.000 - (0.15*total);
		cout<<"Total bayar : "<<tb<<endl;
	}
	else if (total>=150000){
		cout<<"Selamat Anda mendapat potongan ongkir!!"<<endl;
		tb = total - ongkir - 8000 - (0.35*total);
		cout<<"Total bayar : "<<tb<<endl;
	}
		ofstream coba ;
		coba.open ("strukku.txt");

			coba << "    STRUK RUMAH MAKAN DEPI\n";
			coba << " ===================================\n";
			coba << " [1] Ayam Geprek  Rp 21.000\n";
			coba << " [2] Ayam Goreng  Rp 17.000\n";
			coba << " [3] Udang Goreng Rp 19.000\n";
			coba << " [4] Cumi Goreng  Rp 20.000\n";
			coba << " [5] Ayam Bakar   Rp 25.000\n ";
			coba << " Pesanan : " << pilihan << endl;
			coba << " Jumlah  : " << jumlah << endl;
			coba << " Total   : " << total << endl;
			coba << " Total bayar : " << tb << endl;
			coba << " ==================================\n";
			coba.close();}
