class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map <int, int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        unordered_map <int, int>:: iterator it;
        for(it=m.begin(); it!=m.end(); it++)
        {
            if(it->second>n) return it->first;
        }
        return -1;
    }
};