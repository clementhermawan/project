#include <iostream>
using namespace std;
int main () {

//operator penugasan

int angka1 = 10;
int angka2 = 3;

/*hasil mengikuti penjumlahan yang sudah terproses*/

//10+3=13
angka1+=angka2;
cout<<"hasil penjumlahan penjumlahan : "<<angka1<<endl;

//13-3=10
angka1-=angka2;
cout<<"hasil dari penjumlahan pengurangan : "<<angka1<<endl;

//10x3=30
angka1*=angka2;
cout<<"hasil dari penjumlahan perkalian : "<<angka1<<endl;

//30:3=10
angka1/=angka2;
cout<<"hasil dari penjumlahan pembagian : "<<angka1<<endl;

//10%3=1
angka1%=angka2;
cout<<"hasil dari sisa bagi : "<<angka1<<endl;


}
