#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define TEACHER 1
#define STUDENT 2
#define ISSUED 1
#define AVAILABLE 2

using namespace std;

struct user
{
	char username[20];
	char password[20];
	int type;
};

struct book
{
	char name[30];
	char author[20];
	int status;
};

int nu=0,nb=5;
user userlist[10];
book booklist[5]={
	                {"Percy Jackson","Rick Riordan",AVAILABLE},
	                {"Harry Potter","JK Rowling",AVAILABLE},
	                {"The Godfather","Mario Puzo",AVAILABLE},
	                {"And then there were none","Agatha Christie",AVAILABLE},
	                {"Elephants can talk","Agatha Christie",AVAILABLE}
				};
void password(user);
void login();
void adduser();
void issue();
void search();
void returnbook();
void mainmenu();

void password(user temp)
{
	cout<<"Enter password: ";
	char str[20];
	int i=0;
	char ch=0;
	while(ch!=13)
	{
		fflush(stdin);
		ch=getch();
		if(ch==8)
		{
			cout<<"\b \b";
			i--;
		}
		else if(ch!=13)
		{
			cout<<"*";
			str[i++]=ch;
		}
		else
		{
			str[i]='\0';
			break;
		}
	}

	if(strcmp(temp.password,str)!=0)
	{
		cout<<"Wrong Password\nEnter again";
		getch();
		password(temp);
	}
	else
	{
		cout<<"\nLogged in\nPress any key to continue";
		getch();
	}
	mainmenu();
}

void adduser()
{
	user newuser;
	system("cls");
	fflush(stdin);
	cout<<"Enter username: ";
	gets(newuser.username);
	cout<<"Enter password: ";
	gets(newuser.password);
	cout<<"Enter type of user:\n";
	cout<<"Enter 1 for teacher\nEnter 2 for student\n";
	cin>>newuser.type;
	userlist[++nu]=newuser;
	mainmenu();
}

void login()
{
	system("cls");
	fflush(stdin);
	char name[20];
	int opt,i;
	cout<<"Choose login option(Enter number):\n";
	cout<<"1. Teacher\n2. Student\n\n";

	do
	{
		cin>>opt;
		switch(opt)
		{
			case 1:
			case 2:
				cout<<"Enter username: ";
				fflush(stdin);
				gets(name);
				for(i=0;i<=nu;i++)
					if(strcmp(userlist[i].username,name)==0 && userlist[i].type==opt)
					{
						password(userlist[i]);
						break;
					}
				if(i>nu)
				{
					cout<<"Record not found\nTry again";
					getch();
					break;
				}
			default:
				cout<<"Invalid";
				getch();
				mainmenu();
		}
	}
	while(opt!=1 || opt!=2);
	mainmenu();
}

void issue()
{
	char name[30];
	int i=0;
	system("cls");
	cout<<"Enter name of the book you wish to issue: ";
	fflush(stdin);
	gets(name);
	for(;i<=nb;i++)
		if(strcmpi(name,booklist[i].name)==0)
		{
			booklist[i].status=ISSUED;
			break;
		}
	if(i>nb)
		cout<<"Record not found\nPress any key to return to main menu";
	else
		cout<<"\nBook Issued\nPress any key to return to main menu";
	getch();
	mainmenu();
}

void returnbook()
{
	char name[30];
	int i=0;
	system("cls");
	cout<<"Enter name of the book you wish to return: ";
	fflush(stdin);
	gets(name);
	for(;i<=nb;i++)
		if(strcmpi(name,booklist[i].name)==0)
		{
			booklist[i].status=AVAILABLE;
			cout<<"\nBook returned";
			break;
		}
	if(i>nb)
		cout<<"\nRecord not found";
	cout<<"\nPress any key to return to main menu";
	getch();
	mainmenu();
}

void search()
{
	char name[30];
	int i=0;
	system("cls");
	cout<<"Enter name of the book you wish to search: ";
	fflush(stdin);
	gets(name);
	for(;i<=nb;i++)
		if(strcmpi(name,booklist[i].name)==0)
		{
			if(booklist[i].status==ISSUED)
				cout<<"Book is issued\n";
			else
				cout<<"Book is available\n";
			break;
		}
	if(i>nb)
		cout<<"Book record not found";
	cout<<"\nPress any key to return to main menu";
	getch();
	mainmenu();
}

void mainmenu()
{
	system("cls");
	cout<<"Choose option(Enter number):\n";
	cout<<"1. Login to LMS";
	cout<<"\n2. Add User";
	cout<<"\n3. Issue Book";
	cout<<"\n4. Return Book";
	cout<<"\n5. Search Book";
	cout<<"\n6. Exit\n";
	int opt;
	do
	{
		cin>>opt;
		switch(opt)
		{
			case 1:
				login();
				break;
			case 2:
				adduser();
				break;
			case 3:
				issue();
				break;
			case 4:
				returnbook();
				break;
			case 5:
				search();
				break;
			case 6:
				exit(1);
			default:
				cout<<"Invalid. Enter again\n";
		}
	}
	while(opt>=1 && opt<=6);
}

int main()
{
	mainmenu();
	return 0;
}
