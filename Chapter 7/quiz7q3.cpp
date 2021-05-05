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
{
  if(i < n/2) // numbers stored in the first slot
  {
    numbers1[i] = numbers[i];
    cout<<numbers1[i]<<" , ";
  }
}
  else // numbers in the second slot
{
  numbers2[i] = numbers[i];
  cout<<numbers2[i]<<" , ";
}
{
  cout<<"] "<<endl;
  max1 = findmax(numbers1, a, n/2); // function calling for the max number in slot 1
  cout<<"Max number from slot 1 : "<<max1<<"\t"; // print the max number in slot 1
}
}