#include <iostream>
#include <iomanip>
// Add <cstdlib>, <ctime>
#include 	<cstdlib>
#include 	<ctime>
#include <chrono>

using namespace std;
int main()
{
	// place the variable declaration at the beginning of block
  int i;
  double j, k, l;
  double sum, average;
  
  srand((unsigned) time(0));
  i = (rand()%100)+3;
  cout << i << "\n";
  std::cout << std::setprecision(5);

	// any values are not assigned yet
//   cout << j << k << l;
	// need to generate two more random numbers
  j = (rand()%100)+3;
  cout << j << "\n";
  k = (rand()%100)+3;
  cout << k << "\n";
  

  sum = i + j + k;

  average = sum / 3;

  cout << "Sum = " << sum << endl;
  cout << "Average = " <<average << endl;

return 0;
}
