#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(vector<int> &bloomDay, int mid, int m, int k){
        int cnt=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid)
                cnt++;
            else{
                m-=cnt/k;
                cnt=0;
            }

        }
        m-=cnt/k;
        if(m<=0)
            return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {


        int low=*min_element(bloomDay.begin(), bloomDay.end());
        int high=*max_element(bloomDay.begin(), bloomDay.end());

        int res=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(bloomDay, mid, m,k)){
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        } 
        return res;  
    }
};