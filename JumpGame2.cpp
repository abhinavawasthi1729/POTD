
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Greedy approach find the index from which max jump can be made
    int jump(vector<int>& nums) {
        int n=nums.size(), start=0, end=0, step=0;
        while(end<n-1){

            
            int maxdis=0;
            //start and end are the window in which to find max leap
            for(int i=start;i<=end;i++){
                maxdis=max(maxdis, i+nums[i]);
            }
            //next window start form end+1 till maxdis
            start=end+1;
            end=maxdis;
            //one step is decided
            step++; 
        }

        return step;
    }
};

int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    vector<int> num={2,3,1,1,4};
    Solution sol;
    cout<<sol.jump(num);
    
    
  
}
   