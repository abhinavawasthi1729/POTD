
#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int maxi=0,cnt=0;
        int i=0;
        while(i<n){
            if(arr[i]==1){
                i++;
            }

            else{
                cnt=0;
                while(arr[i]==0){
                    cnt++;
                    i++;
                }
            }
            maxi=max(maxi,cnt);
        }

        cout<<maxi<<endl;
        t--;
    }
  
}
    