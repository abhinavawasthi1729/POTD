#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //lower bound : minimum index where element is greater than equal to target
        int low=0, high=nums.size()-1;
        int ind=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                //possible ans
                ind=min(ind, mid);
                //searching on the left
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ind;
    
    }
};