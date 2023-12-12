#include<iostream>
using namespace std;

double hitungK(double a,double b){
	double K= 2 * ( a + b)
	return K;
}

const double phi =3.14;
double hitungL(double c){
	double L = phi * (c * c);
	return L;
}

const double pi = 3.14;
double hitungV(double d,double e){
	double V = pi * (d * d * e);
	return V;
}

void tampilK(double a ,double b){
	double K = hitungK(a,b);
	cout<<"K\t= 2 x (p + l) "<<endl;
	cout<<"K\t= "<<2<<" x ("<< a<<" + "<<b<<")"<<endl;
	cout<<"K\t= "<<K<<endl;
}

void tampilL(double c){
	double L = hitungL(c);
	cout<<"L\t= phi  x r x r"<<endl;
	cout<<"L\t= "<<phi<<" x "<<c<<" x "<<c<<endl;
	cout<<"L\t= "<<L<<endl;
}

void tampilV(double d,double e){
	double V = hitungV(d,e);
	cout<<"V\t= phi  x r x r x t"<<endl;
	cout<<"V\t= "<<pi<<" x "<<d<<" x "<<d<<" x "<<e<<endl;
	cout<<"V\t= "<<V<<endl;
}

int main(){
	string ulang;
	do{
	
	double a,b,c,d,e;
	cout<<"Masukkan Panjang Persegi\t: ";
	cin>>a;
	cout<<"Masukkan Lebar Persegi\t\t: ";
	cin>>b;
	tampilK(a,b);
	cout<<"========================================="<<endl;
	cout<<"Masukkan Jari-Jari Lingkaran\t: ";
	cin>>c;
	tampilL(c);
	cout<<"========================================="<<endl;
	cout<<"Masukkanm jari-Jari Tabung\t: ";
	cin>>d;
	cout<<"Masukkan Tinggi Tabung\t\t: ";
	cin>>e;
	tampilV(d,e);

cout<<"Ingin Mengulang Program [y / t] : ";
cin>>ulang;	
system ("cls");
}while (ulang == "y");
cout<<"Program Selesai";
return 0;
}
