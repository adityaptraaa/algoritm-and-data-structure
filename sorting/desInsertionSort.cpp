#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // mendefinisikan array
    int data[5]= {12,3,30,5,8};
    int i,j,x;

    // run an outer loop i from 1 to N to repeat the process of insertion sort
    for(i=1; i<5; i++)
    {
       
        x=data[i];
        j=i-1;
        while(j>=0)
        {
            if(x>data[j])
            {
                data[j+1]=data[j];
            }
            else
            {
                break;
            }
            j=j-1;
        }

       
        data[j+1]=x;
    }
    // Cetak Sorting
    for(i=0; i<5; i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}


