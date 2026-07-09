class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                // Shift all elements to the right from the end down to i + 1
                for (int j = n - 1; j > i; j--) {
                    arr[j] = arr[j - 1];
                }
                
                // If there's room, place the duplicated zero next to it
                if (i + 1 < n) {
                    arr[i + 1] = 0;
                }
                
                // Skip the zero we just inserted so we don't process it again
                i++; 
            }
        }
    }
};