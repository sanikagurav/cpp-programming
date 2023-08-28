#include<iostream>
using namespace std;

class Person
{
          private:string pname;
          string address;
          string phone;
          public:
          Person();
          int setName(string nm);
          string getName();
          void setPhone(string ph);
          string getPhone();
          void setAddress(string addr);
          string getAddress();
};
Person :: Person()
{
}
int Person :: setName(string nm)
{
          int i=0;
          bool containDigit=false;
          for(i=0; i<nm.length(); i++)
          {
                   if(isdigit(nm[i]))
                   {
                             containDigit=true;
                   }
          }
          if(containDigit)
          {
                    cout << "\n Invalid Name";
          }
          else
                   pname=nm;

}
string Person :: getName()
{
          return pname;
}
void Person :: setPhone(string ph)
{
          int i=0;
          bool containChar=false;
          if(ph.length()!=10)
          {
                    cout << "\n Invalid";
          }
          for(i=0; i<ph.length(); i++)
          {
                    if(isalpha(ph[i]))
                    {
                              containChar=true;
                    }
          }
          if(containChar)
          {
                    cout << "\n Invalid phone number" << endl;
          }
          else
          phone=ph;
}
string Person :: getPhone()
{
          return phone;
}
void Person :: setAddress(string addr)
{
          address=addr;
}
string Person :: getAddress()
{
          return address;
}
int main()
{
     string name, phone, address;

     cin.ignore(100,'\n');
     cout << "Enter name of Person : ";
     getline(cin,name);
     cout << "\n Enter phone number of person : ";
     cin >> phone;
     cout << "\n Enter address of person : ";
     cin >> address;

     Person P;
     P.setName(name);
     P.setPhone(phone);
     P.setAddress(address);

     cout << P.getName() << endl;
     cout << P.getPhone() << endl;
     cout << P.getAddress();
}
