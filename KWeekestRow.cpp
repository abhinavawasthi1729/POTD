#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*static bool cmp(pair<int,int>  &a , pair<int, int> &b){
        if(a.first==b.first)
            return a.second<b.second;
        return a.first<b.first;
    }*/
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int,int> mp;
        int row=mat.size(), col=mat[0].size();
        
        for(int i=0;i<row;i++){
            int low=0, high=col-1;
            int ind=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(mat[i][mid]==1){
                    ind=max(ind, mid);
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        
            mp.insert(make_pair(ind,i));
        }

       /* vector<pair<int,int>> freq;
        for(auto x: mp)
            freq.push_back(x);
        
        

        sort(freq.begin(), freq.end(), cmp);
        */
        

        vector<int> res;
        for(auto x:mp){
            res.push_back(x.second);
            k--;
            if(k==0)
                break;
        }
        return res;
    }
};