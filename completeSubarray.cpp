#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int cnt=0, i=0,j=0;
        unordered_set<int> s(nums.begin(), nums.end());
        int k=s.size();
        unordered_map<int,int> mp;
        while(j<nums.size()){
            //if a unique charater is going to add decrement k
            if(mp[nums[j]]==0)
                k--;
            //add it to map
            mp[nums[j]]++;
            
            if(k>0){
                j++;
            }
            if(k==0){
                while(k==0){
                    mp[nums[i]]--;
                    //check if a character frequency becomes zero
                    if(mp[nums[i]]==0)
                        k++;
                    i++;
                }
                j++;
            }
            //first 0 to i-1 subarray has k unique values 
            cnt+=i;
        }

        return cnt;
    }
};