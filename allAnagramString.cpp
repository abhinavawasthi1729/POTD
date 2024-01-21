#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool cmp(map<char, int> &m1, map<char, int> &m2 ){
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
    vector<int> findAnagrams(string p, string s) {
        if(p.size()<s.size())
            return {};
        vector<int> res;

        map<char, int> m1, m2;
        for(auto x:s){
            m1[x]++;
        }

        int i=0,j=0;

        while(j<p.size()){
            m2[p[j]]++;
            if(j-i+1<s.size()){
                j++;
            }
            else if(j-i+1==s.size()){
                if(cmp(m1,m2))
                    res.push_back(i);
                //slide the window
                m2[p[i]]--;
                i++;
                j++;
            }
        }

        return res;
    }
};