class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        s.push(-1);
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i = n2-1; i>=0; i--){
            while(s.top() != -1 && nums2[i] >= nums2[s.top()]){
                s.pop();
            }

            if(s.top() == -1){
                mp[nums2[i]] = -1;
            }else{
                mp[nums2[i]] = nums2[s.top()];
            }

            s.push(i);
        }
        
        for(int j = 0; j<n1; j++){
            ans.push_back(mp[nums1[j]]);
        }
        return ans;
    }
};
