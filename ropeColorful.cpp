
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string s, vector<int>& neededTime) {
        
        //first ballon must be unique
        int maxi=neededTime[0];
        //this sum accumulate all maximum
        int sum=0;

        int totalsum=neededTime[0];
        
        for(int i=1;i<neededTime.size();i++){
             //they are consecutive
            if(s[i]==s[i-1]) {
                maxi=max(maxi, neededTime[i]);
            }       
            else{
                sum+=maxi;
                maxi=neededTime[i];
            }

            totalsum+=neededTime[i];
        }

        sum+=maxi;
        return totalsum-sum;
        
    }
};

int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
   string s="abaac";
   vector<int> time={1,2,3,4,5};
     Solution sol;
     cout<<sol.minCost(s,time);
  
}
   