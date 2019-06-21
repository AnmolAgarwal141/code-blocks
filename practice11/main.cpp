#include <iostream>

using namespace std;

int main()
{
    int a[20],i,j,k,n,f,l,m;
    cout<<"enter total no.";
    cin>>n;
    cout<<"enter array elements";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter no. to be searched";
    cin>>k;
    f=0;
    l=n-1;

    while(f<=l)
    {m=(f+l)/2;
        if(a[m]<k)
            f=m+1;
        else if(a[m]>k)
            l=m-1;
        else
           {
                cout<<"the no is found at"<<m+1<<"position";
            break;
           }
    }
    return 0;
}
