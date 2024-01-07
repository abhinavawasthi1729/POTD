
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        string res="";

        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && open==0){
                open++;
            }
            else if(s[i]=='(' && open>0){
                open++;
                res+=s[i];
            }
            else if(s[i]==')' && open==1){
                open--;
            }
            else if(s[i]==')' && open>1){
                open--;
                res+=s[i];
            }
        }
        return res;
    }
};

int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    string  s = "(()())(())";
    Solution sol;
    cout<<sol.removeOuterParentheses(s);
    
    
  
}
   