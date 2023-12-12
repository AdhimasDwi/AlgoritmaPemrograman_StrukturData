#include <iostream>
using namespace std;
int main(){
	int yofrie=93;
	int *hadiansyah;
	cout<<"Nilai Awal Yofrie = "<<yofrie<<endl;
	hadiansyah=&yofrie;
	cout<<"Nilai Hadiansyah Sekarang = ";
	cout<<*hadiansyah<<endl;
	*hadiansyah=50;
	cout<<"Nilai Hadiansyah Sekarang = ";
	cout<<*hadiansyah<<endl;
	getchar();
}



// int main(){
// 	int ilham;
// 	int *raka;
// 	int **amir;
// 	ilham=75;
// 	cout<<"Nilai Ilham = "<<ilham<<endl;
// 	raka = &ilham;
// 	amir = &raka;
// 	cout<<"Nilai Raka Hasil Mengakses Ilham = ";
// 	cout<<*raka<<endl;
// 	cout<<"Nilai Amir Hasil Mengakses Ilham = ";
// 	cout<<**amir<<endl;
// 	getchar();
// }




//int main(){
//	int ilham,amir,*raka;
//	ilham=75;
//	amir = ilham;
//	raka =&ilham;
//	cout<<"Nilai Ilham = "<<ilham<<endl;
//	cout<<"Nilai Amir = "<<amir<<endl;
//	cout<<"Nilai Raka = "<<raka<<endl;
//	getchar ();
//}




//int main(){
//	int ilham,*raka,rafli;
//	ilham=75;
//	raka=&ilham;
//	rafli=*raka;
//	cout<<"Nilai Ilham = "<<ilham<<endl;
//	cout<<"Nilai Raka = "<<raka<<endl;
//	cout<<"Nilai Rafli = "<<rafli<<endl;
//	getchar();
//}




//int main(){
//	int i;
//	int nilai[5];
//	int *ptrnilai;
//	ptrnilai=nilai;
//	for (i=0;i<5;i++){
//		cout<<"Masukkan Nilai Elemen Ke-"<<i+1<<"=";
//		cin>>nilai[i];
//	}
//	cout<<endl;
//	cout<<"Hasil Pengaksesan Elemen Array Lewat";
//	cout<<"Pointer";
//	cout<<endl<<endl;
//	for (i=0;i<5;i++){
//		cout<<"Elemen"<<i+1<<".Nilai "<<nilai[i];
//		cout<<", Menempati Alamat Memori = ";
//		cout<<&ptrnilai[i];
//		cout<<endl;
//	}
//	getchar();
//	return 0;
//}




//int main (){
//	char band_metal[]="Sepultura";
//	char*band_punk = "Rancid";
//	cout<<"Nama Band Metal = "<<band_metal<<endl;
//	cout<<"Nama Band Punk = "<<band_punk<<endl;
////	band_punk +=3;
//	cout<<"Nama Band Metal = "<<band_metal<<endl;
//	cout<<"Nama Band Punk = "<<band_punk;
//	getchar();
//}

