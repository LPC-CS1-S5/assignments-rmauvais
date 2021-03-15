#include <iostream>
#include <iomanip>


int main()

{

  
   // initializing classA,classB,classC prices.
    double classA=15.00;
    double classB=12.00;
    double classC=9.00;
    // declaring classes seats.
    int classASeats,classBSeats,classCSeats;
    // initialize income variable.
    double income=0.00;
  

    std::cout << "Enter How many class A seats Filled : ";
// reading input from user
    std::cin >>classASeats;


std::cout << "Enter How many class B seats Filled : ";

    std::cin >>classBSeats;

std::cout << "Enter How many class C seats Filled : ";

    std::cin >>classCSeats;

// calculating income based on class prica and number of seats filled.
income=(classA*classASeats)+(classB*classBSeats)+(classC*classCSeats);

// printing total income in setting 2 precision.
    std::cout << std::fixed << std::setprecision(2) << "Total income of seats sale is $"<<income;

}