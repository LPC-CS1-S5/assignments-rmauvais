#include <iostream>
using namespace std;

int findmax(int numbers[], int, int);
int main()
{
int numbers[50], numbers1[20], numbers2[20], max1, max2, n, i, a = 0;
cout<<"Enter the value of n: "; //takes an input of how many numbers
cin>>n;
cout<<"Enter the numbers: "<<endl;
for(i= 0;i<n ; i++)
{
  cin>>numbers[i];
}
cout<<"The given numbers is..."<<endl;
cout<<" [ ";
for(i=0; i<n; i++) // the numbers divide into two slots to be stored in those designated slots.
}