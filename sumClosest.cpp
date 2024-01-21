#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int close=100001;
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-1;i>=2;i--){
            int r=i-1, l=0;
            while(l<r){
                //cout<<l<<" "<<r<<" "<<i<<endl;
                if(abs(nums[i]+nums[l]+nums[r]-target)<abs(close-target)){
                    close=nums[i]+nums[l]+nums[r];
                }
                if(nums[i]+nums[l]+nums[r]==target)
                    return nums[i]+nums[l]+nums[r];
                else if(nums[i]+nums[l]+nums[r]<target){
                    l++;
                }
                else
                    r--;
            }
        }

        return close;
    }
};