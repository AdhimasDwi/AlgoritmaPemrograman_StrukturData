#include <iostream>
using namespace std;
int pangkat (int a,int b){
	int hasil=a;
	for (int i=1;i<b;i++){
		hasil =hasil*a;
	}
	return hasil;
}
int main(){
	int a;
	int b;
//	string ulang;
//	do{
	cout<<"Masukkan Angka\t\t: ";
	cin>>a;
	cout<<"Masukkan Pangkat\t: ";
	cin>>b;
	cout<<endl;
	cout<<"Hasil "<<a<<" Dipangkatkan Dengan  "<<b<<" = "<<pangkat(a,b)<<endl;
//	cout<<"\nApakah Anda Ingin Mengulang Program [y / t] : ";
//	cin>>ulang;
//	system("cls");
//}while(ulang=="y");
//cout<<" PROGRAM SELESAI";
	cin.get();
	return 0;
}


//int main(){
//	int a;
//	int *b;
//	b=&a;
//	string ulang;
//	do{
//	
//	cout<<"Masukkan Bilangan : ";
//	cin>>a;
//	cout<<endl;
//	cout<<a<<" ";
//	if (a%2==0){
//		cout<<""<<a+1;
//	}else {
//		cout<<a+1;
//	}
//	cout<<" "<<*b;
//	cout<<"\n\nApakah Ingin Mengulang Program [y / t] : ";
//	cin>>ulang;
//	system("cls");
//}while (ulang=="y");
//cout<<"PROGRAM SELESAI";
//}
