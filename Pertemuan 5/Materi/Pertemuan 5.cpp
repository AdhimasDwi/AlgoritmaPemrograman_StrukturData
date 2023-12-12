#include <iostream>
using namespace std;
int main(){
	int x,bil = 0;
	cout<<"Masukkan Bilangan Pembatas Akhir : ";
	cin>>x;
	do{                         //aksi
		if (bil >= x )
		break;                 //berhenti
		cout<<bil<<" ";
	
	}
	while (bil+=4);            //syarat
	getchar();
}
