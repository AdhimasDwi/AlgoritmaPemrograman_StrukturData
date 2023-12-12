#include <iostream>
using namespace std;
int main (){
	double phi =3.14;
	double L,r;
	cout<<"Menghitung Luas Lingkaran \n========================="<<endl;
	cout<<"Masukkan Jari-Jari Lingkaran = ";
	cin>>r;
	
	L = phi*r*r;
	
	cout<<"\nDiketahui :"<<endl;
	cout<<"phi \t\t ="<<phi<<endl;
	cout<<"Jari-Jari\t ="<<r<<" cm"<<endl<<endl;
	cout<<"Adalah :"<<endl;
	cout<<"L = phi x r x r \nL =("<<phi<<"x"<<r<<"x"<<r<<")"<<endl;
	cout<<"L ="<<L<<" cm2"<<endl;
	cout<<"Luas Lingkaran Tersebut Adalah ="<<L<<" cm2"<<endl<<endl<<endl;



	double Luas,a;
	cout<<"Menghitung Luas Lingkaran \n========================="<<endl;
	cout<<"Masukkan Jari-Jari Lingkaran = ";
	cin>>a; 
	cout<<"Masukkan Nilai phi\t     = 22/7 "<<endl;

	Luas = 22*a*a/7;
	
	cout<<"\nDiketahui :"<<endl;
	cout<<"phi \t\t = "<<"22/7"<<endl;
	cout<<"Jari-Jari\t = "<<a<<" cm"<<endl<<endl;
	cout<<"Adalah :"<<endl;
	cout<<"L = phi x r x r \nL =("<<"22/7"<<"x"<<a<<"x"<<a<<")"<<endl;
	cout<<"L ="<<Luas<<" cm2"<<endl;
	cout<<"Jadi Luas Lingkaran Tersebut Adalah ="<<Luas<<" cm2"<<endl<<endl<<endl;
	
	
	double V, c,d;
	cout<<"--------------------------------"<<endl;
	cout<<"Menghitung Volume Tabung"<<endl;
	cout<<"--------------------------------"<<endl;
	
	cout<<"Masukkan Jari-Jari Tabung (cm)\t : ";cin >>c;"\n\n";
	cout<<"Masukkan Tinggi Tabung (cm)\t : " ;cin>>d;
	
	V = phi*c*c*d;
	cout<<"\nDiketahui :\n";
	cout<<"phi\t  = "<<phi<<endl;
	cout<<"jari-jari = "<<c<<" cm"<<endl;
	cout<<"tinggi\t  = "<<d<<" cm"<<endl<<endl;
	cout<<"adalah : " <<endl;
	cout<<"V = phi x r x r x t \nV = ("<<phi<<"x"<<c<<"x"<<c<<"x"<<d<<")"<<endl;
	cout<<"V = "<<V<<" cm2"<<endl;
	cout<<"Volume Tabung Tersebut Adalah = " <<V<<" cm2"<<endl<<endl<<endl;
	
	
	double volume, e,f,g;
	cout<<"--------------------------------"<<endl;
	cout<<"Menghitung Volume Tabung"<<endl;

	cout<<"--------------------------------"<<endl;
	
	cout<<"Masukkan Jari-Jari Tabung (cm)\t : ";cin >>e;"\n\n";
	cout<<"Masukkan Tinggi Tabung (cm)\t : " ;cin>>f;
	cout<<"Masukkan Nilai Phi \t\t : ";cin>>g;
	
	volume = 22*e*e*f/7;
	
	cout<<"\nDiketahui :\n";
	cout<<"phi\t  = "<<"22/7"<<endl;
	cout<<"jari-jari = "<<e<<" cm"<<endl;
	cout<<"tinggi\t  = "<<f<<" cm"<<endl<<endl;
	cout<<"Adalah : " <<endl;
	cout<<"V = phi x r x r x t \nV = ("<<"22/7"<<"x"<<e<<"x"<<e<<"x"<<f<<")"<<endl;
	cout<<"V = "<<volume<<" cm2"<<endl;
	cout<<"Jadi Volume Tabung Tersebut Adalah = " <<volume<<" cm2"<<endl;
			
	return 0;
}
