#include<bits/stdc++.h>
using namespace std;

show_stack(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
}

int main()
{
    //to take input fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"Data in stack: ";
    show_stack(st);
    cout<<"st.top()-->"<<st.top()<<"\n";
    cout<<"st.size()-->"<<st.size()<<"\n";
   // cout<<"st.pop-->";
    st.pop();
    cout<<"Data in stack After poping: ";
    show_stack(st);
    return 0;
}
