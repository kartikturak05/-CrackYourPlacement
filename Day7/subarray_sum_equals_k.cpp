#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int result = 0;
        int sum = 0;
        mp.insert({0,1});
        
        for(int i =0;i<nums.size();i++){
            sum+= nums[i];
            
            if(mp.find(sum-k) != mp.end()){
                result+= mp[sum-k];
            }
            
            mp[sum]++;
        }
        return result;       
    }
};