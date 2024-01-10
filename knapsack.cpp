
#include<bits/stdc++.h>
using namespace std;

//class Solution {
//class implemented

struct Item{
    int value;
    int weight;
};



class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(Item &a, Item &b){
        return (double)a.value/a.weight > (double)b.value/b.weight;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        
        double total=0;
        for(int i=0;i<n;i++){
            //cout<<arr[i].value<<endl;
            if(W==0)
                return total;
            if(W>=arr[i].weight){
                W-=arr[i].weight;
                total+=arr[i].value;
            }
            else{
                total+=(double)(1.0*arr[i].value/arr[i].weight)*W;
                W=0;
            }
        }
        
        return total;
    }
        
};

int main(){
    freopen("E:\\coding_practice\\newC++\\.vscode\\input.txt","r",stdin);
    freopen("E:\\coding_practice\\newC++\\.vscode\\output.txt","w",stdout);
    
    struct Item item[2];
    item[0].value=60;
    item[0].weight=10;
    item[1].value=100;
    item[1].weight=20;
    Solution sol;
    cout<<sol.fractionalKnapsack(50, item, 2);
  
}
   