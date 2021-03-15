#include <iostream>
#include<cmath>
using namespace std;
int main(){
long long int z = 1,n,i;
cin>>n;
if(n==1)cout<<1<<"\n";
else if(n>=2){
for(i=0;z<=n;++i){
z=z<<1;
cout<<z<<" ";
}
}
return 0;
}
// to print 0-100 type in 60, to print to 128, type in 100.