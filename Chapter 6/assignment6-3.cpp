#include <iostream>

using namespace std;

bool inputvalidate(int, int);
bool overlap(int, int, int, int);

int main() 
{
  int x1, x2, x3, x4;
  cout << "Enter your input\n";
  cin >> x1 >> x2 >> x3 >> x4;

  if(!inputvalidate(x1,x2) || !inputvalidate(x3,x4))
    exit(0);
  if(overlap(x1,x2,x3,x4))
    cout << "Two lines are overlapped\n";
  else
    cout << "Two lines are not overlapped\n";
}