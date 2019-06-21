#include <iostream>
#include <string.h>
using namespace std;
struct student
{
    char name[20];
    int age;
    int rollno;
}s1,s2,s3;
int main()
{
    strcpy(s1.name,"anmol");
    cin>>s1.name;
    cout<<"name"<<s1.name;
    cout<<"age"<<s1.age;
    cout<<"rollno"<<s1.rollno;
    return 0;
}
