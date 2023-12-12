#include <iostream>
using namespace std;
//void garis(){
//	cout<<"-------------------------------------\n";
//}
//
//int main(){
//	garis();
//	cout<<"\nIBI KESATUAN BOGOR"<<endl;
//	garis();
//	getchar();
//}


int kali (int a,int b){
int hasil=a*b;
return hasil;	
}

int main (){
	int hasil, a,b;
	cout<<"Masukkan Nilai a = ";
	cin>>a;
	cout<<"Masukkan Nilai b = ";
	cin>>b;
	hasil = kali(a,b);
	cout<<"Hasil Perkalian = "<<hasil<<endl;
	getchar();
}
