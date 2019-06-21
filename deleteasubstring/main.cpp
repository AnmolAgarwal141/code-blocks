#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{  char str[100],str1[20];
int i,j,r,y,p,l=0,l1=0,k;
    cout << "enter a string";
    gets(str);
    cout<<"enter sub string to be deleted";
    gets(str1);
    for(i=0;str[i]!='\0';i++)
        l++;
    for(i=0;str1[i]!='\0';i++)
        l1++;
    for(i=0;i<l;i++)
    {
        if(str[i]==str1[0])
        { p=0,y=i;
            for(j=0,k=i;j<l1;j++,k++)
            {
                if(str[k]==str[j])
                {
                    p++;
                }
            }
        if (p==l1)
        {
            for(r=y;r<l;r++)
            {
                str[r]=str[r+l1];
            }
        }
        }
    }
    for(i=0;str[i]!='\0';i++)
        cout<<str[i];
    return 0;
}
