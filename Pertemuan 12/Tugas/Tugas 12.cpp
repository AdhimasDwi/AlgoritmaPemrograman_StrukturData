#include<iostream>
#include<conio.h>
using namespace std;
struct mhs{
	char nama[20], nim[10], matkul[10];
	int sks;
};
struct mhs bayar[2];
int main()
{
	int  var, tetap;
	for(int i=0;i<2;i++)
	{
		//input data
		cout<<"Nama Mahasiswa\t\t= "; cin>>bayar[i].nama;
		cout<<"NIM\t\t\t= "; cin>>bayar[i].nim;
		cout<<"Mata Kuliah\t\t= ";cin>>bayar[i].matkul;
		cout<<"Jumlah SKS\t\t= "; cin>>bayar[i].sks;
		if(bayar[i].sks==0)
			{
			tetap=250000;
			var=bayar[i].sks*250000;
			}
		else if(bayar[i].sks==2)
			{
			tetap=300000;
			var=bayar[i].sks*300000;
			}
		cout<<"";
		//output data
		cout<<"\n\n--------------------------\n";
		cout<<"      Output      ";
		cout<<"\n--------------------------\n";
		cout<<"\nNama Mahasiswa\t\t= "<<bayar[i].nama;
		cout<<"\nNIM\t\t\t= "<<bayar[i].nim;
		cout<<"\nMata Kuliah\t\t= "<<bayar[i].matkul;
		cout<<"\nJumlah sks\t\t= "<<bayar[i].sks;
		cout<<"\nSpp tetap\t\t= "<<tetap;
		cout<<"\nSpp variabel\t\t= "<<var;
		cout<<"\n\n--------------------------------";
		cout<<endl<<endl;	
	}
	getch();
}




//struct name{
//	char name[20];
//};
//struct roll{
//	char roll[20];
//	struct name info;
//}data;
//
//int main(){
//	cout<<"Masukkan Nama Mahasiswa\t\t: ";
//	cin>>data.info.name;
//	cout<<"Masukkan Status Mahasiswa\t: ";
//	cin>>data.roll;
//	
//	cout<<"\n\n---Data Store Completed---\n\n";
//	cout<<"Nama : "<<data.info.name<<"\nRoll : "<<data.roll;
//}




