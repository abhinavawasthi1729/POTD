#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=*max_element(piles.begin(), piles.end());
        int mini=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long cnt=0;
            for(int i=0;i<piles.size();i++){
                cnt+=(piles[i]+mid-1)/mid;
            }
            if(cnt<=h){
                mini=min(mini, mid);
                high=mid-1;
            }
            else
                low=mid+1;
        }

        return mini;
    }
};