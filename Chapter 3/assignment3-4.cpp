#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
char month1[8], month2[8], month3[8];
double rainfall, avg_Rainfall;
double totalRainfall = 0; 

cout << "Enter three consecutive months: " << endl;
cin >> month1 >> month2 >> month3;

cout << "How many inches of rain fell in " << month1 << "?" << endl;
cin >> rainfall;
totalRainfall += rainfall;

cout << "How many inches of rain fell in " << month2 << "?" << endl;
cin >> rainfall;
totalRainfall += rainfall;

cout << "How many inches of rain fell in " << month3 << "?" << endl;
cin >> rainfall;
totalRainfall += rainfall;

avg_Rainfall = totalRainfall / 3; 

cout<<"The average rainfall for "<<month1<<"," <<month2 <<","<<"and " <<month3 <<" is "<<avg_Rainfall<<" "<<"inches.";
return 0;
}