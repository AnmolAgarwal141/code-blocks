#include <iostream>

using namespace std;

class Pnode{
public:
int coeff,pow;
Pnode *next;
};
class poly{
Pnode *head;
public:
poly(){ head=NULL;}
void append(int c,int p);
void mappend(int c,int p);// multiplication
void display();
poly multi(poly a,poly b);
};

void poly::append(int c,int p)
{
 Pnode *temp=new Pnode;
 temp->coeff=c;
 temp->pow=p;
 temp->next=temp->prev=NULL;
if(f==NULL)
    {
        f=temp;
        f->next=f->prev=f;

    }
	else
	{
		   node *curr;
		   for(curr=f;curr->next!=f;curr=curr->next);
		   curr->next=temp;
		   temp->prev=curr;
		   temp->next=f;
		   f->prev=temp;
	}
	return(f);
}
void poly::display()
{
node*curr=f;
        cout<<curr->coe<<"^"<<curr->exp;
	    if(curr->next!=f)
	      cout<<"+";

	for(curr=f->next;curr!=f;curr=curr->next)
	{
	    cout<<curr->coe<<"^"<<curr->exp;
	    if(curr->next!=f)
	      cout<<"+";
	}
	cout<<"\n";
}

void main(){
poly a,b,c;
a.append(5,9);
a.append(3,4);
a.append(2,3);
a.append(1,0);
a.display();
b.append(4,8);
b.append(2,3);
b.append(3,2);
b.display();
c=c.add(a,b);
c.display();
poly d=d.multi(a,b);

d.display();
}

poly poly::multi(poly a, poly b){
Pnode *p1=a.head, *p2;
poly p3;
while(p1!=NULL)
{ p2=b.head;
while(p2!=NULL){
p3.mappend(p1-&gt;coeff*p2-&gt;coeff,
p1-&gt;pow+p2-&gt;pow);
p2=p2-&gt;next;
}
p1=p1-&gt;next;}

return p3;}
void poly::mappend(int c,int p){
if(head==NULL) {
Pnode *temp=new Pnode;
temp->coeff=c;
temp->pow=p;
temp->next=NULL;
head=temp;
head->next=head->prev=head return;}
Pnode *t=head,*tail=NULL;
while(t!=NULL)
{
if(t->pow==p){ t->coeff+=c; return;}
else if(t-&gt;pow&lt;p){
Pnode *temp=new Pnode;
temp->coeff=c; temp->pow=p;

tail->next=temp; temp->next=t;}
tail=t; t=t-&gt;next; return;}
Pnode *temp=new Pnode;
temp-&gt;coeff=c; temp-&gt;pow=p;
temp-&gt;next=NULL; tail-&gt;next=temp;
}
