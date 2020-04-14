#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node* newNode(int d){
    node *temp=new node;
    temp->data=d;
    temp->next=NULL;
    return temp;
}

void display(node *head){
    node *temp=head;
    if(head==NULL){
        cout<<"Empty LL"<<endl;
        return ;
    }
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL){
            cout<<"-->";
        }
        temp=temp->next;
    }

}

void sortingLL(node *head){
    node *curr=head;
    node *next=NULL,*prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        if(prev!=NULL){
           if(prev->data>curr->data){
            int temp=prev->data;
            prev->data=curr->data;
            curr->data=temp;
           }
        }
        prev=curr;
        curr=next;
    }

}

int main(){
    node *head=NULL;
    head=newNode(30);
    head->next=newNode(20);
    head->next->next=newNode(10);
    head->next->next->next=newNode(40);
    display(head);
    cout<<endl;
    sortingLL(head);
    display(head);
}
