
#include<bits/stdc++.h>
using namespace std;



int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    int t;
    cin>>t;
    while(t--){

        int n;
        char d;
        cin>>n>>d;
        string s;
        cin>>s;
        int pos=n;
        for(int i=0;i<n;i++){
            if(s[i]<d){
                pos=i;
                break;
            }
        }

        string res=s.substr(0,pos) + d+s.substr(pos);
        //if(pos<n)
        //    res+=s.substr(pos,1);
        cout<<res<<endl;


    }   
    
  
}
   