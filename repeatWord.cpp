/*Given an array of strings containing names of people, print the contents of the array after modifying it like so: a) If there is only one occurrence of the name in the array, print it as it is .2) However, if there is another occurrence of the word. then append the count of the number to the string starting from the second occurrence onwards. Say if the array was “john cena john jake”. then print “john cena john2 jake”.The obvious solution was to use a hashmap.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
    {
     string s;
     getline(cin,s);
     stringstream ss(s);
     string word;

     map<string,int> mp;

     while(ss>>word)
     {
        mp[word]++;
        if(mp[word]==1)
        {
            cout<<word<<" ";
        }else{
            cout<<word<<mp[word]<<" ";
        }
     }


     return 0;
    }

