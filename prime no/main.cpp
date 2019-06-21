#include <iostream>
#include <math.h>
using namespace std;

int main()
{ int a[30],flag,i,j,n,k;
    cout << "enter no. of element" << endl;
    cin>>n;
    cout<< "enter elements \n";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<< "prime no. are \n";
        for(i=0;i<n;i++)
        {
        k=a[i];
            for(j=2;j<k;j++)
            {
                if(a[i]%j==0)
                    {flag=0;
                    break;
                    }
                else
                {
                    flag=1;
                }
            }
            if(flag=1)
                {cout<<a[i];}
        }
    return 0;
}
