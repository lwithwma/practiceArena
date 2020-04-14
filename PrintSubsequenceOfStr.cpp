#include<bits/stdc++.h>
using namespace std;

void printSub(string input, string output)
{
    if(input.size()==0)
    {
        cout<<output<<endl;
        return ;
    }
    printSub(input.substr(1),output);
    printSub(input.substr(1),output + input[0]);
}

int main()
{
    string input,output=" ";
    cin>>input;
    printSub(input,output);
    return 0;
}
