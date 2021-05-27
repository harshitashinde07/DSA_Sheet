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
    //  head->next->next=head;
    if(detectloop())
        cout<<"loop is detected"<<endl;
    else    
        cout<<"loop not present"<<endl;

    
}