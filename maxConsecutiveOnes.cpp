#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//longest subarray with maximum k 0's
    int longestOnes(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int j=0, i=0;
        while(j<nums.size()){
            //cout<<maxi<<" "<<i<<" "<<j<<endl;
            if(nums[j]==1 || k-->0){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else{
                while(i<nums.size() && nums[i]!=0)
                    i++;
                i++;
                k=1;
            }
        }
        return maxi;
    }
};