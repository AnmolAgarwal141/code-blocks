#include <iostream>

using namespace std;

int main()
{int n,i,a[30],p;
    cout << "enter the limit of array" << endl;
    cin>>n;
    cout<< "enter elements of an array \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<< "enter position for left shift: ";
    cin>>p;
    for(i=0;i<p;i++)
    {
        a[n+i]=a[i];
    }
    for(i=0;i<n+p;i++)
    {
        a[i]=a[p+i];
    }
    cout<< "new array is \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }

    return 0;
}
