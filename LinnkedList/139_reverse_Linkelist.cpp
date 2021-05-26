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
void display()
{
      Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

}
void reverseList()
{
    Node *prev=NULL;
    Node *curr=head;
    Node *next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
         prev=curr;
        curr=next;
     }
    head=prev;
    

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
    reverseList();
    display();
    
    
}