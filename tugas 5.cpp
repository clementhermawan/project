#include <iostream>
using namespace std;
int main () {

int masukan,akhir,ganjil=1,genap=2;

cout<<"PROGRAM GANJIL/GENAP"<<endl;

cout<<"Perintah yang bisa di gunakan\n1.Ganjil\n2.Genap"<<endl;
cout<<"masukan nilai : ";
cin>>masukan;
cout<<"masukan nilai akhir : ";
cin>>akhir;


while (ganjil <= akhir, genap < akhir){

    if (masukan == 1){
        cout<<ganjil;
    } else if (masukan == 2){
        cout<<genap;
    } else {
        cout<<"nilai yang anda masukan tidak ada dalam perintah!";
    }

    ganjil=ganjil+2;
    genap=genap+2;

}












}
