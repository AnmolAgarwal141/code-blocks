#include <iostream>

using namespace std;

void reverse(char str[],int k,int l)
{    char ch;
    if(k>l)
        return;
    ch=str[k];
    str[k]=str[l] ;
    str[l]=ch;
    k++;
    reverse(str,k,l-1ab);
}
int main()
{ char str[30];
int l=0,i;
cout<<"input a string";
cin.get(str,30);
for(i=0;str[i]!='\0';i++)
    l++;
    l=l-1;
reverse(str,0,l);
for(i=0;str[i]!='\0';i++)
    cout<<str[i];
    return 0;
}
