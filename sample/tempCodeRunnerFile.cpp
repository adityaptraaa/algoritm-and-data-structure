#include <stdio.h>
using namespace std;

int main()
{
    int jmlh,hrg,uang_byr,harga_final,total_belanja;

    cout<<"Masukkan Jumlah Barang :";
    cin>>jmlh;

    cout<<"Masukkan Harga Barang :";
    cin>>hrg;

    cout<<"Masukkan Uang yang dibayarkan :";
    cin>>uang_byr;

    if ((uang_byr >= 100000) && (uang_byr < 500000)) {
    harga_final = uang_byr - (0.1*total_belanja);
    
    } else if ((total_belanja >= 500000) && (total_belanja < 1000000)) {
    harga_final = uang_byr - (0.2*total_belanja);
    } else {
        harga_final = uang_byr
  }
    cout << "Total bayar: Rp." << harga_final << endl;


    



    
    
    

    return 0;
}