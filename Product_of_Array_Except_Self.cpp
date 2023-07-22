class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(nums.size());
        vector<int> left(nums.size());
        vector<int> right(nums.size());

        left[0] = 1;
        right[n-1] = 1;

        if(n == 0){
            return {};
        }

        for(int i = 1; i<n; i++){
            left[i] = nums[i-1]*left[i-1];
        }
        for(int j = n-2; j>= 0; j--){
            right[j] = nums[j+1]*right[j+1];
        }
        for(int k = 0; k<n; k++){
            product[k] = left[k]*right[k];
        }
        return product;
    }
};