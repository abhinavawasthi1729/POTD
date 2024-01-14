
#include<bits/stdc++.h>
using namespace std;



int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);

        long long  maxi=max(arr[0]*arr[1], arr[n-1]*arr[n-2]);

        cout<<maxi<<endl;

    }   
    
  
}
   