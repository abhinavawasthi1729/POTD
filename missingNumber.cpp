
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n*(n+1)/2;
        for(int i=0;i<n;i++){
            total-=nums[i];
        }
        return total;
    }
};

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    int n=5;
    vector<int> arr={0,1,4,5,2};
    Solution sol;
    cout<<sol.missingNumber(arr);
    
  
}
    