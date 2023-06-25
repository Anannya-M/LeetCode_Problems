<<<<<<< HEAD
def search(nums, target):
    head = 0
    tail = len(nums)-1

    while head <= tail:
        mean = int((head+tail)/2)

        if target < nums[mean]:
            tail = mean - 1
                
        elif target > nums[mean]:
            head = mean + 1
            
        else:
            return mean

    return -1

array = [-1,0,3,5,9,12]
target = 9
index = search(array, target)
 
if index != -1:
    print("Element is present at index", str(index))
else:
    print("Element is not present in array")
=======
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
>>>>>>> fe8370daab4a23389539682b2f5026e8bb36c1ef
