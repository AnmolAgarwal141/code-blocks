#include <iostream>

using namespace std;

int main()
{ int b[]={4,5,4},min1,min2,r,t,y;
    if((b[0]==b[1]||b[1]==b[2]||b[0]==b[2])&&(b[0]!=b[1]!=b[2]))
    {  min1 = b[0];
           r=0;
    for (int i = 0; i < 3; i++)
    {
        if (b[i] < min1)
        {
            min1=b[i];
            r=i;
        }
     }
     t=0;
       min2 = 1000;
    for (int i = 0; i < 3; i++)
    {  if(i!=r)
       { if (b[i] <=min2 && b[i]>= min1)
           { min2 = b[i];
            t=i;
           }
       }
    }
        for(int i=0;i<3;i++)
        {
          if(i!=r&&i!=t)
          y=i;
        }
        cout<<r<<t<<y;
        cout<<b[r]<<b[t]<<b[y];
    }
    return 0;
}
