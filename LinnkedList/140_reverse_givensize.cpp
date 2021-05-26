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
    new_node->data=num;

    if(head==NULL)
        head=new_node;
    else
    {
        Node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
    }

}

Node* reverse(Node* head,int key)
{

    if(!head)
        return NULL;
    Node* prev=NULL;
    Node* next=NULL;
    Node* curr=head;
    int count=0;
    while(curr!=NULL && count<key)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
    {
        
        head->next=reverse(next,key);
    }
    return prev;
}


void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
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
        createNode(num);
    }
    int key;
    cin>>key;
    head = reverse(head,key);
    print(head);
}