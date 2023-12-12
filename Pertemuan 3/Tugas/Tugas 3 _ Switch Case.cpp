#include <iostream>
using namespace std;
int main (){
	int a,b,c,rata;
	string nama;
	cout<<"Program Hitung Nilai Rata-Rata\n=============================="<<endl;
	cout<<"\nNama Siswa :";
	cin>>nama;
	cout<<"\nNilai Pertandingan I\t :";
	cin>>a;
	cout<<"Nilai Pertandingan II\t :";
	cin>>b;
	cout<<"Nilai Pertandingan III\t :";
	cin>>c;
	
	rata = (a + b + c) / 3;
	
		cout<<"\nSiswa Yang Bernama : "<<nama<<endl;
	cout<<"Memperoleh Nilai Rata-Rata : "<<rata<<endl; 
	
	switch (rata){
		case 85 ... 100:
			cout <<"Hadiah Yang Anda Dapatkan Adalah Komputer Core I5";
			break;
	 case 70 ...84 :
		    cout<< "Hadiah Yang Anda Dapatkan Adalah Uang Sebesar Rp.2.500.000";
		    break;
		    
	    default :
	    cout <<"Anda Dapatkan Mendapatkan Hadiah Hiburan"<<endl;
	    break;
	    }
	return 0;
}
