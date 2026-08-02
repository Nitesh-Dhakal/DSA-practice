class Solution {
public:
    int partition(vector<int>& arr, int start, int end) {
        int pivot = arr[end];
        int i = start - 1;
        for (int j = start; j < end; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[end]);
        return i + 1;
    }

    int quickSelect(vector<int>& nums, int start, int end, int target) {
        int pivotIndex = partition(nums, start, end);
        if (pivotIndex == target) return nums[pivotIndex];
        if (pivotIndex < target) return quickSelect(nums, pivotIndex + 1, end, target);
        return quickSelect(nums, start, pivotIndex - 1, target);
    }

    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, 0, nums.size() - 1, nums.size() - k);
    }
};