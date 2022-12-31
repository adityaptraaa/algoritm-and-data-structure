#include <iostream>
using namespace std;
int main()
{
    int data[10]={91,83,74,66,58,48,13,6,5,3};
    int A,T,R;
    int cari;
    bool ada;

    //algoritma binary search
    cout<<"data yang dicari=";
    cin>>cari;

    A=0;R=9;

    do{
        T=(A+R)/2;

        if(data[T] < cari){
            R=T-1;
        }else if (data[T] > cari){
            A=T+1;
        }else if (data[T]==cari){
            ada=true;
        }

    }while(ada==false && A <= R);

    if (ada==true){
        cout<<"Data yang dicari ada"<<endl;
    }else{
        cout<<"Data yang dicari tidak ditemukan"<<endl;
    }
    return 0;
}