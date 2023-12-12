#include <stdlib.h>
#include<iostream>
using namespace std;
int main(){
	char kata[20];
	float angka,a,b;
	cout<<"Masukkan Sembarang Kata Berupa Angka = ";
	cin>>kata;
	angka =atoi(kata);
	a=angka+7;
	cout<<" Hasil Perubahan Ditambah Dengan 7 = "<<a;
	getchar();
}
