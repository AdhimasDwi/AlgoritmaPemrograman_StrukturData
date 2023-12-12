#include <iostream>
using namespace std;
//int main (){
//int a,b,c = 0,d = 0;
////clrscr ();
//cout<<"Masukkan Nilai A :";
//cin>>a;
//cout<<"Masukkan Nilai B :";
//cin>>b;
//d=a * b;
//cout <<"Hasil Dari D =A * B ="<<d<<endl;
//getchar();
//}


int main(){
	int x,y,tambah,kurang,kali,bagi;
	cout<< "Masukkan bilangan kesatu =";
	cin>>x;
	cout <<"Masukkan bilangan kedua =";
	cin>>y;
	tambah=x+y;
	kurang=x-y;
	kali=x*y;
	bagi=x/y;
	cout << "Jadi hasil penjumlahannya adalah"<<tambah<<endl;
	cout<< "Jadi hasil pengurangannya adalah"<<kurang<<endl;
	cout<<"Jadi hasil perkaliannnya adalah"<<kali<<endl;
	cout<<"Jadi hasil pembagiaannya adalah"<<bagi<<endl;
	return 0;

}
