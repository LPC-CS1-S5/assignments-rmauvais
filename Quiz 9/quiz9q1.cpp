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
  struct employee emp[1] = { 1, "Tom", 35000, "Finance" };
  cout<<"The employee information is given as follows:"<<endl;
  cout<<endl;
  for(int i=0; i<1; i++ ) {
    cout <<"Employee ID:"<<emp[i].empID<<endl;
    cout<<"Name: "<<emp[i].name<<endl;
    cout<<"Salary: "<<emp[i].salary<<endl;
    cout<<"Department: "<<emp[i].department<<endl;
    cout<<endl;
  }
  return 0;
}