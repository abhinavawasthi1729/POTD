#include<bits/stdc++.h>
using namespace std;


class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    //number of occurance 
	    //1. if  element is present : uperr_bound-lower_bound
	    //2.not present:
	    //a)lower_bound is pointing to end 
	    //pointint to some other index
	    
	    int low=0, high=n-1;
	    int lower_bound=n;
	    while(low<=high){
	        int mid=(low+high)/2;
	        if(arr[mid]>=x){
	            lower_bound=min(lower_bound,mid);
	            high=mid-1;
	        }
	        else
	            low=mid+1;
	    }
	    
	    if(lower_bound==n || arr[lower_bound]!=x)
	        return 0;
	   
	   low=0, high=n-1;
	   int upper_bound=n;
	   while(low<=high){
	       int mid=(low+high)/2;
	       if(arr[mid]>x){
	           upper_bound=min(upper_bound, mid);
	           high=mid-1;
	       }
	       else
	            low=mid+1;
	   }
	   
	   return upper_bound-lower_bound;
	}
};