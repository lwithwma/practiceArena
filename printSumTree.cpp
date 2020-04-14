
/*A survey of machine learning techniques applied to software defined networking
(SDN): Research issues and challenges.

Tree was given in the form: (node value(left subtree)(right subtree))

Example:(0(5(6()())(4()(9()())))(7(1()())(3()())))
                             0
                          /     \
                       5         7
                    /    \      /   \
                   6       4    1     3
                            \
                             9
                             */
#include<iostream>
using namespace std;

int main(){
    string s="(0(5(6()())(4()(9()())))(7(1()())(3()())))";

    int l=2;//level of tree to sum
    int i=s.length();
    int n=0;
    int sum=0;
    for(i=0;i<s.length();i++){
        if(n==l+1){
            if(s[i]>='0' && s[i]<='9'){
                sum+=s[i]-'0';//stoi(s[i])
            }
        }

        if(s[i]=='('){
            n++;
           }else if(s[i]==')'){
               n--;
           }

    }


   cout<<sum;

    return 0;
}
