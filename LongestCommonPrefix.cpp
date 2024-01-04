
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string res="";
        int n=strs.size();
        for(int i=0;i<min(strs[0].size(), strs[n-1].size());i++){
            if(strs[0][i]!=strs[n-1][i])
                return res;
            else 
                res+=strs[0][i];
        }
        return res;
    }
};

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    vector<string> arr={"flower","flow","flight"};
    Solution sol;
    cout<<sol.longestCommonPrefix(arr);
    
  
}
    