
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int index=0, cnt=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[index])
                cnt++;
            else
                cnt--;

            if(cnt==0){
                index=i;
                cnt=1;
            }
        }
        return nums[index];
        
    }
};

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    vector<int> arr={1,2,3,1,1,3,1};
    Solution sol;
    cout<<sol.majorityElement(arr);
    
  
}
    