
#include<bits/stdc++.h>
using namespace std;



int main(){
    //freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    //freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        //len 2->1 partition 
        //len 5->5 partition
        //len n->n-1 partion
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        int partition=sum-n;

        if(partition%2==1)
            cout<<"errorgorn";
        else
            cout<<"maomao90";
        cout<<endl;

         
    }
     
  
}
   