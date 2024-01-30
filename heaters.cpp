#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        //find the distance of light coming to houses from left of heaters
        //find the distance of lisght coming to house from right side 
        //than find the minimum of both of them

        //sorting both the array
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        vector<int> LHS(houses.size(), INT_MAX), RHS(houses.size(), INT_MAX);
        //calculating distance from right side heater
        for(int i=0, j=0; i<houses.size() && j<heaters.size();){
            if(houses[i]<=heaters[j]){
                RHS[i]=heaters[j]-houses[i];
                i++;
            }
            else
                j++;
        }

        /* for(int i=0;i<houses.size();i++){
            cout<<i<<" "<<RHS[i]<<endl;
         }
         */

        //calculating distance from left side heater
        for(int i=houses.size()-1, j=heaters.size()-1;i>=0 && j>=0;){
            if(heaters[j]<=houses[i]){
                LHS[i]=houses[i]-heaters[j];
                i--;
            }
            else
                j--;
        }

       /* for(int i=0;i<houses.size();i++){
            cout<<i<<" "<<LHS[i]<<endl;
         }
        */

        int maxi=INT_MIN;
        for(int i=0;i<houses.size();i++){
            int tempmini=min(LHS[i], RHS[i]);
            maxi=max(maxi, tempmini);
        }

        return maxi;
    }
};