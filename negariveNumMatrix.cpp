#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int row=grid.size(), col=grid[0].size();
        for(int i=0;i<row;i++){
            int low=0, high=col-1;
            int ind=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(grid[i][mid]>=0){
                    ind=max(ind,mid);
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            //cout<<"ind "<<ind<<endl;
            cnt+=col-1-ind;
        }

        return cnt;
    }
};