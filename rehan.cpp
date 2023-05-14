#include <iostream>
#include <cmath>

using namespace std;
int main () {

    int num1,num2,hasil;
    char penjumlahan;

    cout<<"masukan operator : ";
    cin>>penjumlahan;
    cout<<"masukan angka pertama : ";
    cin>>num1;
    cout<<"masukan angka kedua: ";
    cin>>num2;

    if (penjumlahan == '+') {
        hasil = num1 + num2;
    } else if (penjumlahan == '-') {
        hasil = num1 - num2;
    } else if (penjumlahan == '*') {
        hasil = num1 * num2;
    }

    cout<<"hasil dari penjumlahan = "<<hasil<<endl;

}
