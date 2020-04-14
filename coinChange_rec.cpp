/*
Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4. For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.
*/


#include<iostream>
using namespace std;

int coinCount(int S[],int n,int Note)
{
    if(Note==0) return 1;
    if(Note<0) return 0;
    if(n<=0 && Note>=1) return 0;

    return coinCount(S,n,Note-S[n-1]) + coinCount(S,n-1,Note); //By including S[n-1] + excluding S[n-1]
}

int main()
{
    int Note=4;//Note for which you need change
    int S[]={1,2,3}; //coins available for change----each coin have infinity numbers
    int n=sizeof(S)/sizeof(S[0]);
    cout<<coinCount(S,n,Note);


    return 0;
}
