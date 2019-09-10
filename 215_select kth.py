# -*- coding: utf-8 -*-
"""
Created on Tue Sep 10 22:06:18 2019

@author: K
"""

class Solution(object):
    def findKthLargest(self, nums, k):
        return self. quick(nums,k)
    def quick(self,nums,k):
        k=len(nums)-k 
        first=0
        last=len(nums)-1
      
        while first<last:
            j=quick_sort(lst,first,last) 
            if j==k:
                break
            if j>k:
                last=j-1
            if j<k:
                first=j+1 
        return nums[k]
            
            
        

    def quick_sort(self,nums,first,last):
        mid_value=nums[first]
        while first<last:
            while first<last and nums[last]>=mid_value:
                last-=1
            nums[first]=lst[last]
            
            while first <last and nums[first]<mid_value:  
                first+=1
           nums[last]=nums[first] 
        nums[first]=mid_value
        
        
        return first