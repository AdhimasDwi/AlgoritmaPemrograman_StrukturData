#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char kata[20];
	float angka,a;
	cout<<"Masukkan Sembarang Angka = ";
	cin>>kata;
	angka=atol(kata);
	a=angka +8;
	cout<<"Hasil Perubahan Ditambah Dengan 8 = "<<a;
	getchar();
}

