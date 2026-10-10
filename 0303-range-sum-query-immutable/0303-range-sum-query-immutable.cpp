
class NumArray {
private:
    vector<int> nums;  // Store the array inside the class

public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }

    int sumRange(int left, int right) {
        int sum = 0;

        for (int i = left; i <= right; i++) {
            sum += nums[i];
        }

        return sum;
    }
};
