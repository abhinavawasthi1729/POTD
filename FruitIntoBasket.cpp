#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=INT_MIN;
        int i=0,j=0;
        unordered_map<int, int> mp;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            if(mp.size()<2){
                //maxi=max(maxi, j-i+1);
                j++;
            }
            else if(mp.size()==2){
                maxi=max(maxi, j-i+1);
                j++;
            }
            else{
                while(mp.size()>2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)
                        mp.erase(fruits[i]);
                    i++;
                }
                j++;
            }
        }
        maxi=max(maxi, j-i);
        return maxi;
    }
};
