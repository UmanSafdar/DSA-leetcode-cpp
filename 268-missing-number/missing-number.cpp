class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // using Gauss's formula: (n * (n + 1)) / 2
        int expected_sum = n * (n+1) / 2;
        int array_sum = 0;
        //traverse array using for each loop and add up elements
        for( int x : nums){
            array_sum = array_sum + x;
        }
        return expected_sum - array_sum;
    }
};