#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{ char *p,a=90;
p=&a;
 cout <<p;
p=p+4;
    cout <<p<<'\t'<<sizeof(p);
    return 0;
}
