#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
struct Node* head=NULL;
void createNode(int num)
{
    struct Node* new_node= new Node();
    new_node->data=num;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        Node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
       
    }

    
}
void createloop(int x)
{
    Node* p=head;
    Node* q=head;

    if(x==0)
       {
           while(p->next!=NULL)
            p=p->next;
        p->next=NULL;

       }
    else
    {
    int count=0;
    
    while(q->next!=NULL)
    {
         q=q->next;
    }
    while(count<x-1)
    {
        p=p->next;
        count++;
    }
    q->next=p;

    }

}
Node* startofloop()
{
    Node* low=head;
    Node* high=head;

    low=low->next;
    high=high->next->next;

    while( (high!=NULL) && (high->next!=NULL) )
    {
        if(low==high)
            break;
        low=low->next;
        high=high->next->next;

        
    }
    if(low!=high)
        return NULL;    
    low=head;
     while(high!=low)
        {
            low=low->next;
            high=high->next;
        }
         
       
    return low;
    
     
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n ;i++)
    {
        int num;
        cin>>num;
        createNode(num);
    }
    cout<<"create loop at"<<endl;
    int x;
    cin>>x;
    // cout<<"x =  "<<x;
    createloop(x);
    Node* res;
    res = startofloop();
    if(res==NULL)
        cout<<"no loop"<<endl;
    else
        cout<<res->data;

}
