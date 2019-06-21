#include <iostream>

using namespace std;

int main()
{ int i,j,n;
    cout << "enter n" << endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        for(j=n-i+1;j<=n+i-1;j++)
        {
            cout<<"*";
        }
        for(j=n+i;j<2*n-1;j++)
        {
            cout<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
