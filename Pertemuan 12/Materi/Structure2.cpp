#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
	string nama;
	int umur;
	float ipk;
};
float hitungRataRataIPK(mahasiswa Mahasiswa[], int jumlah){
float total=0;
for (int i=0;i<jumlah;++i){
	total+=Mahasiswa[i].ipk;
}
return total/jumlah;
}
int main (){
	const int jumlahMahasiswa = 3;
	mahasiswa daftarMahasiswa[jumlahMahasiswa];
	for (int i=0;i<jumlahMahasiswa;++i){
		cout<<"Masukkan Nama Mahasiswa : "<<i+1<<" ";
		cin>>daftarMahasiswa[i].nama;
		cout<<"Masukkan Umur Mahasiswa : "<<i+1<<" ";
		cin>>daftarMahasiswa[i].umur;
		cout<<"Masukkan IPK Mahasiswa : "<<i+1<<" ";
		cin>>daftarMahasiswa[i].ipk;
	}
	cout<<"\nData Mahasiswa :\n";
	for(int i=0;i<jumlahMahasiswa;++i){
		cout<<"Mahasiswa : "<<i+1<<":\n";
		cout<<"Nama : "<<daftarMahasiswa[i].nama<<":\n";
		cout<<"Umur : "<<daftarMahasiswa[i].umur<<":\n";
		cout<<"IPK  : "<<daftarMahasiswa[i].ipk<<":\n";
	}
	float ratarata=hitungRataRataIPK(daftarMahasiswa,jumlahMahasiswa);
	cout<<"\nRata Rata IPK : "<<ratarata<<"\n";
	return 0;
}

