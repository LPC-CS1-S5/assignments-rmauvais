#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  //declare variables needed
    int males, females, total;
    double percentage;

    //prompt user to enter data then read
    std::cout << "How many males are there in the class? ";
    std::cin >> males;

    std::cout << "How many females are there in the class? ";
    std::cin >> females;

    //perform calculation for total students
    total = males + females;

    //calculate males percentage then display
    //after formatting output
    percentage = (double)males / total;
    std::cout << setprecision(2) << "Percentage of males is: ";
    std::cout << percentage * 100 << "%";

    //do the same for female percentage
    percentage = (double)females / total;
    std::cout << setprecision(2) << "\nPercentage of females is: ";
    std::cout << percentage * 100 << "%";

    //return 0 to mark successful termination
    return 0;
}