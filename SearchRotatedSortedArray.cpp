#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //in rotated array one of left or right side must be sorted
        //as there is only one pivot point

        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;

            //checking if left part is sorted
            if(nums[0]<=nums[mid]){
                //check if target lies in left part
                if(target>=nums[0] && target<nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                //if right part is sorted
                //check if target lies in right part
                if(target>nums[mid] && target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;

            }

        }
        return -1;
    }
};