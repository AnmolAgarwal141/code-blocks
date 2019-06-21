#include <iostream>
#include<math.h>
using namespace std;
class quadequation
{
    float d,a,b,c,x1,x2;
public:
    void get()
    {
        cout<<"enter a,b,c for eqn ax^2+bx+c \n";
        cin>>a>>b>>c;
    }
    void disc()
    {
        d=b*b-4*a*c;
        cout<<"discriminant of eqn is :  "<<d;
    }
    void root()
    {
        if(d>=0)
        {
            x1=(-b+pow(d,0.5))/(2*a);
            x2=(-b-pow(d,0.5))/(2*a);
            cout<<"roots are"<<x1<<"and"<<x2;
        }
         if(d<0)
        {

            cout<<"roots is"<<-b/(2*a)<<"+i"<<pow(-d,0.5)/(2*a);
            cout<<"roots is"<<-b/(2*a)<<"-i"<<pow(-d,0.5)/(2*a);
        }

    }
};
int main()
{
    quadequation q1;
    q1.get();
    q1.disc();
    q1.root();
    return 0;
}
