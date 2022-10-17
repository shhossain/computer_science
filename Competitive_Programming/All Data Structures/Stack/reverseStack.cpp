#include<bits/stdc++.h>
using namespace std;

void insertAtLast(stack <int> &st,int n)
{
    if(st.empty())
    {
        st.push(n);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtLast(st,n);
    st.push(temp);
}

void reverseStack(stack <int> &st)
{
    if(st.empty())
    {
        return;
    }
    int n = st.top();
    st.pop();
    reverseStack(st);
    insertAtLast(st,n);
}

void printStack(stack <int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main()
{
    stack <int> st;
    for(int i=1;i<=5;i++)
    {
        st.push(i);
    }
    printStack(st);
    reverseStack(st);
    printStack(st);
}