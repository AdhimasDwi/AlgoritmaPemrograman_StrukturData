#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy (int x,int y){
	
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(){
	cout<<"Daftar Harga Fried Chicken"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<" Kode   |    Jenis  |    Harga   |"<<endl;
	cout<<" D           Dada        Rp.2500 "<<endl;
	cout<<" S           Sayap       Rp.2000 "<<endl;
	cout<<" P           Paha        Rp.1500 "<<endl;
    cout<<"----------------------------------";
	gotoxy(0,9);cout<<"Nama Pembeli : ";
	gotoxy(0,10);cout<<"=======================================================================";
	gotoxy(0,11);cout<<"| No | Jenis Potong    | Harga Satuan  | Banyak Beli  | Jumlah Harga |";
	gotoxy(0,12);cout<<"=======================================================================";
	for(int i=1;i<=5;i++){
		gotoxy(0,12+i);
		cout<<"|    |                 |               |              |              |";
	}
	gotoxy(0,18);cout<<"======================================================================";
	gotoxy(0,19);cout<<"|                                        Jumlah Bayar |              |";
	gotoxy(0,20);cout<<"|                                            Pajak 10%|              |";
	gotoxy(0,21);cout<<"|                                          Total Bayar|              |";
	gotoxy(0,22);cout<<"======================================================================";
int i=1;
char jw,namapembeli[40];
int jenispotongan;
float hargasatuan,banyakbeli,jumlahharga,jumlahbayar=0,pajak,totalbayar;
	gotoxy(15,9);cin>>namapembeli;
	do{
	gotoxy(2,12+i); cout<<i;
	gotoxy(13,12+i);cin>>jenispotongan;
	switch (jenispotongan){
		case "s" ||"S":
		cout<<"Rp.2500";
		break;
	gotoxy(30,12+i);cout<<hargasatuan;	
	}
	gotoxy(46,12+i);cin>>banyakbeli;
	jumlahharga=hargasatuan*banyakbeli;
	gotoxy(58,12+i);cout<<"Rp."<<jumlahharga;
	jumlahbayar=jumlahbayar+jumlahharga;
	pajak=(jumlahbayar*10)/100;
	gotoxy(59,19);cout<<"Rp."<<jumlahbayar;
	gotoxy(59,20);cout<<"Rp."<<pajak;
	totalbayar=jumlahbayar-pajak;
	gotoxy(59,21);cout<<"Rp."<<totalbayar;
	gotoxy(40,9);cout<<"Isi Data Lagi [Y / T] : ";
	cin>>jw;
	i++;
	gotoxy(40,4);cout<<"                             ";
	}while(jw=='y'||jw=='Y');
	getch();
}
