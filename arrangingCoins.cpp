#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(long long n) {
        int low=0, high=n;
        long long ans=0;
        while(low<=high){
            long  long mid=(low+high)/2;
            if((long long)((mid+1)*mid)<=2*n){
                ans=max(ans, mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};