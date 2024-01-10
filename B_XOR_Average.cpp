
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
        if(n%2==1){
            for(int i=0;i<n;i++)
                cout<<1<<" ";
            cout<<endl;
        }
        else{
            for(int i=0;i<n-2;i++)
                cout<<4<<" ";
            cout<<6<<" "<<2<<endl;
        }
    }
    
}
    