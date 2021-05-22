#include<iostream>
using namespace std;


class twostack
{
     public:
        int *arr;
        int size;
        int top1;
        int top2;
        twostack(int n)
        {
            size=n;
            arr= new int[size];
             top1=size/2;
             top2=size/2 + 1;

        }

        void push1(int x);
        void push2(int y);
        int pop1();
        int pop2();
        int peek1();
        int peek2();



};

void twostack :: push1(int x)
{
    if(top1>0)
    {
        top1--;
        arr[top1]=x;
    }
    else
    {
        cout<<"stack overflow"<<endl;
    }

}

void twostack ::push2(int y)
{
    if(top2<size-1)
    {
        top2++;
        arr[top2]=y;

    }
    else
    {
        cout<<"stack overflow"<<endl;
    }
}

int twostack ::pop1()
{
    if(top1<0)
     return -1;
    else
    {
     
        int a=arr[top1];
           top1++;
        return a;
    }
    
    
}

int twostack :: pop2()
{
    if(top2>size-1)
    {
        return -1;
    }
    else
    {
        int b=arr[top2];
        top2--;
        return b;
      
    }
}
int twostack :: peek1()
{
    if(top1<0)
    {
        return -1;
    }
    else
    {
        int m=arr[top1];
        return m;
        
    }
}

int twostack :: peek2()
{
    if(top2>size-1)
    {
        return -1;
    }
    else
    {
        int n=arr[top2];
        return n;
        
    }
}

int main()
{
    twostack t(8);
    t.push1(6);
     t.push1(0);
      t.push1(99);
      t.push2(44);
      t.push2(12);
      cout<<t.pop1()<<" ";
    cout<<t.peek1()<<" ";
    cout<<t.pop2()<<" ";
    cout<<t.peek2()<<" ";

   


    return 0;


}