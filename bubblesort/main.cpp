#include <iostream>

using namespace std;

int main()
{ int a[30],n,i,j,c;
    cout << "enter the number of elements" << endl;
    cin>>n;
    cout<< "enter the elements \n";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                c=a[j+1];
                a[j+1]=a[j];
                a[j]=c;
            }
        }
    }
    cout<< "no. in descending order are \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
    return 0;
}
