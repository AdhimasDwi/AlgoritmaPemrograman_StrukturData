#include <iostream>
using namespace std;
 int main(){
// 	for (int r = 1;r<=6;r++){
// 		cout<<"1 ";
//	 } cout<<endl;
//	 for (int s = 1;s<=6;s++){
// 		cout<<"2 ";
// 	}cout<<endl;
// 	 for (int t = 1;t<=6;t++){
// 		cout<<"3 ";
// 	}cout<<endl;
// 	 for (int u= 1;u<=6;u++){
// 		cout<<"4 ";
// 	}cout<<endl;
// 	for (int v= 1;v<=6;v++){
// 		cout<<"5 ";
// 	}
// 	
 	
//
//cout<<"Contoh Program Perulangan"<<endl;
//for(int B = 1;B <= 20;B++){
//	cout<<B <<endl;
//}
//cout<<endl;
//
//for (int A =20 ; A >=1; A --){
//	cout<<A<<endl;
//}
//	
//
//cout<<endl;
//for (int x=1;x<=20;x+=2){
//	cout <<x<<endl;
//}
//cout <<endl;
//
//for(int y=2;y<=20;y+=2){
//	cout<<y<<endl;
//}


string loop;
do {
int c,modulus = 0;
cout<<"Masukkan Bilangan : ";
cin>>c;
for (int d = c;d>0;d--){
	int hasil = c%d;
	if (hasil == 0){
	modulus ++	;
	}
}
if (modulus == 2){
	cout <<c<<": Termasuk Bilangan Prima"<<endl;
}else {
	cout<<c<<": Bukan Termasuk Bilangan Prima"<<endl;
}

cout<<"Ulangi <y/t> :"	;
cin>>loop;
system ("cls");
}while (loop == "y");
cout<<"Program Selesai";



 

//	void hollowDiamond(int n)
//{
//
//for (int i =0;i<n;i++)
//	{
//	for (int j=0;j<(2*n);j++){
//		if (i+j<=n-1) 		//segitiga atas kiri
//		cout<<"*";
//		else 
//		cout<<" ";
//		
////		if ((i+n)<=j) 		//segitiga atas kanan
////		cout <<"*";
////	else 
////	cout<<" ";
//}
//cout<<"\n";
//}
////	for (int i=0;i<n;i++){
////		for(int j=0;j<(2*n);j++){
////			if (i>=j)   			//segitiga bawah kiri
////			cout<<"*";
////			else 
////			cout <<" ";
////			if (i>=(2*n-1)-j)  		//segitiga bawah kanan
////			cout<<"*";
////			else
////			cout<<" ";
////		}
////		cout<<"\n";
////		
//}
////	}
//	
//	int main() 
//	{
//		int num;
//		cout<<"Masukkan Jumlah Bintang : ";
//		cin>>num;
//		hollowDiamond(num);
	
return 0;
}
