#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//Floyd cycle detection:
//fast pointer will meet the slow pointer at any cost
    int squareDigit(int n){
        int sum=0;
        while(n){
            int r=n%10;
            sum+=r*r;
            n=n/10;
        }

        return sum;
    }
    bool isHappy(int n) {
        int slow=n, fast=n;

        do{

            slow=squareDigit(slow);
            fast=squareDigit(fast);
            fast=squareDigit(fast);

            //cout<<fast<<" "<<slow<<endl;


        }while(slow!=fast);

        if(slow==1)
            return true;
        return false;
    }
};