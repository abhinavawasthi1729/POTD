
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> set;
        for(int i=0;i<n;i++)
            set.insert(a[i]);
        for(int i=0;i<m;i++)
            set.insert(b[i]);
            
        return set.size();
    }
};

int main(){
    freopen("E:\\coding practice\\newC++\\input.txt","r",stdin);
    freopen("E:\\coding practice\\newC++\\output.txt","w",stdout);
    int arr[]={1,2,3,1,1,3};
    int brr[]={1,2};
    Solution sol;
    cout<<sol.doUnion(arr,6,brr,2);
    
  
}
    