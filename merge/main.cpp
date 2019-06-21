#include <iostream>
using namespace std;
class list
{
	int data;
	list *link;
 public:
	list* create(list*,int);
	void traverse(list *);
	list* merge(list *firsta,list *firstb);
void mwithout_new(list *,list *);
};

list *first1=NULL,*first2=NULL,*first3=NULL;

list* list::create(list *first, int ele)
{
	list *temp,*curr;
	temp=new list;
	temp->data=ele;
	temp->link=NULL;
	if(first==NULL)
		first=temp;
	else
	{
		for(curr=first;curr->link!=NULL;curr=curr->link);
		curr->link=temp;
	}
	return first;
}
void list::traverse(list *first)
{
	if(first==NULL)
		cout<<"\nlist is empty";
	else
	{
		cout<<"\nthe list is:\n";
		for(list *curr=first;curr!=NULL;curr=curr->link)
			cout<<curr->data<<"\t";
	}
}

list* list::merge(list *firsta,list *firstb)
{
	list *curra=firsta;
	list *prev=NULL;
	list *currb=firstb;
	list *res=NULL;

	while(curra!=NULL&&currb!=NULL)
	{
		if(curra->data<=currb->data)
		{
			res=create(res,curra->data);
			curra=curra->link;
		}
		else
		{
			res=create(res,currb->data);
			currb=currb->link;
		}
	}
	while(curra!=NULL)
	{
		res=create(res,curra->data);
		curra=curra->link;
	}
	while(currb!=NULL)
	{
		res=create(res,currb->data);
		currb=currb->link;
	}
	traverse(res);
	return(res);
}

void list::mwithout_new(list *a, list *b){
list *currA = a, *currB = b, *currALink, *currBLink;
while(currA != NULL && currB != NULL){
while (currA->data < currB->data && currA->link != NULL)
if(currA->link->data < currB->data)
currA = currA->link;
else
break;

if(currB->data > currA->data){
currALink = currA->link;
currBLink = currB->link;
currA->link = currB;
currB->link = currALink;
currB = currBLink;
}
}
}
int main()
{
//	clrscr();
	list l1,l2;
	int ch,ele;
	do
	{
		cout<<"\n1 create X1\n2 traverse X1\n3 create X2\n4. traverse X2\n5. new merge X1andX2\n 6. Merge \n0. exit\n";
		cout<<"\nenter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:	cout<<"\nenter the data:";
				cin>>ele;
				first1=l1.create(first1,ele);
				break;
			case 2:l1.traverse(first1);break;
			case 3:	cout<<"\nenter the data:";
				cin>>ele;
				first2=l1.create(first2,ele);
				break;
			case 4:l1.traverse(first2);break;
			case 5:cout<<"THE CONCATENATED LIST IS:";
				l1.mwithout_new(first1,first2);break;
			case 6:
				first3=l1.merge(first1,first2);break;
		   //	default:cout<<"\ninvalid input";break;
		}
	}while(ch!=0);
//	getch();
return 0;
}
