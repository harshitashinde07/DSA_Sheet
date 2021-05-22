#include<iostream>
// #include<stack>
using namespace std;

int top=-1;
int arr[100];

void push(int num,int n)
{
    if(top>=n-1)
    {
        cout<<"stack full";
    }
    else
    {
        top++;
        arr[top]=num;
    }
}

int pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
       int x=arr[top];
       top--;
       return x;
    }
}


int display(int n)
{
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}

int peek()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        int x=arr[top];
        return x;
    }
}
bool isEmpty()
{
    return top==-1;

}

bool isFull(int n)
{
    return top==n-1;
}


int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int num;
       cin>>num;
       push(num,n);
   }
   cout<<pop()<<endl;
   cout<<peek()<<endl;
   display(n);
}

