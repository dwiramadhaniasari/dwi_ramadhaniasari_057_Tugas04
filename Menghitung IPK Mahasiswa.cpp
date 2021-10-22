//Program Menghitung IPK Mahasiswa

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

main(){
	menu:
	int n, i=1;
	float nilai,rata_rata,jmlh=0,jawab;
	
	cout<<"||================================||";
	cout<<"||PROGRAM MENGHITUNG IPK MAHASISWA||";
	cout<<"||================================||"<<endl<<endl;
	cout<<"Banyak Matkul="; cin>>n;
	while(i<=n){
		cout<<"Masukkan Nilai Mata Kuliah ke "<<i<<" (0=E 1=D 2=C 3=B 4=A)="; cin>>nilai;
		jmlh=jmlh+nilai;
		rata_rata=jmlh/n;
		i++;
	}
	cout<<"\nIPK="<<rata_rata;
	cout<<"\n\nIngin Kembali Menghitung IPK(0=tidak 1=iya)?="; cin>>jawab;
	if(jawab==1){
		system("cls");
		goto menu;
	}
	else if(jawab==0){
		cout<<"Terima Kasi:)";
	}
	getch ();
}
