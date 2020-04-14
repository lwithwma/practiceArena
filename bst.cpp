#include<bits/stdc++.h>
using namespace std;

void bst(int arr[],int l,int h,int f)
{
    if(h>=l)
    {
        int mid=l+(h-l)/2;

        if(arr[mid]==f)
        {
            cout<<"Found";
            return ;
        }

        if(arr[mid]>f)//move to left
        {
            bst(arr,l,mid-1,f);
            return ;
        }
        else
        {
            bst(arr,mid+1,h,f);
            return ;
        }
    }

    cout<<"Not Found";
    return ;

}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int f=9;
    bst(arr,0,n-1,f);

    return 0;
}
