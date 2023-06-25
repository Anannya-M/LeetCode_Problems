class Solution {
    public int search(int[] nums, int target) {
        int head = 0;
        int mean = 0;
        int tail = nums.length-1;

        while ( head <= tail ){
            mean = (head+tail)/2;

            if(target<nums[mean]){
                tail = mean - 1;
            }
            else if(target>nums[mean]){
                head = mean + 1;
            }
            else{
                return mean;
            }

        }
        return -1;

        
    }
}