#include <iostream>
#include <conio.h>
#include <stdio.h>

#define max 10

using namespace std;

typedef struct 
{
    int data [max];
    int head;
    int tail;
}Queue;

Queue antrian;

void create(){
    antrian.head = antrian.tail = -1;
}

int isEmpty(){
    if (antrian.tail == -1)
    return 1;
    else;
    return 0;
    
}

int isFull(){
    if(antrian.tail == max-1)
    return 1;
    else;
    return 0;
}

void Enqueue(int data){
    if(isEmpty() == 1){
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail] = data;
        cout<<"Data "<<antrian.data[antrian.tail]<<" Masuk !!!";
    }
    else if(isFull() == 0){
        antrian.tail++;
        antrian.data[antrian.tail] = data;
        cout<<"Data "<<antrian.data[antrian.tail]<<" Masuk !!!";
    }
    else if(isFull() == 1){
        cout<<"Ruangan Penuh !!"<<endl;
        cout<<data<<"Tidak bisa masuk";
    }
}

void Dequeue(){
    int i;
    int e = antrian.data[antrian.head];
    if(antrian.tail == -1){
        cout<<"Data Kososng"<<endl;
    }else{
        for (i = antrian.head; i < antrian.tail-1; i++)
        {
            antrian.data[i] = antrian.data[i+1];
        }
        antrian.tail--;
        cout<<"Data yang keluar lebih dulu = "<<e<<endl;
    }
}

void clear(){
    antrian.head = antrian.tail=-1;
    cout<<"Data clear";
}

void tampil(){
    if(isEmpty() == 0){
         cout<<"Data dalam Antrian"<<endl;
    cout<<"===================="<<endl;
    cout<<endl;
    for(int i = antrian.head; i<=antrian.tail;i++){
        cout<<"| "<<antrian.data[i]<<" |";
    }
    }
   
    else{
        cout<<"Data Kososng";
    }
}

int main(){
    int pil;
    int data;
    create();
    do
    {
        system("clear");
        cout<<"Implementasi Antrian dengan Struct"<<endl;
        cout<<"===================================="<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Print"<<endl;
        cout<<"4. Clear"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"5. Masukkan pilihan anda : ";
        cin>>pil;
        switch (pil)
        {
        case 1:
        {
            cout<<endl;
            cout<<"Data = ";
            cin>>data;
            Enqueue(data);
            break;
        }
        case 2:
        {
            cout<<endl;
            Dequeue();
            break;
        }
        case 3:
        {
            cout<<endl;
            tampil();
            break;
        }
        case 4:
        {
            cout<<endl;
            clear();
            break;
        }
        default:
            break;
        }
        getch();
    } while (pil!=5);
    
}