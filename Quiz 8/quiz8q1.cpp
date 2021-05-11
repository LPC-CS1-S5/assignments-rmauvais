#include <iostream>
#include <string>

using namespace std;
int countword(string, string);
int main(int argc, char const *argv[])

{
  int cnt;

  string txt("The Python 2 language was officially discontinued in 2020 (first planned for 2015), and Python 2.7.18 is the last Python 2.7 release and therefore the last Python 2 release. No more security patches or other improvements will be released for it. With Python 2's end-of-life, only Python 3.5.x and later are supported. thither");

  cnt = countword("Python",txt);

  cout<<"The count of word "<<cnt<<endl;

  return 0;

}

int countword(string keyword, string txt){

// cout<<txt.find(keyword, 5);

int found = 0, count=0;

for(int i=0; i<txt.size();i++){
  
  found = txt.find(keyword,i);
  if(found==-1)
  break;
  cout <<"found"<<,found<<""<<keyboard<<endl;

  count++;

  i=found+1;

}

return count;

}