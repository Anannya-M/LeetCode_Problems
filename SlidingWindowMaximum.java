class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        
        LinkedList<Integer> win=new LinkedList<>();
        int[] ans=new int[nums.length-k+1]; 
        int ptr=0;

        int s=0,e=0;
        for(; e<k ;e++){ 
            while(!win.isEmpty() && nums[win.peekLast()]<nums[e]){
                win.removeLast();
            }
            win.addLast(e);
        } 

        ans[ptr++]=nums[win.peekFirst()];
        
        for(;e<nums.length;e++){
            while(!win.isEmpty() && nums[win.peekLast()]<nums[e]){
                win.removeLast();
            }
            win.addLast(e);
            if(nums[s++]==nums[win.peekFirst()]){
                win.removeFirst();   
            }

            ans[ptr++]=nums[win.peekFirst()]; 
            
        }
        return ans;
    }
}