#include <iostream>

using namespace std;

int main()
{ int a[30],n,pos,b,i,s;
   cout << "enter the number of elements" << endl;
    cin>>n;
    cout<< "enter the elements \n";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<< "enter the element to be inserted \n";
        cin>>b;
         cout<< "enter the position of element to be inserted \n";
         cin>>pos;
         for(i=n;i>pos-1;i--)
         {
             a[i]=a[i-1];
         }
         a[i]=b;
         cout<< "new array is\n";
         for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<'\t';
    }
      cout<< " \nenter the position of delete";
      cin>>s;
      for(i=pos;i<n+1;i++)
      {
          a[i]=a[i+1];
      }
        for(i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
    return 0;
}
