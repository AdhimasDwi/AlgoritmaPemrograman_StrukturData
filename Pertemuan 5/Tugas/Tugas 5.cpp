#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	int x=2,hasil=0;
	while(x<20){
		if (x<20){
			cout<<x<<" + ";
		}else {
			cout<<x;
		}
		hasil = hasil + x;
		x+=2;
}
	cout<<"= "<<hasil;	


//
//	int x=1,hasil=0;
//	while(x<20){
//		if (x<20){
//			cout<<x<<" + ";
//		}else {
//			cout<<x;
//		}
//		hasil = hasil + x;
//		x+=2;
//}
//	cout<<"= "<<hasil;




//cout<<"------------------------------ "<<endl;
//cout<<"Program Dengan Pernyataan Goto "<<endl;
//cout<<"------------------------------ "<<endl<<endl;
//
//int a,b;
//char ulang;
//awal:
//cout<<"Masukkan Bilangan = ";
//cin>>a;
//
//b=a%2;
//cout<<"Nilai Sisa Baginya adalah = "<<b<<endl<<endl;
//
//cout<<"Ingin Menghitung lagi (y/t) ? ";
//cin>>ulang;
////	system ("cls");
//cout<<endl;
//
//if (ulang=='Y' ||ulang=='y'){
//	goto awal;
//}
//if (ulang=='T' ||ulang=='t'){
//	cout<<"Program Selesai";
//goto akhir;
//
//
//}akhir:



//cout<<"--------------------------- "<<endl;
//cout<<"Perulangan FOR Dengan BREAK "<<endl;
//cout<<"--------------------------- ";
//
//int a=3,b=2,c=1,bil;
//cout<<endl<<endl;
//cout<<"BIL-A | BIL-B | BIL-C\n";
//cout<<"-----------------------"<<endl;
//
//for(bil=1;bil<=10;++bil){
//	a+=b;b+=c;c+=2;
//		cout<<endl;
//	printf("\n%d\t| %d\t| %d",a,b,c);
//	if(c==13){
//	
//	break;
//}
//}
	getche();
}
