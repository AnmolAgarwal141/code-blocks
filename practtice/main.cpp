#include <iostream>

using namespace std;

int main()
{ int a[20][20],i,m,j,n,flag,k;
    cout << "enter dimensions" << endl;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<'\n';
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        { flag=1;
            for(k=2;k<a[i][j];k++)
            {
               if(a[i][j]%k==0)
            {
                flag=0;
                break;
            }
            }
            if(a[i][j]!=2&&a[i][j]!=1)
            {
               if(flag==1)
            {
                a[i][j]=0;
            }
            }
        }
    }
    cout<<"\nnew matrix after changing prime no. to 0 is\n";
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<'\n';
    }
    cout<<"\nprinting in diagonal form \n";
     for(i=0;i<m+n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<n;k++)
            {
                if(j+k==i)
                {
                    cout<<a[k][j];
                }
            }

        }
        cout<<'\n';
    }
    return 0;
}
