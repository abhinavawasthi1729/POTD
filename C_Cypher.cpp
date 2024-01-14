
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            string s;
            cin>>s;
            int final=arr[i];
            for(auto x: s){
                if(x=='D'){  //increase U
                    if(arr[i]==9)
                        arr[i]=0;
                    else    
                        arr[i]++;
                }
                else{       //decrease D
                    if(arr[i]==0)
                        arr[i]=9;
                    else    
                        arr[i]--;
                }
            }


        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    
}
    