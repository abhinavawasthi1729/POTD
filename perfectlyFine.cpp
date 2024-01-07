
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
        vector<pair<int,string>> arr;
        int num;
        string str;
        for(int i=0;i<n;i++){
            cin>>num;
            cin>>str;
            pair<int, string> temp(num,str);
            arr.push_back(temp);
        }
            
    

        long long mini1=INT_MAX, mini2=INT_MAX, total=INT_MAX;
        int i=0;
        for(int i=0;i<n;i++){
            long long num=arr[i].first;
            string s=arr[i].second;
            if(s[0]=='1' && s[1]=='1'){
                total=min(total, num);
            }
            else if(s[0]=='1')
                mini1=min(mini1,num);
            else if(s[1]=='1')
                mini2=min(mini2,num);
        }

        //cout<<total<<" "<<mini1<<" "<<mini2;
        if(total==INT_MAX && (mini1==INT_MAX || mini2 ==INT_MAX))
            cout<<-1<<endl;
        else 

            cout<<min(total, mini1+mini2)<<endl;


        //cout<<maxi<<endl;
        t--;
    }
  
}
    