#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data ;
    node *next;
};

void push(node **head,node **tail,int x)
{
    node * temp=new node;
    temp->data=x;
    temp->next=NULL;

    if(*head==NULL){
        *head=temp;
        *tail=*head;
    }else{
        (*tail)->next=temp;
        *tail=temp;
    }
}


void display(node *head)
{
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    struct node *head=NULL,*tail=NULL;
   // tail=head;
    for(int i=0;i<n;i++)
    {
        push(&head,&tail,arr[i]);
    }
   /* head=new node;
    head->data=9;
    head->next=NULL;
    node *t=new node;
    t->data=10;
    t->next=NULL;
    head->next=t;*/
    display(head);
   // cout<<head->data;

    return 0;
}
