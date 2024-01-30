#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //storing the frequency of prefix sum
        unordered_map<int,int> mp;

        //sum is zero before adding any element
        //mp[0]=1;
        int cnt=0, prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            //now we have prefix
            //we need to find the index i such that prefix[j]-prefix[i]==k

            //if sum of first ith number is k
            if(prefix==k)
                cnt++;
            int extra= prefix-k;
            if(mp.find(extra)!=mp.end()){
                cnt+=mp[extra];
            }

            mp[prefix]++;
        }

        return cnt;
    }
};