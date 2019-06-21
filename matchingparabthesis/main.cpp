#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Parenthesis
{
char s[50];
int top;
public:
Parenthesis(){
top=-1;}
void push(char);
char pop();
int CheckExp(char[]);
};
void Parenthesis::push(char c){
if(top==49){
return;}
else
s[++top]=c;}
char Parenthesis::pop(){
if(top==-1){
return '\0';}
else
return s[top--];}
int Parenthesis::CheckExp(char a[]){
for(int x=0;a[x]!='\0';x++){
if(a[x]=='('||a[x]=='['||a[x]=='{'){
push(a[x]);
continue;}
else
switch(a[x]){
case ')':if(top==-1)return 0;
	 char d=pop();
	 if(d=='['||d=='{')
	 return 0;
	 break;
case ']':if(top==-1)return 0;
	 char e=pop();
	 if(e=='('||e=='{')
	 return 0;
	 break;
case '}':if(top==-1)return 0;
	 char q=pop();
	 if(q=='['||q=='(')
	 return 0;
	 break;
default:continue;
}}
if(top==-1)
return 1;
else
return 0;
}
int main(){
Parenthesis p;
cout<<"Enter an expression:";
char exp[50];
gets(exp);
if(p.CheckExp(exp)==1)
cout<<"Expression is valid";
else
cout<<"Expression is invalid";
getch();
return 0;}
