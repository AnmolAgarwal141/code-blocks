#include <iostream>
#define max 20

using namespace std;

class stack
{
    int a[max];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(int ele)
    {
      if (top==max)
         {
             return;
         }
      top++;
      a[top]=ele;
    }
    int pop()
    {
        if(top==-1)
          return 0;
        return(a[top--]);
    }
    void display()
    {
        for(int i=0;i<max;i++)
            cout<<a[i];
    }
};

int main()
{ int n ,b[30],k=1,i,c,j=0,flag=0;
stack s1,s2;
    cout << "enter no. of trucks";
    cin>>n;
    cout<<"enter order of trucks entering";
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(b[i]==k)
        {
         s1.push(b[i]);
         k++  ;
        }
        else
        {
            s2.push(b[i]);
            j++;
        }
    }
    for(i=0;i<j;i++)
    {    c=s2.pop();
        if(c==k)
        {
            s1.push(c);
            k++;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)

    {
        cout<<"not possible";
    }
    else
        cout<<"possible";
    return 0;
}
