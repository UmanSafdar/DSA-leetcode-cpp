class Solution {
public:
    int thirdMax(vector<int>& nums) {
         // Step 1: remove duplicates using sorting
        sort(nums.begin(), nums.end());

        vector<int> uniqueNums;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                uniqueNums.push_back(nums[i]);
            }
        }

        // Step 2: check size
        int n = uniqueNums.size();

        // Step 3: return answer
        if (n < 3) {
            return uniqueNums[n - 1]; // maximum
        }

        return uniqueNums[n - 3]; // third maximum
    }

};