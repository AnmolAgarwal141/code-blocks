#include <iostream>

using namespace std;

int main()
{ int a[40],i,n,b,c=0,pos[20];
    cout << "enter the number of elements" << endl;
    cin>>n;
    cout<< "enter the elements \n";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<< "enter the element to be searched\n";
        cin>>b;
        for(i=0;i<n;i++)
        {
            if(a[i]==b)
                pos[c++]=i+1;
        }
        cout<<"\n element is at positions: \n";
        for(i=0;i<c;i++)
            cout<<pos[i]<<'\t';
    return 0;
}
