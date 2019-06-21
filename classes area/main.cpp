#include <iostream>

using namespace std;
class rest
{
    int r,l,b,s;
public:
    int circle();
    int square();
    int rectangle();
};
int rest::circle()
{
    float a;
    cout<<"enter radius \n";
    cin>>r;
    a=3.14*r*r;
    return a;
}
int rest::square()
{
    float b;
    cout<<"enter side length \n";
    cin>>s;
    b=s*s;
    return b;
}
int rest::rectangle()
{
    float c;
    cout<<"enter length and breadth\n";
    cin>>l>>b;
    c=l*b;
    return c;
}
int main()
{ rest r;
    cout << "area of circle is : "<<r.circle();
    cout << "area of square is : "<<r.square();
    cout << "area of rectangle is : "<<r.rectangle();
    return 0;
}
