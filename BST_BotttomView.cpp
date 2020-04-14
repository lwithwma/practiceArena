#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
};

node * create_node(int d)
{
    node *root=new node;
    root->data=d;
    root->left=NULL;
    root->right=NULL;

}

void display(node *root)
{
    if(root==NULL)
    {
        return ;
    }

    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

void bottomView(node *root,int n,map<int,vector<int> > &mp)
{
    if(root==NULL) return ;

    mp[n].push_back(root->data);
    bottomView(root->left,n-1,mp);
    bottomView(root->right,n+1,mp);


}

int main()
{
    //node root;
    node *root=NULL,*L=NULL,*R=NULL;
    root=create_node(10);
    L=root->left=create_node(20);
    root->right=create_node(30);

    L->left=create_node(40);
    R=L->right=create_node(50);
    R->left=create_node(60);
    cout<<"Inordered BST :";
    display(root);
    cout<<endl;

    map<int,vector<int> > mp;
    bottomView(root,0,mp);
    cout<<"Data present in Map: "<<endl;
    map<int,vector<int> > ::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
            int n=it->second.size();
           //cout<<it->second[n-1]<<" ";
           cout<<it->first<<"-->";
           for(int i=0;i<n;i++){
            cout<<it->second[i]<<" ";
           }
           cout<<endl;
    }

    cout<<"Bottom View :";
    for(it=mp.begin();it!=mp.end();it++){
        int n=it->second.size();
        cout<<it->second[n-1]<<" ";
    }
    cout<<endl;





    return 0;

}
