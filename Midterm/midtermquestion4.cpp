#include<iostream>
#include<ctime>

using namespace std;

int getRdnum(){
  srand(time(NULL) );
  retrun rand() % 101;
}
int getRdnum(int n1){
  srand(time(NULL) );
  return rand()% (101-n1)+n1;
}
