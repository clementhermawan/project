#include <iostream>
using namespace std;
int main () {

    bool kerja = 1,tidak=0,hasil;
    char ulang;

do{
    cout<<"masukan nilai 1 jika kamu mengerjakan tugas dan \nmasukan nilai 0 jika kamu tidak mengerjakan tugas"<<endl;
    cout<<"masukan nilai : ";
    cin>>hasil;

  if (hasil == 1){
    cout<<"mantap kanda";
  } if else (hasil == 2) {
    cout<<"push up!";
  } else {
    cout<<"perintah tidak ada!";
  }

  cout<<"mau mengulang? (y/n) : ";
  cin>>ulang;
return 0;


}


while(ulang == 'y' or ulang == 'Y');
return 0;





}
