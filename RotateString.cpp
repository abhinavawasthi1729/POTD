
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        s=s+s;
        if(s.find(goal)!=string::npos)
            return true;
        return false;
    }
};
int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    string s = "abcde", goal = "cdeab";
    Solution sol;
    cout<<sol.rotateString(s,goal);
    
  
}
    