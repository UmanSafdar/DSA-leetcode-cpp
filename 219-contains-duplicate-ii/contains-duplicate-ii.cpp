class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> res;
    
    if(nums.empty()|| k==0){
        return false;
    }
    for(int i=0; i<n; i++){
        if(i>k){
            
           res.erase(nums[i-k-1]);
        }
        if(res.contains(nums[i])){
                return true;
        }
        res.insert(nums[i]);
    }
    
            
          return false; 
        }
        
    
};