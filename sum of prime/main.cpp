#include <iostream>

using namespace std;

int main()
{
    int a[30][30],b[20],c[20],m,n,i,j,l=0,d=0,k,flag;
    cout<<"enter dimensions\n";
    cin>>m>>n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[l]=a[i][j];
            l++;
        }
    }
    for(i=0;i<l;i++)
    {
        d=0;
        for(j=2;j<b[i];j++)
        {
            flag=0;
            for(k=2;k<j;k++)
            {
                if(j%k==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                c[d]=j;
                d++;
            }
        }
        for(j=0;j<d;j++)
        { for(k=0;k<d;k++)
            {if(b[i]==c[j]+c[k+j])
            {
                cout<<b[i]<<"="<<c[j]<<"+"<<c[k+j]<<'\n';
            }}
        }
    }
    return 0;
}
