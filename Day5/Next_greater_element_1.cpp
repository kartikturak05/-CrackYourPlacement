#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge(nums2.size(),-1);
        stack<int> st;
        
        for(int i=nums2.size()-1;i>=0;i--){
            int element = nums2[i];
            
            //If empty no greater element
            if(st.empty()){
                st.push(element);
                nge[i]=-1;
                continue;
            }
            
            //If top of stack in greater , it is next greatest
            if(st.top()>element){
                nge[i]=st.top();
                st.push(element);
                continue;
            }
            
            //Remove all elements smaller than element
            while(!st.empty() && st.top()<=element){
                st.pop();
            }
            
            if(st.empty()){
                nge[i]=-1;
            }
            else{
                nge[i]=st.top();
            }
            
            st.push(element);
        }
        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans[i]=nge[j];
                }
            }
        }
        return ans;
        
    }
};