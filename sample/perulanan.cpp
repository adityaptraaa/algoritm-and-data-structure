#include <iostream>

using namespace std;

int main()
{

//   for(int i=1;i<=100;i++)
//   {
//     cout<<i<<" ";
//   }

     int a, b;
  cout << "Masukkan Input : ";
  cin >> a;
  cout << "Masukkan Batas : ";
  cin >> b;

  for (int i = a; i <= b; i++)
    {
      if(i%2==0)
      cout << i << " ";
    }

  return 0;
}
