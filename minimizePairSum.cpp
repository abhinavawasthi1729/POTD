#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums)
            mp[x]++;

        vector<pair<int,int>> res;
        for(auto x: mp)
            res.push_back(x);
        

        int low=0, high=res.size()-1;

        int maxi=0;
        while(low<=high){
            if(res[low].second==0)
                low++;
            else if(res[high].second==0)
                high--;
            else{
                maxi=max(maxi, res[low].first+res[high].first);
                res[low].second--;
                res[high].second--;
            }
        }

        return maxi;
    }
};