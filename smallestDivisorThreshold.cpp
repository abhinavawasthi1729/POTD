#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& arr, int limit) {
        int low=1, high=*max_element(arr.begin(), arr.end());
	int ans=-1;

	while(low<=high){
		int mid=(low+high)/2;
		int sum=0;
		for(auto x: arr)
			sum+=(x+mid-1)/mid;        //for ceiling (x+k-1)/k

		if(sum<=limit){
			ans=mid;
			high=mid-1;
		}
		else
			low=mid+1;

	}
	return ans;
    }
};