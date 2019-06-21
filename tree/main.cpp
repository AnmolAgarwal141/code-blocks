#include <iostream>

using namespace std;

class tree
{
public:
    tree * lchild;
    tree * rchild;
    int data;
    void create(tree*);
    void inorder(tree*);
   // void preorder(tree*);
    //void postorder(tree*);

};
tree* root;
void tree::create(tree* root)
{  root=new tree;
    int x;
    cout<<"enter data : ";
    cin>>x;
    if(x==-1)
        return ;
    root->data=x;
    root->lchild=NULL;
    root->rchild=NULL;
    cout<<"enter l child of "<<x<<": ";
    create(root->lchild);
    cout<<"enter rchild of "<<x<<": ";
    create(root->rchild);
    inorder(root);
}
void tree::inorder(tree* root)
{
    if(!root)
        return;
    inorder(root->lchild);
    cout<<root->data<<" ";
    inorder(root->rchild);
}
int main()
{ tree t;int ch;
    do
    {cout<<"enter choice \n1.create \n2.inorder\n8.exit";
    cin>>ch;
    switch(ch)
    {
        case 1: t.create(root);
                 break;
        case 2: t.inorder(root);
                 break;
        case 8:break;
        default: cout<<"invalid choice";
    }
    }while(ch!=8);
    return 0;
}
