class Solution:
    def majorityElement(self, nums: List[int]) -> int:
       
        m = None
        count = 0 
        for num in nums:

            if count == 0:
                m = num
    
            if num == m:
                count += 1
        
            else:
                count -= 1

        return m
    
    


       
