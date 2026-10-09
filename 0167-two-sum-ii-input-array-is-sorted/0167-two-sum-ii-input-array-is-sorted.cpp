class Solution {
public:
     vector<int> twoSum(vector<int>& numbers, int target) {
        std::int32_t left{};
        auto right = static_cast<std::int32_t>(numbers.size() - 1);

        while (right > left) {
            std::int32_t sum{numbers.at(right) + numbers.at(left)};
            if (sum == target) {
                break;
            }
            if (sum > target) { //  2.2
                --right;
            } else { //  2.3
                ++left;
            }
        }
        return {left + 1, right + 1};
    }

};