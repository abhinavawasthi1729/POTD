
#include<bits/stdc++.h>
using namespace std;



int main(){
    //freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    //freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    int t;
    cin>>t;
    while(t--){

            int  n;
            cin>>n;

            if((int)log10(n)+1==2){
                cout<<(n%10);
                cout<<endl;
            }
            else{

                int mini=9;
                while(n>0){
                    int remain=n%10;
                    mini=min(mini,remain);
                    n/=10;
                }

                cout<<mini<<endl;
            }
    }
     
  
}
   