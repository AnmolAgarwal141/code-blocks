#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{ char str1[100],str2[100];
int a,i;
    cout << "enter string 1"<< endl;
    gets(str1);
        cout << "enter string 2\n";
        cin.get(str2,50,'.');
     a=strcmp(str1,str2);
     cout<<a;
    strcat(str1,str2);
   for(i=0;str1[i]!='\0';i++)
        str2[i]=str1[i];
   str2[i]='\0';
     puts(str1);
     puts(str2);
    return 0;
}
