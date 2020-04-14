#include<iostream>
using namespace std;
//#define N 3
int ks(int w,int wt[], int val[],int n)
{
    if(w==0 || n==-1) return 0;
    if(wt[n]>w) return ks(w,wt,val,n-1);
    else
        return max(ks(w,wt,val,n-1),ks(w-wt[n],wt,val,n-1)+val[n]);
}

int main()
{
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int w=50;
    int n=sizeof(val)/sizeof(val[0]);
    cout<<ks(w,wt,val,n-1);

    return 0;
}
