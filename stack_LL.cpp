#include<iostream>
using namespace std;

struct LL
{
    int data;
    LL *left;
};

LL*push(LL ** node ,int d)
{
   // LL * node;
    *node=new LL;
    node->data=d;
    node->left=NULL;
    return *node;
}

int main()
{
    LL *head=NULL,*tail=NULL;
    head=push(&tail,10);
    //push(20);
    if(tail)cout<<tail->data;



    return 0;
}
