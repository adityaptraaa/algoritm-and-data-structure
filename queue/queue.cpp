#include <iostream>
 
using namespace std;
 
struct Queue{
    int Data[5];
    int Head;
    int Tail;
};
 
void Create();
bool IsFull();
bool IsEmpty();
void EnQueue(int x);
int DeQueue();
void Cetak();
 
Queue Q;
 
int main()
{
    Create();
    EnQueue(5);EnQueue(8);EnQueue(2);
    
    Cetak();
    cout<<endl;
    cout<<"=======================\n";
    cout<<"Dequeu="<< DeQueue() <<endl;
    Cetak();
    
    return 0;
}
 
void Create(){
    //membuat antrian baru / antrian kosong
    Q.Head=-1;
    Q.Tail=-1;
}
bool IsFull(){
    return (Q.Tail==4);
}
bool IsEmpty(){
    return (Q.Tail==-1);
}
void EnQueue(int x){
    if(!IsFull()){
        if(IsEmpty()){
            Q.Head=0;
        }
            Q.Tail++;
            Q.Data[Q.Tail]=x;
        
    }else{
        cout<<"Queue Full!\n";
    }
}
int DeQueue(){
    int x;
    if(!IsEmpty()){
        x=Q.Data[Q.Head];
        for(int i=0;i < Q.Tail;i++){
            Q.Data[i] = Q.Data[i+1];
        }
        Q.Tail--;
    }else{
        cout<<"Queue Empty\n";
    }
    return x;
}
void Cetak(){
        for(int i=Q.Head; i <= Q.Tail;i++){
            cout<<Q.Data[i] <<", ";
        }
}
