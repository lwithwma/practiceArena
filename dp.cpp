#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t,i,j,k,m,n;
	cout<<"Enter number of test \n";
	cin>>t;
	for(k=0;k<t;k++)
	{
	    cout<<"Enter m*n value:\n";
	    cin>>m;
	    cin>>n;
	    int mat[m][n];
	    for(i=0;i<m;i++)
       {
         for(j=0;j<n;j++)
         {
             if(i==0)
              mat[i][j]=1;
              else
              {
                  if(j==0)
                   mat[i][j]=1;
                   else
                   {//cout<<"No jjj";
                       mat[i][j]=mat[i][j-1]+ mat[i-1][j];
                   }
              }


         }
       }

        cout<<"No of possible:"<<mat[m-1][n-1]<<"\n";
	}
	return 0;
}
