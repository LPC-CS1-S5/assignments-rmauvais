#include <iostream>
#include<string>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{

const double TAXRATE = 6.75;
const double TIPRATE = 20.0;

double mealCost = 88.67;
double tax;
double billAfterTax;
double tips;
double totalBill;

mealCost =88.67; // in dollars
tax = mealCost * TAXRATE / 100;
billAfterTax = mealCost + tax;
tips = billAfterTax *TIPRATE/100;
totalBill =billAfterTax +tips;

cout<<"Restaurant Bill";
cout<<"\nMeal Cost: $" << setprecision(4) <<mealCost;
cout<<"\nTax amount: $" << setprecision(3) <<tax;
cout<<"\nTips amount: $" << setprecision(4) <<tips;
cout<<"\nTotal bill: $" << setprecision(5) <<totalBill << endl;

return 0;

}
//Ryan Mauvais
//the bill