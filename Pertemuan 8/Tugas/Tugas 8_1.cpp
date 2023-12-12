#include <iostream>
using namespace std;
int main (){
cout<<"1.Penjumlahan & Pengurangan Matriks"<<endl<<endl;
int matriks1[15][15], matriks2[15][15], hasil[15][15]; 
int a, b, c, d, e, f, g, jumlah = 0;

getchar;

cout<<"Masukan Jumlah Baris \t: ";
cin>>d;
cout<<"Masukan Jumlah Kolom \t: ";
cin>>f;

cout<<"\nmasukan elemen matriks 1 : "<<endl;
for(e = 0; e < d; e++){
cout<<"Masukan elemen Baris Ke-"<<e+1<<endl;
for(g = 0; g < f; g++){
cin>>matriks1[e][g];
}
}

cout<<"\nmasukan elemen matriks 2 : "<<endl;
for(e = 0; e < d; e++){
cout<<"Masukan elemen Baris Ke-"<<e+1<<endl;
for(g = 0; g < f; g++){
cin>>matriks2[e][g];
}
}

cout<<"--------------------------------------------"<<endl;

for(e = 0; e < d; e++){
for(g = 0; g < f; g++){
cout<<matriks1[e][g]<<" ";
}
cout<<"\t\t";
for(g = 0; g < f; g++){
cout<<matriks2[e][g]<<" ";
}
cout<<endl;
}

cout<<"Penjumlahan 2 elemen matriks : "<<endl;
for(e = 0; e < d; e++){
for(g = 0; g < f; g++){
hasil[e][g] = matriks1[e][g] + matriks2 [e][g];
cout<<hasil[e][g]<<" ";
}
cout<<endl;
}
cout<<"--------------------------------------------";
cout<<"\n\n2.Pengurangan Matriks"<<endl;

cout<<"Pengurangan 2 elemen matriks : "<<endl;
for(e = 0; e < d; e++){
for(g = 0; g < f; g++){
hasil[e][g] = matriks1[e][g] - matriks2 [e][g];
cout<<hasil[e][g]<<" ";
}
cout<<endl;
}

cout<<"--------------------------------------------";
cout<<"\n3.Perkalian Matriks "<<endl<<endl;

cout<<"Masukan Jumlah Baris Matriks 1\t:";
cin>>d;
cout<<"Masukan Jumlah Kolom Matriks 1\t:";
cin>>f;

cout<<"Masukan Jumlah Baris Matriks 2\t:";
cin>>c;
cout<<"Masukan Jumlah Kolom Matriks 2\t:";
cin>>b;

if(f != c){
    cout << "Matriks tidak dapat dikalikan \n";
  	}
else{
cout<<"\nmasukan elemen matriks 1 : "<<endl;
for(e = 0; e < d; e++){
cout<<"Masukan elemen Baris Ke-"<<e+1<<endl;
for(g = 0; g < f; g++){
cin>>matriks1[e][g];
}
}

cout<<"\nmasukan elemen matriks 2 : "<<endl;
for(e = 0; e < c; e++){
cout<<"Masukan elemen Baris Ke-"<<e+1<<endl;
for(g = 0; g < b; g++){
cin>>matriks2[e][g];
}
}

for(e = 0; e < d; e++){
for(g = 0; g < f; g++){
for(a = 0; a < c; a++){
jumlah= jumlah + matriks1[e][a]*matriks2[a][g];
}
hasil[e][g] = jumlah;
jumlah = 0;
}
}

cout<<"Hasil Perkalian = \n";
for(e= 0; e < d; e++){
for(g = 0; g < b; g++){
cout<<hasil[e][g]<<" ";
}
cout<<endl;
}	
}
return 0;
}




