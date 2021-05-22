#include<iostream>
// #include<stack>
using namespace std;

int top=-1;
int arr[100];

void push(int num,int n)
{
    if(top==n)
    {
        cout<<"stack full";
    }
    else
    {
        top++;
        arr[top]=num;
    }
}


int display()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        top++;
        int x=arr[top];
        return x;
        
    }
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
   cout<<display();
}

