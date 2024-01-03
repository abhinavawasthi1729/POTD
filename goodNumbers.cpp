
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    
    int numIdenticalPairs(vector<int>& nums) {
        //O(n2) noobs approach
       /* int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                    cnt++;
            }
        }
        return cnt;
        */
        //better O(n)
        //create map 
        //if a numbers already appear we can create that many pairs
        int cnt=0;
        unordered_map<int,int> freq;
        for(auto x: nums){
            if(freq[x]>0){
                cnt+=freq[x];
            }
            freq[x]++;
        }

        return cnt;

    }
};

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    vector<int> arr={1,2,3,1,1,3};
    Solution sol;
    cout<<sol.numIdenticalPairs(arr);
    
  
}
    