class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size()-1;
        int mod = 1000000007;
    
        for(int i =0; i<=n; i++){   
            long long product = nums[i] *nums[i];
            int square = product % mod;
            nums[i]= square;     
        }
       
        sort(nums.begin(), nums.end());
    return nums;
    }
    
};