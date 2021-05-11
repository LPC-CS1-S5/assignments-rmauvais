#include <iostream>
#include <string>

using namespace std;

int main()
{
  while(true)
  {
    string email;
    int at_pos=-1, dot_pos=-1,i;
    cout<<"Enter emailId:";
    getline(cin,email);
    if(email=="q")
    {
      break;
    }
    else
    {
      if(email[0]>='0'&& email[0]<='9')
      {
        cout<<"The Email ID"<<email<<" is invalid"<<endl;
        cout<<"* Email Id should not start with a number"<<endl;
      }
      else
      {
        for(i=0 ;i<email.length();i++)
        {
          if(email[i]=='@')
          {
            at_pos=i;
          }
          if(email[i]=='.')
          {
            dot_pos=i;
          }
        }
        if (at_pos==-1)
        {
          cout<<"The email id "<<email<<" is invalid"<<endl;
          cout<<"* @ symbol is missing"<<endl;
          cout<<"* Missing Domain Name "<<endl;
        }
        else if(dot_pos==-1)
        {
          cout<<"The email id "<<email<<" is invalid"<<endl;
          cout<<"* Missing Domain Name "<<endl;
        }
        else if(dot_pos<at_pos)
        {
          cout<<"The email id "<<email<<" is invalid"<<endl;
          cout<<"* Missing Domain Name "<<endl;
        }
        else
        {
          cout<<"The email id "<<email<<" is valid"<<endl;
        }
      }
    }
  }
}
