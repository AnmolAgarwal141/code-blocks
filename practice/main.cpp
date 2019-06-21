#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class string{
  char *name;
  int len;
  public:
      string(char *s)
      {
          len=strlen(s);
          name=new char[len+1];
          strcpy(name,s);
      }
      void compare(string &ss2)
      {
          int k;
          k=strcmp(name,ss2.name);
          if(k==0)
          {
              cout<< "\nboth objects have same name";
          }
          else
          {
              cout<< "\nboth objects have diff. name";
          }
      }
      void display()
      {
          cout<< "\nname of person="<<name;
      }
      ~string()
      {
          cout<< "\nrelease memory allocated to"<<name;
          delete[] name;
      }
};
int main()
{
 clrscr();
    string s1("Anu");
    string s2("Auskan")
    s1.display();
    s2.display();
    s1.compare(s2);
    return 0;
}
