#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxi=0;
        for(int i=0;i<nums1.size();i++){
            int k=nums1[i];
            int low=i, high=nums2.size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums2[mid]>=k){
                    maxi=max(maxi, mid-i);
                    low=mid+1;
                }
                else
                    high=mid-1;
            }
        }

        return maxi;
    }
};