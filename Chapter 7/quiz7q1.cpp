#include <iostream>
#include <cmath>

using namespace std;
const int N = 10;
bool check(int a[],int index)
{
//checks if index is 0 and compares with the next element
if(index==0&&(abs(a[index]-a[index+1])<10))
return true;
//checks if index is N-1 then checks with the previous element
if(index==N-1&&(abs(a[index]-a[index-1])<10))
return true;
if(index!=N && index!=0&&(abs(a[index]-a)[index+1]<10))&&(abs(a[index]-a[index-1])<10))
return true;
return false;
}
int main(){
  int number[N]={10,15,0,-25,19,20,25,30,45,20};
}