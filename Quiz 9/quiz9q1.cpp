#include <iostream>

using namespace std;

struct employee {
  int empID;
  char name[50];
  int salary;
  char department[50];
  int date;
};

int main ()
{
  struct employee emp[3] = { { 928431, "Tom Arthur", 350000, "Finance", 022521 } , { 394221, "Jane Hickens", 200000, "Computer", 03221 } , { 458233, "Carl Jacobs", 35000, "Technical", 06121 } };
  cout<<"The employee information is given as follows:"<<endl;
  cout<<endl;
  for(int i=0; i<3; i++ ) {
    cout <<"Employee ID:"<<emp[i].empID<<endl;
    cout<<"Name: "<<emp[i].name<<endl;
    cout<<"Salary: "<<emp[i].salary<<endl;
    cout<<"Department: "<<emp[i].department<<endl;
    cout<<"Date: "<<emp[i].date<<endl;
    cout<<endl;
  }
  return 0;
}