
#include<bits/stdc++.h>
using namespace std;



int main(){
    //freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    //freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int total=0;
    int i=0;
    while(i<n){
        if(s[i]=='x'){
            int cnt=1;
            while((i+1)<n && s[i+1]=='x'){
                cnt++;
                i++;
            }
            if(cnt>=3)
                total+= cnt-2;
        }
        i++;
    }

    cout<<total;
    
    
}
    