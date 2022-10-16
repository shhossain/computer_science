//Check whether the given string is palindrome or not
#include<iostream>
using namespace std;
class node
{
    public:
    char c;
    node *next;
    node *pre;
    node(char ch)
    {
        c=ch;
        next=NULL;
        pre=NULL;
    }
};
node *head,*tail;
void insert(node *t)
{
    if(head==NULL)
    {
        head=tail=t;
    }
    else
    {
        t->pre=tail;
        tail->next=t;
        tail=tail->next;
    }
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->c;
        temp=temp->next;
    }
}
void checkPalindrome()
{
    int x=0;
    node *h=head,*t=tail;
    while(h!=t)
    {
        if(h->c==t->c)
        {
            h=h->next;
            t=t->pre;
        }
        else
        {
            x=1;
            break;
        }
    }
    if(x==0)
    {
        cout<<"The String is Palindrome";
    }
    else
    {
        cout<<"The String is not Palindrome";
    }
}
int main(int argc, char const *argv[])
{
    head=tail=NULL;
    node *temp;
    string s;
    cout<<"Enter the String:";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        char x=s[i];
        temp=new node(x);
        insert(temp);
    }
    cout<<"Displaying:";
    display();
    cout<<endl;
    checkPalindrome();
    return 0;
}