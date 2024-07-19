#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2 || n==3){
            return n;
        }

        vector<int> array(n+1);

        array[0] = 0;
        array[1] = 1;
        array[2] = 2;

        for(int i = 3;i<=n;i++){
            array[i]= array[i-1]+array[i-2];
        }

        return array[n];
    }
};