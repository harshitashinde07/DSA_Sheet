#include<iostream>
using namespace std;

// int top=-1;
// int arr[100];

/*void push(int num,int n)
{
    if(top==n)
    {
        cout<<"overflow";
    }
    else
    {
        top++;
        arr[top]=num;
    }

}

int middle(int n)
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        int mid=n/2;
        int x=arr[mid];
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
    cout<<middle(n);

}*/

//operation on middle element of stack using linked list

struct Node
{
    int data;
    Node* next;
};
struct Node *top;

void createNode(int num,int n)
{
    struct Node* new_node= new Node();
  
    // Node *ptr=top;
    if(!new_node)
    {
        cout<<"stack overflow";
    }
    else
    {  new_node->data=num;
    new_node->next=top;
    top=new_node;

    }
}

void findmiddle(int n)
{
    if(top==NULL)
    {
        cout<<"empty stack";
    }
    else
    {
        Node *ptr=top;
          int middle=n/2;
          int i=n-1;
          if(middle%2==0)
          {
         while(i!=middle+1)
                {
                    ptr=ptr->next;
                    i--;
                 }
                cout<<ptr->data;

          }

          else
          {
              while(i!=middle)
                {
                     ptr=ptr->next;
                     i--;
                  }
                 cout<<ptr->data<<endl;

          }
     }
   

}
Node* deletemid(int n)
{
    int middle=n/2;
    Node* ptr=top;
    Node* q=top->next;
    int count=n-1;
    while(count>middle+1)
    {
        ptr=ptr->next;
        q=q->next;
        count--;
    }
    ptr->next=q->next;
    delete q;
    return top;



}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        createNode(num,n);
    }
    findmiddle(n);
    deletemid(n);
    Node* p=top;
    while(top!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}