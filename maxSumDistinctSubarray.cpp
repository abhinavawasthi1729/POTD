#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int j=0, i=0;
        long long sum=0, maxi=0;
        unordered_set<int> st;

        while(j<nums.size()){
            
            if(st.find(nums[j])!=st.end()){
                while(nums[i]!=nums[j]){
                    st.erase(nums[i]);
                    sum-=nums[i];
                    i++;
                }
                i++;
            }
            else{
                st.insert(nums[j]);
                sum+=nums[j];
            }

            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                maxi=max(maxi,sum);
                st.erase(nums[i]);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};