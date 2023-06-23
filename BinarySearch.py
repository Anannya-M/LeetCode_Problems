class Solution(object):
    
    def search(self, nums, target):
        head = 0
        tail = len(nums)-1

        while head <= tail:
            mean = (head+tail)/2

            if target< nums[mean]:
                tail = mean - 1
                
            elif target > nums[mean]:
                head = mean + 1
            
            else:
                return mean

        return -1
    
    

        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """