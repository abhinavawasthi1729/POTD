#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
       /* int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])<target)
                    cnt++;
            }
        }
        return cnt;
        */
        sort(nums.begin(), nums.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            //find the lower bound of target
            int low=i+1, high=nums.size()-1;
            int ind=nums.size();
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]>=req){
                    ind=mid;
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
            cnt+=ind-1-i;
        }

        return cnt;
    }
};