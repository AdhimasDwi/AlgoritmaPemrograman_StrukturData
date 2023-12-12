#include <iostream>
using namespace std;
struct emp{
	int hasil1,hasil2,hasil3;
	char nama[40];
	
}obj[3];
//	int angka [9];
//	int jml_arr = sizeof(angka)/sizeof(*angka);
//	
//	for (int a=0;a<jml_arr;a++){
//		cout<<"Masukkan Jumlah Penjualan "<<a<<" : ";
//		cin>>angka[a];
//	}
int main(){
int i;
string nama;
for (int i=0;i<3;i++){
	cout<<" Masukkan Jumlah Penjualan : "<<i+1<<endl<<"Nama Barang,Hasil1,Hasil2,Hasil3 : \t\n";
	cin>>obj[i].nama>>obj[i].hasil1>>obj[i].hasil2>>obj[i].hasil3;	
}
cout<<"============================================"<<endl;
cout<<"No\tNama Barang\t2001\t2002\t2003"<<endl;
cout<<"============================================"<<endl;

	
	for (i=0;i<3;i++){
		cout<<i+1<<"\t"<<obj[i].nama<<"\t\t"<<obj[i].hasil1<<"\t"<<obj[i].hasil2<<"\t"<<obj[i].hasil3<<endl;
	}
	
	cout<<"============================================="<<endl;
}
	

