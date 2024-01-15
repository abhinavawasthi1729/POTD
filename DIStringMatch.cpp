#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res(s.size()+1);
        int i=0, j=s.size();
        for(int k=0;k<s.size();k++){
            if(s[k]=='I')
                res[k]=i++;
            else
                res[k]=j--;
        }  
        res[s.size()]=i;
        return res;
    }
};