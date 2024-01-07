
#include<bits/stdc++.h>
using namespace std;

string check(unordered_map<char,int> &map, string s){
    //if string is empty or having only one unique character
    if(map.size()<=1)
        return "no\n";

    //if it has more than 2 unique characters
   /* if(map.size()>=3)
        return "yes\n";

    //if it has exactly two unique character than both should be even
    if(map.size()==2){
        for(auto x:  map){
            if(x.second%2==1)
                return "no\n";
        }*/
        return "yes\n";
    //}

}
int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        unordered_map<char,int> map;
        for(int i=0;i<s.size()/2;i++){
            map[s[i]]++;
        }

        cout<<check(map,s);
    }
    
  
}