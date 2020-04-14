#include<iostream.h>
using namespace std;
#define X INT_MAX

void partion(int arr[],int n){
    int i=0,j=n-1;
    int piv=arr[0];
    while(i>j){

        if(arr[j]<arr[i])
          swap(arr[i],arr[j]);

        if(arr[i]<=arr[piv]){
            i++;
        }
        if(arr[j]>arr[piv]){
            j++
        }
    }
}

void quickSort(int arr[],int n){

}

int main(){
    int arr[]={10,30,5,18,40,50,7,X};
    int n=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,n);


}
