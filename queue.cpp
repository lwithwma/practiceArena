#include<bits/stdc++.h>

using namespace std;
showQueue(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    //q.emplace(30);
    cout<<"size of queue: "<<q.size()<<"\n";
    cout<<"Queue: ";
    showQueue(q);
    cout<<"q.front()-->"<<q.front()<<"\n";
    cout<<"q.back()-->"<<q.back()<<"\n";
    cout<<"q.pop()-->";
    q.pop();
    cout<<"Queue: ";
    showQueue(q);

    return 0;
}
