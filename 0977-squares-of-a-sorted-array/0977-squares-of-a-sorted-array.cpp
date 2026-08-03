class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        // Create a result array of the same size, filled with zeros
        vector<int> result(n); 
        
        int left = 0;          // Pointer at the very beginning
        int right = n - 1;     // Pointer at the very end
        
        // Fill the result array from the last index down to 0
        for (int i = n - 1; i >= 0; i--) {
            int leftSquare = arr[left] * arr[left];
            int rightSquare = arr[right] * arr[right];
            
            // Compare the squares
            if (leftSquare > rightSquare) {
                result[i] = leftSquare;
                left++; // Move the left pointer inward
            } else {
                result[i] = rightSquare;
                right--; // Move the right pointer inward
            }
        }
        
        return result;
    }
};