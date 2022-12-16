#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

using namespace std;

int top =-1, stack[MAX];

void push() {
    if(top == MAX-1){
        cout<<">> Stack sudah penuh !"<<endl;
    }
    else{
        top++;
        cout<<">>Masukkan data : ";
        cin>>stack[top];
        cout<<endl;
        cout<<"Pada index ke"<<top<<endl;
        cout<<"Data ["<<stack[top]<<"] Telah ditambah !"<<endl;

    }

}

void pop(){
    if(top == 1){
        cout<<">> Stack kosong !"<<endl;
    }
    else{
        cout<<endl;
        cout<<"Data[" << stack[top] <<"] pada indek ke"<<top<<"dalam stack diambil !"<<endl;
        stack[top--];
    }
}

int clear(){
    return top = -1;
}

void print(){
    if (top== -1){
        cout<<" Stack : "<<endl;
        cout<<"======== "<<endl;
        cout<<" Kosong! "<<endl;
        cout<<"======== "<<endl;
    }
    else{
        cout<<" Stack : "<<endl;
        cout<<"======== "<<endl;
        for (int i = top; i >= 0; i--)
        {
            cout<< "  XXXX["<<stack[i]<<"]XXXX"<<endl;
        }
        cout<<"======== "<<endl;
    }
}

int main(){
    int pilih;
    do
    {
        print();
        cout<<"1. Push"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. Clear"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<" Pergerakan (TOP) : "<<endl;
        cout<<">> Pilih : "<<endl;
        cin>>pilih;

        switch (pilih)
        {
        case 1:
            push();
            getch();
            break;
        case 2:
            pop();
            getch();
            break;
        case 3:
            clear();
            getch();
            break;
        case 4:
            cout<<"Terimakasih"<<endl;
            getch();
            break;
        
        default:
            cout<<"?"<<endl;
            getch();
            break;
        }
        system("clear");
    } while (pilih !=4);
    
    
}