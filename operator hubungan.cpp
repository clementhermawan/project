#include <iostream>
using namespace std;
int main () {

int angka1,angka2;
bool hasil;
char operasi;

cout<<"masukan angka pertama 1 : ";
cin>>angka1;

cout<<"masukan angka kedua 2 : ";
cin>>angka2;

cout<<"pilih operasi yang diinginkan : ";
cin>>operasi;

if (operasi == '>'){
    hasil = angka1 > angka2;
} else if (operasi == '>=') {
    hasil = angka1 >= angka2;
} else if (operasi == '<') {
    hasil = angka1 >= angka2;
} else if (operasi == '<=') {
    hasil = angka1 >= angka2;
} else if (operasi == '!=') {
    hasil = angka1 >= angka2;
} else if {
    cout<<"operator yang anda masukan eror"<<endl;
}
cout<<"hasil dari penjumlahan di atas : "<<hasil<<endl;

}
