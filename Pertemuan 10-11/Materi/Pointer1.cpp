#include<iostream>
using namespace std;

void Hitung(int &a){
	if (b%2==0){
		b=b+1;
	}else {
		cout<<b;
	}
}


int main(){
	int b;
	cout<<"Masukkan Bilangan : ";
	cin>>b;
	hitung(b);
	cout<<b;
	return 0;
	
}
//void penjumlahan (int &total){
//	total =total+1;
//}
//
//int main(){
//	int hitung=20;
//	int result=0;
//	penjumlahan(hitung);
//	cout<<"---Pass by Reference ---\n";
//	cout<<"total = ";
//	cout<<hitung;
//	return 0;
//}
//void nama(string *b){
//	cout<<"Alamat Nama : "<<b<<endl;
//	cout<<"Nama        : "<<*b<<endl;
//}
//
//int main (){
//	string kalimat;
//cout<<"Masukkan Nama : "<<kalimat;
//cin>>kalimat;
////cout<<"Nama : "<<kalimat<<endl;
//nama(&kalimat);
//	return 0;
//}
