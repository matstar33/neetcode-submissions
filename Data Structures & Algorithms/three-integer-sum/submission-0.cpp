class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int n = nums.size();

    for (int i = 0; i < n - 2; i++) {
        if (nums[i] > 0) break;                        // 정렬됐으므로 이후 합은 항상 양수
        if (i > 0 && nums[i] == nums[i - 1]) continue; // 같은 i 값 중복 방지

        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum < 0) l++;
            else if (sum > 0) r--;
            else {
                res.push_back({nums[i], nums[l], nums[r]});
                l++; r--;
                while (l < r && nums[l] == nums[l - 1]) l++; // 같은 l 값 중복 방지
            }
        }
    }
    return res;
}
};
