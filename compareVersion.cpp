#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compareVersion(string s1, string s2) {
        
        int i=0, j=0, n1=0, n2=0;

        while(i<s1.size()|| j<s2.size()){

            while(i<s1.size() && s1[i]!='.'){
                n1=n1*10+(s1[i]-'0');
                i++;
            }

            while(j<s2.size() && s2[j]!='.'){
                n2=n2*10+(s2[j]-'0');
                j++;
            }

            if(n1<n2)
                return -1;
            else if(n1>n2)
                return 1;

            i++;
            j++;
            n1=0;
            n2=0;
        }

        return 0;
    }
};