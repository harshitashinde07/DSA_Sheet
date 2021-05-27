#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
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
    while(count<x)
    {
        p=p->next;
        count++;
    }
    q->next=p;

    }

}


bool detectloop()
{
    if(!head)
        return false;
    Node* start=head;
    Node* end=head;
    while((end!=NULL) && (end->next!=NULL))
    {
        start=start->next;
        end=end->next->next;
        if(start==end)
            return true;
       
    }
    return false;
}

void deleteloop()
{
    Node *low=head;
    Node *high=head;

    while((low!=NULL) && (high!=NULL) && (high->next!=NULL))
    {
        low=low->next;
        high=high->next->next;
        if(low==high)
            break;
    }

    if(low==head)
    {
        while(high->next!=low)
            high=high->next;
        high->next=NULL;
    }
    else if(low==high)
    {
        low=head;
        while(low->next!=high->next)
        {
            low=low->next;
            high=high->next;
        }
        high->next=NULL;
    }


    

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
     if(detectloop())
    {
        
        cout<<"loop found"<<endl;
    }
    else
        cout<<"loop not found"<<endl;
    deleteloop();
    if(detectloop())
        cout<<"loop deleted"<<endl;
    
   
}