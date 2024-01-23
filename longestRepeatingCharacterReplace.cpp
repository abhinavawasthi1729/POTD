#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int i=0,j=0, maxcnt=0;
        int ans=0;
        while(j<s.size()){
            mp[s[j]]++;
            maxcnt=max(maxcnt,mp[s[j]]);
            //cout<<j-i+1-maxcnt<<" "<<ans<<endl;
            if((j-i+1-maxcnt)<=k){
                //still window size can grow
                ans=max(ans, j-i+1);
                j++;
            }
            else if((j-i+1-maxcnt)>k){
                while(j-i+1-maxcnt>k){
                    mp[s[i]]--;
                    i++;
                }

                //updating maxcnt
                for(auto x:mp){
                    maxcnt=max(maxcnt, x.second);
                }

                j++;
            }
        }

        return ans;
    }
};