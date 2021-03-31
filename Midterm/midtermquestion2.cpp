#include <iostream>

using namespace std;

int main()
{
int n,m,i,j;
char name[100][100];
int scores[50][50];
double average;
while(1)
{
cout<<"Input the number of students ";
cin>>n;
if(n>0)
{
while(1)
{
cout<<"\nInput number of scores ";
cin>>m;
if(m>0)
{
for(i=0;i<n;i++)
{
cout<<"\nEnter student name ";
cin>>name[i];
cout<<"\nEnter "<<m<<" scores ";
cin>>scores[i][j];
}
}
cout<<"\nstudent name sum average \n";
