#include <iostream>
#include <stdio.h>
using namespace std;

void rev(char a[],int i,int n)
{

    int temp;
    if(i==n/2)
        return;
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
    return rev(a,++i,n);

}


int main()
{

char a[15];
int n=0;
cout<<"enter a string to be reversed \n";
gets(a);
for(int i=0;a[i]!='\0';i++)
    ++n;

rev(a,0,n);
cout<<"the reversed string is = "<<a;
    return 0;
}

