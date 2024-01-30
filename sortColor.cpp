#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        //first arrange 0's at its correct position

        int start=0, end=0;
        while(end<nums.size()){
            if(nums[end]==0){
                swap(nums[start], nums[end]);
                start++;
                end++;
            }
            else
                end++;
        }

        //now arrange all 1's at its correct position and all 2's will be arranged automatically
        //start searching after all 1's

        end=start;
        while(end<nums.size()){
            if(nums[end]==1){
                swap(nums[start], nums[end]);
                start++;
                end++;
            }
            else 
                end++;
        }
    }
};