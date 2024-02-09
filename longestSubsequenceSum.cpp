#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        //sort the nums coz we dont care for order we only need as much as smaller 
        //elements as possible to increase the size of sum
        sort(nums.begin(), nums.end());
        //find the prefix sum from smallest to highest to get maximum lenght for 
        //any given sum
        vector<int> prefix;
        int sum=0;
        for(auto x: nums){
            sum+=x;
            prefix.push_back(sum);
        }
        vector<int> res;

        for(int i=0;i<queries.size();i++){
            int key=queries[i];
            int low=0, high=nums.size()-1;
            int ind=nums.size();
            //finding upper_bound of for each query individually
            while(low<=high){
                int mid=low+(high-low)/2;
                if(prefix[mid]>key){
                    ind=min(ind, mid);
                    high=mid-1;
                }
                else
                    low=mid+1;
            }

            res.push_back(ind);
        }
        return res;
    }
};