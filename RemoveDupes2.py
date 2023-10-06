class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
       x = nums[0]
       c = 1
       k = 1 
       for i in range(len(nums)):
            if nums[i] == x:
                c += 1
            else:
                x = nums[i]
                c = 1
            if c <= 2:
                nums[k] = nums[i]
                k +=1
                    
        
       
       return k
    

    
