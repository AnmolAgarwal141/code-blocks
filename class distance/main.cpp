#include <iostream>

using namespace std;
class length
{
    int ft;
    int inch;
public:
   inline void get()
    {
        cin>>ft>>inch;
    }
    void add(length l1,length l2)
    {
        ft=l1.ft+l2.ft;
        inch=l1.inch+l2.inch;
        cout<<ft<<"    "<<inch;
    }

};
int main()
{ length l1,l2,l3;
    cout << "enter length  in ft and inch" << endl;
    l1.get();
    l2.get();
    l3.add(l1,l2);

    return 0;
}
