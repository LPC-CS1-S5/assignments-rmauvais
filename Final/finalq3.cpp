#include <iostream>

using namespace std;

int main()
{
  const int SIZE1 = 5;
  const int SIZE2 = 10;

  int array1[SIZE1] = { 2, 3, 5, 9, 10 };
  int array2[SIZE2] = { 1, 2, 3, 5, 9, 10, 11, 13, 15, 17 };

  for (size_t i = 0; i < SIZE2; i++)
  {
    bool in_common = false;

    for (size_t j = 0; j < SIZE2; j++)
    {
      if (array1[i] == array2[j])
      {
        in_common = true;
      }
    }
    if (in_common)
    {
      std:: cout << array1[i] << " in common in both arrays\n";
    }
  }
}