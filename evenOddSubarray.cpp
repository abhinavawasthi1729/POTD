#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int maxi=0, i=0,j=0;
        bool flag=false;
        while(j<nums.size()){
            if(flag==false){   //if start is not fixed
                if(nums[j]<=threshold && nums[j]%2==0){
                    i=j;
                    maxi=max(maxi, j-i+1);
                    flag=true;
                }
            }
            else if(flag==true){        //start is fixed
                int c=nums[j]+nums[j-1];
                if(c%2==1 && nums[j]<=threshold){
                    maxi=max(maxi, j-i+1);
                } 
                else{
                    flag=false;
                    j--;                   // expection odd but its even
                                            //we want to start from even hence one step 
                                            //back as j++ is going to happen
                }
            }
            j++;
        }

        return maxi;
    }
};