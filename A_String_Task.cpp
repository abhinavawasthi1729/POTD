
#include<bits/stdc++.h>
using namespace std;



int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    string s;
    cin>>s;
    set<char> vowel={'a','e','i','o','u','y','A','E','I','O','U','Y'};
    string res="";
    for(auto x: s){
        if(vowel.find(x)!=vowel.end())
            continue;
        else{
            res+=".";
            if(isupper(x))
                x=tolower(x);
            res+=x;
        }
    }

    cout<<res<<endl;
  
}
   