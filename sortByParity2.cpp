#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=0;
        for(int i=1;i<nums.size();i+=2){
            if(i%2==1 && nums[i]%2==0){
                while(nums[even]%2==0)
                    even+=2;
                swap(nums[i], nums[even]);
                even+=2;
            }
        }
        return nums;
    }
};