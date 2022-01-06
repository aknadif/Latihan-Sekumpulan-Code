#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


struct pasien{
	char nama[20];
	char alamat[20];
	int usia;
	char jk[20];
	int telp;
};
pasien psn[20];
int a,b,c,d;

// Input Data Pasien
void inputdata(){
	cout<<"Masukkan Jumlah Pasien yang mengantri = ";cin >> b;
		d=0;
		for (c=0; c<b; c++){
		d=d+1;
			cout<<"Data Pasien Ke - "<< d <<endl;
			cout<<"Masukkan Nama Pasien : ";cin>>psn[a].nama;
			cout<<"Masukkan Alamat Pasien : ";cin>>psn[a].alamat;
			cout<<"Masukkan Usia Pasien : ";cin>>psn[a].usia;
			cout<<"Masukkan Jenis Kelamin Pasien :";cin>>psn[a].jk;
			cout<<"Masukkan Nomor Telepon Pasien : ";cin>>psn[a].telp;
			cout<<endl;
			a++;
			}system("clear");
}
// Lihat Data Pasien
void lihatdata(){
	int i,j;
	cout<<"======================\n";
	cout<<"\nTampilan Data Pasien\n";
	cout<<"======================\n";
 	j=0;
 	for(i=0;i<a;i++)
 	{j=j+1;
  cout<<"Pasien ke -"<< j  <<endl;
  cout<<"Nama Pasien adalah "<<psn[i].nama<<endl;
  cout<<"Alamat Pasien adalah "<<psn[i].alamat<<endl;
  cout<<"Usia Pasien adalah "<<psn[i].usia<<endl;
  cout<<"Jenis Kelamin Pasien adalah "<<psn[i].jk<<endl;
  cout<<"Nomer Telepon Pasien adalah "<<psn[i].telp<<endl;
  cout<<endl;}
}
//Panggil Pasien
void panggilpasien(){
	int x,y;
 	cout<<"Panggil Pasien ke-";cin>>x;
	y=x-1;
	a--;
	for(int i=y;i<a;i++)
	{psn[i]=psn[i+1];}
	system("clear");
	cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Pasien ke-"<<x<<" Terpanggil ++++++++++++++++++++++++++++++";
	getch();system("clear");
}
//Searching Pasien
void caridata(){
	int y,z;
	char nama[20];
	cout<<"  Masukkan Nama Pasien yang akan dicari = ";
	cin>>nama;
	for(int y=0; y<a;y++)
	{
		if(strstr(psn[y].nama,nama))
		{
			cout<<endl;
			cout<<"Nama Pasien 			= "<<psn[y].nama<<endl;
  			cout<<"Alamat Pasien 		= "<<psn[y].alamat<<endl;
			cout<<"Usia Pasien			= "<<psn[y].usia<<endl;
			cout<<"Jenis Kelamin Pasien = "<<psn[y].jk<<endl;
			cout<<"Nomer Telepon Pasien = "<<psn[y].telp<<endl;
			cout<<endl;
		}
		
	}	
}
int k, j, l;
//Sorting Data Pasien
void sorting (int z, pasien psn[20]){
 pasien temp;
 for (k=0;k<z;k++){
  for (j=k+1;j<z;j++){
   for (l=0;l<30;l++){
    if (psn[k].nama[l] < psn[j].nama[l]){
     break;
    }else if (psn[k].nama[l] > psn[j].nama[l]){
     temp=psn[k];
     psn[k]=psn[j];
     psn[j]=temp;
     break;
    }
   }
  }
 }
}


int main()
{
	int pilih;
	char w;
	menu:
	cout<< "----------------------------------" <<endl;
	cout<< "-----Antrian Rumah Sakit Sakti----" <<endl;
	cout<< "----------------------------------" <<endl;
	cout<< "1. Tambah Antrian Pasien" <<endl;
	cout<< "2. Lihat Data Pasien" <<endl;
	cout<< "3. Panggil Pasien" <<endl;
	cout<< "4. Cari Data Pasien" <<endl;
	cout<< "5. Urutkan Data Pasien Berdasarkan Nama" <<endl;
	cout<< "6. Exit" <<endl;
	cout<< "----------------------------------" <<endl;
	cout<< "-----Masukkan Pilihan (1-6)-------" <<endl;
	cout<<endl;
	cin>>pilih;

	if(pilih==1)
   {system("clear");inputdata();goto menu;}
    
	if(pilih==2)
   {system("clear");lihatdata();goto menu;}
	
	if(pilih==3)
   {system("clear");panggilpasien();goto menu;}
   
    if(pilih==4)
   {system("clear");caridata();goto menu;}
   
    if(pilih == 5)
	{system("clear");
	sorting(b,psn);
 	cout<<"\n";
 	cout<<"Setelah diurutkan : \n";
 	for (k=0;k<b;k++){
  	cout<<"%s\n"<<psn[k].nama;
 	}
	cout<<"Data Pasien Telah Diurutkan Berdasarkan Nama !!!";goto menu;}


	if(pilih==6)
   {system("clear");
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {system("clear");
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(w=='n'||w=='N')
           {system("clear");goto menu;}}

	else
	{cout<<"Mohon pilh angka antara nomer 1-6"<<endl;system("PAUSE");goto menu;	}

   getch();
}
