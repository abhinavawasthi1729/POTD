
#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    int t;
    cin>>t;
    while(t){
        string aim="codeforces";
        string res;
        cin>>res;
        int cnt=0;
        for(int i=0;i<10;i++){
            if(aim[i]!=res[i])
                cnt++;
        }
        cout<<cnt<<endl;

        t--;
    }
  
}
    