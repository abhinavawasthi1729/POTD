#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //we can find the sum of n natural no
        int n=nums.size();
        int sum=(n*(n+1))/2;
        for(auto x: nums)
            sum-=x;
        return sum;
    }
};