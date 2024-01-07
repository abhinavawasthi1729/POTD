
#include<bits/stdc++.h>
using namespace std;

bool solve(long long n, long long m){
    if(n==m)
        return true;
    
    if(n%3!=0 || n<m)
        return false;

    if(solve(n/3*2,m)==true)
        return true;
    
    if(solve(n/3,m)==true)
        return true;

    return false;
}

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    int t;
    cin>>t;
    while(t){
        long long n,m;
        cin>>n>>m;
        if(solve(n,m))
            cout<<"yes"<<endl;
        else 
            cout<<"no"<<endl;

        t--;
    }
  
}
    