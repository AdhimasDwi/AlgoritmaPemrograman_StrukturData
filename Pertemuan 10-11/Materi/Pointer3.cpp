#include<iostream>
using namespace std;
int tambahkanArray(const int* arr,int ukuran){
	int hasil=0;
	for (int i=0;i<ukuran; ++i){
		hasil +=*arr;
		arr++;
	}
	return hasil;
}

int main (){

	int ukuranArray;
	cout<<"Masukkan Ukuran Array : ";
	cin>>ukuranArray;
	
	int arrayAngka[ukuranArray];
	cout<<"Masukkan Elemen Array : "<<endl; 
	
	for(int i=0;i<ukuranArray;i++){
		cout<<"Elemen Ke-"<<i+1<<": "; 
		cin>>arrayAngka[i];
	
	}
	
	int total=tambahkanArray(arrayAngka, ukuranArray);
	cout<<"Hasil Penjumlahan Array : "<<total<<endl;
	return 0;
}
