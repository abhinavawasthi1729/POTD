
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool cmp(map<char,int> &m1, map<char,int> &m2){
        
        for(auto x: m2){
            char key=x.first;
            int value=x.second;
            if(m1[key]!=value)
                return false;
        }
        if(m1.size()!=m2.size())
            return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        //its a fixed size window question
        map<char, int> m1,m2;
        for(auto x: s1)
            m1[x]++;

        int i=0, j=0;
        while(j<s2.size()){
            m2[s2[j]]++;
            if(j-i+1<s1.size()){
                j++;
            }
            else if(j-i+1==s1.size()){
                if(cmp(m1,m2))
                    return true;
                m2[s2[i]]--;
                i++;
                j++;
            }
        }

        return false;
    }
};
int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    string s1="ab", s2="eidbaooo";

    Solution sol;
    cout<<sol.checkInclusion(s1,s2);
     
  
}
   