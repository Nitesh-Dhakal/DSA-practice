class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>result(nums1.size(),-1);
        unordered_map<int,int>val;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty()&&nums2[i]>nums2[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                val[nums2[i]] = nums2[st.top()];
            }else{
                val[nums2[i]] = -1;
            }
            st.push(i);
        }
        for(int i=0;i<nums1.size();i++){
            result[i] = val[nums1[i]];
        }
        return result;
    }
};