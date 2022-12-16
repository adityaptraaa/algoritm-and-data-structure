#include <iostream>

using namespace std;


int main()
{
    int jmlh,hrg,uang_byr,kembalian,poin,jumlah_lmb;
    float diskon,total_belanja;

    cout<<"Masukkan Jumlah Barang :";
    cin>>jmlh;

    cout<<"Masukkan Harga Barang :";
    cin>>hrg;
    total_belanja = jmlh * hrg;

      if (total_belanja<100000){
        diskon = 0;
    }else if(total_belanja<500000){
        diskon = 10;
    
    }else if(total_belanja>500000){
        diskon = 20;
    }

    total_belanja = total_belanja - (total_belanja * diskon/100); 

    cout<<"Total yang harus dibayar : "<<total_belanja<<endl;

    poin = total_belanja / 50000;
    cout<<"Jumlah Poin : "<<poin<<endl;

    cout<<"Masukkan Uang yang dibayarkan :";
    cin>>uang_byr;
    if(uang_byr<total_belanja){
        cout<<"Duit anda kurang"<<endl;
    }else{
        kembalian = uang_byr - total_belanja;
        cout<<"Kembalian : "<<kembalian;

      
    }
        

    return 0;
}