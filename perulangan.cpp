#include <iostream>
using namespace std;
int main (){
	cout<<"PROGRAM DERET GANJIL/GENAP"<<endl;
	cout<<"1. Ganjil"<<endl;
	cout<<"2. Genap"<<endl;

	int pilihan, akhir, awal=1;

	cout<<"Masukan pilihan:";
	cin>>pilihan;
	cout<<"Masukan nilai akhir:";
	cin>>akhir;

	while (awal<=akhir){

		if (pilihan==1){

			//tampilkan ganjil
			if (awal%2!=0){
				cout<<awal<<" ";}
		}
		else if (pilihan==2){

			//tampilkan genap
			if (awal%2==0){
				cout<<awal<<" ";
			}
		}
		awal++;
	}

}
