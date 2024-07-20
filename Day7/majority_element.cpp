#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int,int> mp;
    int majorityElement(vector<int>& nums) {
            
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int result1 = 0;
        int result2 = 0;
        
         for (auto it = mp.begin(); it != mp.end(); ++it) {
             if(it->second >= result2){
                    result1 = it->first;
                    result2 = it->second;
             }
        }
        return result1;
    }
};