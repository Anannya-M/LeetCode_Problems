<<<<<<< HEAD
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minheap;

        for(int i = 0; i<nums.size(); i++){
            if(minheap.size() < k){
                minheap.push(nums[i]);
            }
            else{
                if(minheap.top() < nums[i]){
                    minheap.pop();
                    minheap.push(nums[i]);
                }
            }
        }
        return minheap.top();
    }
=======
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minheap;

        for(int i = 0; i<nums.size(); i++){
            if(minheap.size() < k){
                minheap.push(nums[i]);
            }
            else{
                if(minheap.top() < nums[i]){
                    minheap.pop();
                    minheap.push(nums[i]);
                }
            }
        }
        return minheap.top();
    }
>>>>>>> 00b0fa39de026e2ea6cc98d517f009d9b1a76392
};