#include <iostream>

using namespace std;

int main()
{
    
    int besar,kecil,a,b,c;
    cout<<"Masukkan Nilai A :";
    cin>>a;
    cout<<"Masukkan Nilai B :";
    cin>>b;
    cout<<"Masukkan Nilai C :";
    cin>>c;
    
    //Menentukan nilai paling kecil
	kecil=a;
	
	if (b < kecil){
		kecil=b;
	}
	else if (c < kecil){
		kecil=c;
	}
	
	//Menentukan nilai paling besar
	besar=a;
	
	if (b > besar){
		besar=b;
	}
	else if (c > besar){
		besar=c;
	}
	
	cout<<"Nilai paling kecil adalah = "<<kecil<<endl;
	cout<<"Nilai paling besar adalah = "<<besar<<endl;
	
	return 0;
    
   
}