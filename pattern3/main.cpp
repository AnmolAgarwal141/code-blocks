#include <iostream>

using namespace std;

int main()
{ int n,i,j,s;
    cout << "enter n" << endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
         for(j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
for(j=1;j<=i;j++)
{
    if(j==1||i==1)
        s=1;
    else
    {
        s=s*((i-j+1)/(j-1));
    }
    cout<<s<<'\t';
}
cout<<'\n';
    }
    return 0;
}
