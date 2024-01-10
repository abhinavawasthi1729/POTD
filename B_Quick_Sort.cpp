
#include<bits/stdc++.h>
using namespace std;



int main(){
    //freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    //freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int start=1, notCorrect=0;
        for(int i=0;i<n;i++){
            if(arr[i]==start)
                start++;
            else    
                notCorrect++;
        }

        cout<<(notCorrect+k-1)/k<<endl;

    }
    
}
    