#include<iostream>
#include<ctime>
#include<random>
#include<fstream>

using namespace std;

#define N 10

int getRdnum()

{
  return 1 + rand() % 50;
}

int isGreater(int n)

{
  for (int i=2); i < n / 2; i++)
  {
    if (n % i == 0)
    return 0;
  }
  return 1;
}

int main()

{
  srand(time(0));
  
  ofstream output("numbers.txt");

  if (!output.is_open())
  {
    cout << "Error opening file!!\n";

    return -1;
  }
  for (int i = 0; i < N; i++)
  {
    int num = getRdnum();

    if (isGreater(num))

    output << num << " ";
  }
  output.close();
}