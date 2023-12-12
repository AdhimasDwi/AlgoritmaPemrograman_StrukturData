#include <iostream>
using namespace std;
int main(){
	bool benar ;
	int x,y;
	cout<<"Nilai X :";
	cin>> x;
	cout<<"Nilai Y :";
	cin >> y;
	
	benar= x < y;
	
	if (benar == true){
	cout << "x lebih kecil dari y";
} else{
cout << "x lebih besar dari atau sama dengan y";}

return 0;
}
