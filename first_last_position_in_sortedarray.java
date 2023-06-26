public class Solution {
    public int[] searchRange(int[] nums, int target) {
        if(nums.length==0){
            return new int[]{-1,-1};
        }
        int c=0;
        int x=0,y=nums.length-1,mid;
        while(x<=y){
            mid=(y-x)/2+x;
            if(nums[mid]==target){
                c=mid;
                while(mid>=0&&(nums[mid]==target)){
                    mid--;
                }
                while(c<=y&&(nums[c]==target)){
                    c++;
                }
                
                
                return new int[]{++mid,--c};
            }
            else if(nums[mid]>target)
            y=mid-1;
            else
            x=mid+1;
        }
        return new int[]{-1,-1};
    }
} {
    
}
