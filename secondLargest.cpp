
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max=INT_MIN, smax=INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            smax=max;
	            max=arr[i];
	        }
	        else if(arr[i]<max && arr[i]>smax){
	            smax=arr[i];
	        }
	    }
	    if(smax==INT_MIN)
	        return -1;
	    return smax;
	}
};

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    int n=5;
    int arr[]={4,3,21,6,7};
    Solution sol;
    cout<<sol.print2largest(arr,n);
    
  
}
    