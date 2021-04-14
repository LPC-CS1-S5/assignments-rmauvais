#include <iostream>

using namespace std;

void swap(int &x, int & y)

{
  int t = x; x-y; y=t;
  cout <<"\n Within Swapping function x = "<<x<<" and y "<<y;
}

int main ()
{
  int x,y;

  cout<<"\n Enter 2 numbers: ";
}