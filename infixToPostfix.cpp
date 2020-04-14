#include<bits/stdc++.h>
using namespace std;


void infixToPostfix(string exp)
{
    stack<char> st;
    int l=exp.length();
    int i,j;
    string output;
    for(i=0;i<l;i++)
    {
        if((exp[i]>='a' && exp[i]<='z')||(exp[i]>='A' && exp[i]<='Z'))
        {
            output[i]=expi[i];
        } else{

        }

    }
}

int main()
{
    string exp="a*(b+c)/d";
    infixToPostfix(exp);
    return 0;
}
