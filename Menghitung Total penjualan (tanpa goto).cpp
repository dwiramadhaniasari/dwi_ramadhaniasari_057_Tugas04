//Menghitung total Belanja

#include<iostream>
#include<conio.h>

using namespace std;

main(){
	menu:
	int jmlhbrg, n, harga=0, harga_total, i=1, jawab;
	
	cout<<"||==================================||"<<endl;
	cout<<"||PROGRAM MENGHITUNG TOTAL BELANJAAN||"<<endl;
	cout<<"||==================================||"<<endl<<endl;
	
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Silahkan Masukan Data Di Bawah Ini"<<endl;
	cout<<"Jumlah Barang="; cin>>jmlhbrg;
	while(i<=jmlhbrg){
		cout<<"Masukkan Harga Barang ke "<<i<<" ="; cin>>n;
		harga=harga+n;
		i++;
	}
	cout<<"----------------------------------------"<<endl<<endl;
	
	if (harga>=500000){
		harga_total=harga-(harga*0.1);
	}
	else if(harga>=200 && jmlhbrg<=500000){
		harga_total=harga-(harga*0.5);
	}
	else if(harga<=200000){
		harga_total=harga;
	}
	
	cout<<"------------------------------------------"<<endl;
	cout<<"Harga Asli="<<harga<<endl;
	cout<<"Harga Setelah Di Diskon="<<harga_total<<endl;
	cout<<"-------------------------------------------"<<endl<<endl;
	
	getch();
}
