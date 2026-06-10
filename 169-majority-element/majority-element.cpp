class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mymap;
        if(nums.empty()){
            return false;
        }
        int n = nums.size()/2;
        for(int x : nums){
            mymap[x]++;
            if(mymap[x]> n){
                return x;
            }
        }
        return -1;
    }
};