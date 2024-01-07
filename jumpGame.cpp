
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findIndex(vector<int>& nums,int start){
        int maxi=INT_MIN;
        int ind=-1;
        for(int i=start;i<nums.size()&& i<=start+nums[start];i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                ind=i;
            }

        }
        return ind;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        int step=n-1;
        int start=0;
        int cnt=0;
        while(step>0){
            //auto ind=min(nums.begin()+start+nums[start],nums.end());
            //int maxind=max_element(nums.begin()+start,ind)-nums.begin();
            cnt++;
            int ind=findIndex(nums,start);
            start=ind;
            step-=nums[ind];
            if(step<=0)
                cnt++;
        }
        return cnt;
    }
};

int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    vector<int> num={1,2,3};  
    Solution sol;
    cout<<sol.jump(num);
  
}
   