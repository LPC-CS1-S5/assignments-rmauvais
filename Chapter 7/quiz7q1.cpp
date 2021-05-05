#include <iostream>

using namespace std;
const int N = 10;
bool check(int a[],int index)
{
if(index==0&&(abs(a[index]-a[index+1])<10))
return true;
if(index==N-1&&(abs(a[index]-a[index-1])<10))
return true;
if(index!=N && index!=0&&)
}