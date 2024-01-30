#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int i=0,j=skill.size()-1;
        int req=skill[i]+skill[j];
        long long sum=skill[i]*skill[j];
        i++;
        j--;
        while(i<j){
            if(skill[i]+skill[j]!=req)
                return -1;

            sum+=skill[i]*skill[j];
            i++;
            j--; 
        }

        return sum;
    }
};