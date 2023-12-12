#include <iostream>
using namespace std;
int main(){
	int I,II,III, rata = 0;
	string nama;
	cout<<"Program Hitung Nilai Rata-Rata \n=============================="<<endl;
	cout<<"Nama Siswa : ";
	cin>>nama;
	cout<<"\nNilai Pertandingan I\t : ";
	cin>> I;
	cout<<"Nilai Pertandingan II\t : ";
	cin>> II;
	cout<<"Nilai Pertandingan III\t : ";
	cin>> III;
	
	rata = (I + II + III) / 3;
	
	cout<<"\nSiswa Yang Bernama : "<<nama<<endl;
	cout<<"Memperoleh Nilai Rata-Rata : "<<rata<<endl; 
	
	if (rata >=85 ) {
		cout<<"Hadiah Yang Anda Dapatkan Adalah Komputer Core i5";
	} else if (rata >=70 && rata <=84){
		cout<<"Hadiah Yang Anda Dapatkan Adalah Uang Sebesar Rp.2.500.000";
	} else if (rata<70) {
		cout<<"Hadiah Yang Anda Dapatkan Adalah Hadiah Hiburan";
	}
	
	
getchar;

}
