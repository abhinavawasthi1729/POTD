
#include<bits/stdc++.h>
using namespace std;

int minMoves(int a[], int n, int k)
{
    int mod=1000000007;
    long long cnt=0;
    for(int i=0;i<n-1;i++){
        //cout<<a[i]<<" ";
        int temp=0;
        if(a[i]<a[i+1]){
            if((a[i+1]-a[i])%k==0)
                temp= (a[i+1]-a[i])/k;
            else
                temp= (a[i+1]-a[i])/k+1;
            a[i+1]-=temp*k;
            cnt+=temp;
        }
        //cout<<cnt<<" ";
    }
    
    return cnt%mod;
}

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    int arr[]={1,2,3,1,1,3};
    //Solution sol;
    cout<<minMoves(arr,6,2);
    
  
}
    